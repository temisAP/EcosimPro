--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompFrame.el
-- DESCRIPTION: Defines a variable to add wind effects, some specific functions,
--    and a component to simulate a non-linear six-degrees-of-freedom aircraft
--    body
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 4/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 


-- Global variables
--------------------------------------------------------------------------------
-- Defines a Vwind variable used to add wind effects to the model
--------------------------------------------------------------------------------
BOUND REAL Vwind[EarthAxis] = {0., 0., 0.}  UNITS u_m_s		"Wind velocity"


-- Functions
--------------------------------------------------------------------------------
-- Purpose: To convert Euler angles coordinates to quaternions coordinates
--------------------------------------------------------------------------------
FUNCTION NO_TYPE EulerToQuater
   (
   IN REAL psi                   	UNITS	u_rad		"Yaw angle",
   IN REAL theta                  	UNITS u_rad		"Pitch angle",
   IN REAL phi                   	UNITS u_rad		"Roll angle",
   OUT REAL lambda[4]             	UNITS no_units	"Quaternions coordinates"
   )

   "Converts Euler angles coordinates to quaternions coordinates"

   BODY
      lambda[1] = cos(phi/2.) * cos(theta/2.) * cos(psi/2.) + \
         sin(phi/2.) * sin(theta/2.) * sin(psi/2.)
      lambda[2] = sin(phi/2.) * cos(theta/2.) * cos(psi/2.) - \
         cos(phi/2.) * sin(theta/2.) * sin(psi/2.)
      lambda[3] = cos(phi/2.) * sin(theta/2.) * cos(psi/2.) + \
         sin(phi/2.) * cos(theta/2.) * sin(psi/2.)
      lambda[4] = cos(phi/2.) * cos(theta/2.) * sin(psi/2.) - \
         sin(phi/2.) * sin(theta/2.) * cos(psi/2.)

END FUNCTION

--------------------------------------------------------------------------------
-- Purpose: To convert quaternions coordinates to Euler angles coordinates
--------------------------------------------------------------------------------
FUNCTION NO_TYPE QuaterToEuler
   (
   IN REAL lambda[4]              	UNITS no_units		"Quaternions coordinates",
   OUT REAL psi                   	UNITS	u_rad			"Yaw angle",
   OUT REAL theta                 	UNITS u_rad			"Pitch angle",
   OUT REAL phi                   	UNITS u_rad			"Roll angle"
   )

   "Converts quaternions coordinates to Euler angles coordinates"

   BODY
      psi = atan2(2.*(lambda[2]*lambda[3] + lambda[1]*lambda[4]), \
         lambda[1]**2 + lambda[2]**2 - lambda[3]**2 - lambda[4]**2)
      theta = -asin(min(max(2.*(lambda[2]*lambda[4] - \
         lambda[1]*lambda[3]), -1.), 1.))
      phi = atan2(2.*(lambda[3]*lambda[4] + lambda[1]*lambda[2]), \
         lambda[1]**2 - lambda[2]**2 - lambda[3]**2 + lambda[4]**2)

END FUNCTION

--------------------------------------------------------------------------------
-- Purpose: To establish Euler angles, quaternions, and "dynAtt" variables
-- relation
--------------------------------------------------------------------------------
FUNCTION NO_TYPE Calc_Euler_Quater
   (
   IN BOOLEAN quater              	"Integration method (TRUE=quaternions/FALSE=Euler angles)",
   IN INTEGER Trim                	"Variable used to select steady-state equations (0/1)",
   IN REAL dynAtt[4]              	UNITS u_rad			"Dynamic attitude variable",
   OUT REAL psi                   	UNITS	u_rad			"Yaw angle",
   OUT REAL theta                 	UNITS u_rad			"Pitch angle",
   OUT REAL phi                   	UNITS u_rad			"Roll angle",
   OUT REAL lambda[4]             	UNITS no_units		"Quaternions coordinates"
   )

   "Establishes Euler angles, quaternions, and 'dynAtt' variables relation"

   BODY
      IF ( (quater == FALSE) OR (Trim == 1) ) THEN
         -- Euler angles or steady calculation
         psi = dynAtt[1]
         theta = dynAtt[2]
         phi = dynAtt[3]

         EulerToQuater(psi, theta, phi, lambda)

      ELSE
         -- Quaternions and transient calculation
         FOR (j IN 1, 4)
            lambda[j] = dynAtt[j]
         END FOR

         QuaterToEuler(lambda, psi, theta, phi)

      END IF

END FUNCTION

--------------------------------------------------------------------------------
-- Purpose: To calculate the rotation matrix from Earth axis to Movil axis as
-- an Euler angles or quaternions function
--------------------------------------------------------------------------------
FUNCTION NO_TYPE Pmatrix
   (
   IN BOOLEAN quater                "Integration method (TRUE=quaternions/FALSE=Euler angles)",
   IN INTEGER Trim                  "Variable used to select steady-state equations (0/1)",
   IN REAL psi                      UNITS u_rad			"Yaw angle",
   IN REAL theta                    UNITS u_rad   		"Pitch angle",
   IN REAL phi                      UNITS u_rad   		"Roll angle",
   IN REAL lambda[4]                UNITS no_units  	"Quaternions coordinates",
   OUT REAL P[MovilAxis, EarthAxis] UNITS no_units  	"Rotation matrix from Earth axis to Movil axis"
   )

   "Calculates the rotation matrix from Earth axis to Movil axis as an Euler angles or quaternions function"

   BODY
      IF ( (quater == FALSE) OR (Trim == 1) ) THEN
         -- Euler angles or steady calculation
         P[x, N] = cos(theta) * cos(psi)
         P[x, FLIGHT_SIM.E] = cos(theta) * sin(psi)
         P[x, D] = - sin(theta)
         P[y, N] = sin(phi) * sin(theta) * cos(psi) - cos(phi) * sin(psi)
         P[y, FLIGHT_SIM.E] = sin(phi) * sin(theta) * sin(psi) + cos(phi) * cos(psi)
         P[y, D] = sin(phi) * cos(theta)
         P[z, N] = cos(phi) * sin(theta) * cos(psi) + sin(phi) * sin(psi)
         P[z, FLIGHT_SIM.E] = cos(phi) * sin(theta) * sin(psi) - sin(phi) * cos(psi)
         P[z, D] = cos(phi) * cos(theta)
      ELSE
         -- Quaternions and transient calculation
         P[x, N] = lambda[1]**2 + lambda[2]**2 - lambda[3]**2 - lambda[4]**2
         P[x, FLIGHT_SIM.E] = 2. * (lambda[2] * lambda[3] + lambda[1] * lambda[4])
         P[x, D] = 2. * (lambda[2] * lambda[4] - lambda[1] * lambda[3])
         P[y, N] = 2. * (lambda[2] * lambda[3] - lambda[1] * lambda[4])
         P[y, FLIGHT_SIM.E] = lambda[1]**2 - lambda[2]**2 + lambda[3]**2 - lambda[4]**2
         P[y, D] = 2. * (lambda[3] * lambda[4] + lambda[1] * lambda[2])
         P[z, N] = 2. * (lambda[2] * lambda[4] + lambda[1] * lambda[3])
         P[z, FLIGHT_SIM.E] = 2. * (lambda[3] * lambda[4] - lambda[1] * lambda[2])
         P[z, D] = lambda[1]**2 - lambda[2]**2 - lambda[3]**2 + lambda[4]**2
      END IF

END FUNCTION


-- Components
--------------------------------------------------------------------------------
-- Component that represents a non-linear six-degrees-of-freedom aircraft body
--------------------------------------------------------------------------------
COMPONENT Frame
   "Non-linear six-degrees-of-freedom aircraft body"

   PORTS
      IN Forces forces_in         	"Input external forces port"
      OUT State state_out         	"Output aircraft state port"

   DATA
      BOOLEAN InitFlag = FALSE    	"Initialization method (TRUE=component DATA block/FALSE=experiment INIT block)"
      BOOLEAN quater = FALSE      	"Integration method (TRUE=quaternions/FALSE=Euler angles)"

      REAL lambda_ERR = 1.e-4     	UNITS no_units		"Maximum allowed error for quaternions integration"

      REAL mass = 10000.          	UNITS u_kg			"Mass"

      REAL Ixx = 10000.           	UNITS u_kgm2		"Moment of inertia Ix"
      REAL Iyy = 100000.          	UNITS u_kgm2		"Moment of inertia Iy"
      REAL Izz = 100000.          	UNITS u_kgm2		"Moment of inertia Iz"
      REAL Ixy = 0.               	UNITS u_kgm2		"Product of inertia Pxy"
      REAL Ixz = 1000.            	UNITS u_kgm2		"Product of inertia Pxz"
      REAL Iyz = 0.               	UNITS u_kgm2		"Product of inertia Pyz"

      REAL R_o[EarthAxis] = {0., 0., 0.} UNITS u_m 	"Initial aircraft position"

      REAL psi_o = 0.             	UNITS u_deg			"Initial yaw angle"
      REAL theta_o = 0.           	UNITS u_deg			"Initial pitch angle"
      REAL phi_o = 0.             	UNITS u_deg			"Initial roll angle"

   DECLS
      BOOLEAN quater_d = FALSE     	"Quater variable delayed (TRUE/FALSE)"

      REAL alpha                    UNITS u_rad			"Angle of atack"
      REAL beta                     UNITS u_rad		   "Sideslip angle"

      REAL Vw[MovilAxis]            UNITS u_m_s		   "Movil axis wind velocity"
      REAL VT                       UNITS u_m_s		   "Air speed"

      REAL V[MovilAxis]             UNITS u_m_s		   "Movil axis aircraft velocity"

      REAL W[MovilAxis]             UNITS u_rad_s		"Movil axis angular velocity"

      REAL A[MovilAxis]             UNITS u_m_s2   	"Movil axis acceleration of the external forces"

      REAL R[EarthAxis]             UNITS u_m   		"Earth axis aircraft position"
      REAL Rdot[EarthAxis]          UNITS u_m_s   		"Earth axis aircraft velocity"

      REAL psi                      UNITS u_rad   		"Yaw angle"
      REAL theta                    UNITS u_rad   		"Pitch angle"
      REAL phi                      UNITS u_rad		   "Roll angle"
      REAL dpsi                     UNITS u_rad_s	   "Derivative of the yaw angle"
      REAL dtheta                   UNITS u_rad_s	   "Derivative of the pitch angle"
      REAL dphi                     UNITS u_rad_s	   "Derivative of the roll angle"
      REAL dEuler[4]                UNITS u_rad_s	   "Derivative of the Euler angles"

      REAL lambda[4]                UNITS no_units	   "Quaternions"
      REAL dlambda[4]               UNITS u_1_s 		"Derivative of the quaternions"

      REAL dynAtt[4]                UNITS u_rad_s   	"Dynamic variable for attitude: Euler angles or quaternions"

      REAL P[MovilAxis, EarthAxis]  UNITS no_units   	"Rotation matrix from Earth axis to Movil axis"

   INIT
      IF (InitFlag == TRUE) THEN
         -- Initial aircraft position
         FOR (j IN EarthAxis)
            R[j] = R_o[j]
         END FOR

         -- Initial euler angles values
         psi = DtoR * psi_o
         theta = DtoR * theta_o
         phi = DtoR * phi_o

         -- Initial quaternions values
         EulerToQuater(psi, theta, phi, lambda)

         -- Initialization of the "dynAtt" and "quater_d" variables
         IF ( (quater == FALSE) OR (Trim == 1) ) THEN
            -- Euler angles or steady calculation
            dynAtt[1] = psi
            dynAtt[2] = theta
            dynAtt[3] = phi
            dynAtt[4] = 0.

            quater_d = FALSE

         ELSE
            -- Quaternions and transient calculation
            FOR (j IN 1, 4)
               dynAtt[j] = lambda[j]
            END FOR

            quater_d = TRUE

         END IF

      END IF

   DISCRETE
      ASSERT ( (Trim == 0) OR (abs(SUM(j IN 1, 4; lambda[j]**2) - 1.) < lambda_ERR) ) \
         WARNING "Lack of accuracy in attitude integration"

      WHEN ( (quater == FALSE) OR (Trim == 1) ) THEN
         -- Euler angles or steady calculation
         dynAtt[1] = psi
         dynAtt[2] = theta
         dynAtt[3] = phi
         dynAtt[4] = 0.

         quater_d = FALSE

      END WHEN

      WHEN ( (quater == TRUE) AND (Trim == 0) ) THEN
         -- Quaternions and transient calculation
         FOR (j IN 1, 4)
            dynAtt[j] = lambda[j]
         END FOR

         quater_d = TRUE

      END WHEN

   CONTINUOUS
      -- Acceleration of the external forces evaluation
      EXPAND (j IN MovilAxis)
         A[j] = forces_in.F[j] / mass

      -- Forces equations
      V[x]' = W[z] * V[y] - W[y] * V[z] - g * sin(theta) + A[x]
      V[y]' = W[x] * V[z] - W[z] * V[x] + g * sin(phi) * cos(theta) + A[y]
      V[z]' = W[y] * V[x] - W[x] * V[y] + g * cos(phi) * cos(theta) + A[z]

      -- Moments equations
      forces_in.M[x] = Ixx * W[x]' - Ixy * W[y]' - Ixz * W[z]' + \
         Iyz * (W[z]**2. - W[y]**2.) + (Izz - Iyy) * W[y] * W[z] + \
         Ixy * W[x] * W[z] - Ixz * W[x] * W[y]
      forces_in.M[y] = -Ixy * W[x]' + Iyy * W[y]' - Iyz * W[z]' + \
         Ixz * (W[x]**2. - W[z]**2.) + (Ixx - Izz) * W[x] * W[z] + \
         Iyz * W[x] * W[y] - Ixy * W[y] * W[z]
      forces_in.M[z] = -Ixz * W[x]' - Iyz * W[y]' + Izz * W[z]' + \
         Ixy * (W[y]**2. - W[x]**2.) + (Iyy - Ixx) * W[x] * W[y] + \
         Ixz * W[y] * W[z] - Iyz * W[x] * W[z]

      -- Derivative of the Euler angles (kinematics equations)
      dpsi = (W[y] * sin(phi) + W[z] * cos(phi)) / cos(theta)
      dtheta = W[y] * cos (phi) - W[z] * sin(phi)
      dphi = W[x] + tan(theta) * (W[y] * sin(phi) + W[z] * cos(phi))

      dEuler[1] = (1 - Trim) * dpsi + Trim * (DtoR * psi_o - psi)
      dEuler[2] = dtheta 
      dEuler[3] = dphi
      dEuler[4] = 0.

      -- Derivative of the quaternions (kinematics equations)
      dlambda[1] = -0.5 * (W[x] * lambda[2] + W[y] * lambda[3] + W[z] * lambda[4])
      dlambda[2] =  0.5 * (W[x] * lambda[1] + W[z] * lambda[3] - W[y] * lambda[4])
      dlambda[3] =  0.5 * (W[y] * lambda[1] - W[z] * lambda[2] + W[x] * lambda[4])
      dlambda[4] =  0.5 * (W[z] * lambda[1] + W[y] * lambda[2] - W[x] * lambda[3])

      -- Integration method assignation
      EXPAND (j IN 1, 4)
         dynAtt[j]' = ZONE ( (quater == FALSE) OR (Trim == 1) ) dEuler[j]
                      OTHERS                                    dlambda[j]

      -- Euler angles, quaternions and "dynAtt" variable relation
      Calc_Euler_Quater(quater_d, Trim, dynAtt, psi, theta, phi, lambda)

      -- Evaluation of rotation matrix (Earth axis to Movil axis)
      Pmatrix(quater_d, Trim, psi, theta, phi, lambda, P)

      -- Earth axis aircraft velocity and position
      EXPAND_BLOCK(j IN EarthAxis)
         Rdot[j] = SUM(i IN MovilAxis; P[i,j] * V[i])
         R[j]' = (1 - Trim) * Rdot[j] + Trim * (R_o[j] - R[j])
      END EXPAND_BLOCK

      -- Movil axis wind velocity
      EXPAND(j IN MovilAxis)
         Vw[j] = SUM(i IN EarthAxis; P[j,i] * Vwind[i])

      -- Aerodynamic state variables (air speed, alpha, and beta)
      VT = sqrt((V[x]-Vw[x])**2. + (V[y]-Vw[y])**2. + (V[z]-Vw[z])**2.)

      alpha = atan2((V[z] - Vw[z]), (V[x] - Vw[x]))
      beta = asin((V[y] - Vw[y]) / VT)

      -- Outputs assignation
      state_out.alpha = alpha
      state_out.beta = beta
      state_out.VT = VT

      EXPAND_BLOCK (j IN MovilAxis)
         state_out.V[j] = V[j]
         state_out.Vdot[j] = V[j]'
         state_out.W[j] = W[j]
         state_out.Wdot[j] = W[j]'
         state_out.A[j] = A[j]
      END EXPAND_BLOCK

      state_out.psi = psi
      state_out.theta = theta
      state_out.phi = phi

      EXPAND_BLOCK (j IN EarthAxis)
         state_out.R[j] = R[j]
         state_out.Rdot[j] = Rdot[j]
      END EXPAND_BLOCK

END COMPONENT

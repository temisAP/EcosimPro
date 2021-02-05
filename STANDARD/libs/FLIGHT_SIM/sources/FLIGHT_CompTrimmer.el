--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompTrimmer.el
-- DESCRIPTION: Defines a component to calculate initial state variables for
--    some steady flight conditions
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 10/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE PORTS_LIB 
USE CONTROL 
USE MATH 


-- Enumerative types
--------------------------------------------------------------------------------
-- Defines a TrimmerMode type used to select which group of steady equations
-- must be used
--------------------------------------------------------------------------------
--	TrimmerMode = Normal : Air speed, climb angle, and turn rate fixed
--	TrimmerMode = psi_alpha : Air speed, climb angle, and angle of atack fixed
--	TrimmerMode = psi_R : Air speed, climb angle, and turn radius fixed
--------------------------------------------------------------------------------
ENUM TrimmerMode = {Normal, psi_alpha, psi_R}    "Trimmer mode"


-- Components
--------------------------------------------------------------------------------
-- Component to calculate initial state variables for some steady flight
-- conditions
--------------------------------------------------------------------------------
COMPONENT Trimmer
   "Calculates initial state variables for some steady flight conditions"

   PORTS
      IN State state_in                	"Input aircraft state port"
      OUT analog_signal s_elevator     	"Output commanded elevator deflection port (rad)"
      OUT analog_signal s_aileron      	"Output commanded aileron deflection port (rad)"
      OUT analog_signal s_rudder       	"Output commanded rudder deflection port (rad)"
      OUT analog_signal s_throttle     	"Output throttle level port (-)"

   DATA
      ENUM TrimmerMode mode = Normal   	"Trimmer mode"

      REAL VT_req = 100.               	UNITS u_m_s			"Required air speed"
      REAL ClimbAngle_req = 0.         	UNITS u_deg			"Required climb angle"
      REAL dpsi_req  = 0.              	UNITS u_deg_s		"Required turn rate"
      REAL alpha_req = 0.              	UNITS	u_deg			"Required angle of atack"
      REAL R_req = 0.                  	UNITS u_m			"Required turn radius"

   DECLS
      REAL alpha                  			UNITS u_rad			"Angle of atack"
      REAL beta                   			UNITS u_rad			"Sideslip angle"

      REAL VT                     			UNITS u_m_s			"Air speed"

      REAL V[MovilAxis]           			UNITS u_m_s			"Body axis aircraft velocity"

      REAL W[MovilAxis]           			UNITS u_m_s			"Body axis angular velocity"

      REAL psi                   			UNITS u_rad			"Yaw angle"
      REAL theta                  			UNITS u_rad			"Pitch angle"
      REAL phi                    			UNITS u_rad			"Roll angle"

      REAL ClimbAngle             			UNITS u_rad			"Climb angle"

      REAL dpsi                  			UNITS u_rad_s 		"Derivative of the yaw angle"

      REAL K                      			UNITS u_m			"Turn radius"

      REAL elevator               			UNITS u_rad			"Deflection of the elevator"
      REAL aileron                			UNITS u_rad			"Deflection of the ailerons"
      REAL rudder                 			UNITS u_rad			"Deflection of the rudder"
      REAL throttle    							UNITS no_units		RANGE 0.,1.		"Throttle position"

   CONTINUOUS
      alpha = state_in.alpha
      beta = state_in.beta

      VT = state_in.VT

      V = state_in.V

      W = state_in.W

      psi = state_in.psi
      theta = state_in.theta
      phi = state_in.phi

      -- Climb angle for coordinated flight
      sin(ClimbAngle) = cos(alpha) * cos(beta) * sin(theta) - \
         (sin(beta) * sin(phi) + sin(alpha) * cos(beta) * cos(phi)) * cos(theta)

      -- Derivative of the yaw angle
      dpsi = (W[y] * sin(phi) + W[z] * cos(phi)) / cos(theta)

      -- Turn radius
      K = dpsi / (VT * cos(ClimbAngle))

      -- Stationary conditions
      elevator' +  Trim * (DtoR * ClimbAngle_req - ClimbAngle) = 0.

      aileron' = ZONE ( mode == Normal )    Trim * (DtoR * dpsi_req - dpsi)
                 ZONE ( mode == psi_alpha ) Trim * (DtoR * alpha_req - alpha)
                 ZONE ( mode == psi_R )     Trim * (1./R_req - K)
                 OTHERS                     0.

      rudder' + Trim * (W[x] * V[z] - W[z] * V[x] + g * sin(phi) * cos(theta)) = 0.

      throttle' + Trim * (VT_req - VT) = 0. 

      -- Outputs assignation
      s_elevator.signal[1] = elevator
      s_aileron.signal[1] = aileron
      s_rudder.signal[1] = rudder
      s_throttle.signal[1] = throttle

END COMPONENT

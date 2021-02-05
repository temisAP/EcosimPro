--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompSensors.el
-- DESCRIPTION: Defines a cross product function and some common sensors
--    components to measure the angle of atack, the sideslip angle, the
--    absolute angular velocity, and the acceleration
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 12/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE PORTS_LIB 
USE CONTROL 


-- Functions
--------------------------------------------------------------------------------
-- Purpose: To calculate the cross product of two vectors
--------------------------------------------------------------------------------
FUNCTION NO_TYPE CrossProd
   (
   IN	REAL U[MovilAxis]           		"First vector",
   IN	REAL V[MovilAxis]           		"Second vector",
   OUT REAL UxV[MovilAxis]        		"Cross product vector"
   )

   "Calculates the cross product of two vectors"

   DECLS
      REAL CPM[MovilAxis, MovilAxis]	UNITS no_units	"Cross product matrix"

   BODY
      CPM[x, x] = 0
      CPM[x, y] = - U[z]
      CPM[x, z] = U[y]
      CPM[y, x] = U[z]
      CPM[y, y] = 0
      CPM[y, z] = - U[x]
      CPM[z, x] = - U[y]
      CPM[z, y] = U[x]
      CPM[z, z] = 0

      FOR (i IN MovilAxis)
         UxV[i] = SUM (j IN MovilAxis; CPM[i, j] * V[j])
      END FOR

END FUNCTION


-- Abstract components
--------------------------------------------------------------------------------
-- Abstract component for definition of flight dynamics sensors
--------------------------------------------------------------------------------
ABSTRACT COMPONENT AircraftSensor
   "Abstract component for flight dynamics sensors"

   PORTS
      IN State state_in           		"Input state port"
      OUT analog_signal s_out     		"Output signal port"

   DATA
      REAL gain = 1.              		UNITS no_units		"Gain"
      REAL bias = 0.              		UNITS no_units		"Bias"

   DECLS
      REAL v                      		"Measured variable"

   CONTINUOUS
      s_out.signal[1] = gain * v + bias

END COMPONENT 


-- Components
--------------------------------------------------------------------------------
-- Component that represents an angle of atack sensor
--------------------------------------------------------------------------------
COMPONENT AOASensor IS_A AircraftSensor
   "Angle of atack sensor"

   CONTINUOUS
      v = state_in.alpha

END COMPONENT

--------------------------------------------------------------------------------
-- Component that represents a sideslip angle sensor
--------------------------------------------------------------------------------
COMPONENT SDLSensor IS_A AircraftSensor
   "Sideslip angle sensor"

   CONTINUOUS
      v = state_in.beta

END COMPONENT

--------------------------------------------------------------------------------
-- Component that represents an absolute angular velocity sensor
--------------------------------------------------------------------------------
COMPONENT GyroSensor IS_A AircraftSensor
   "Absolute angular velocity sensor"

   DATA
      REAL CosDir[MovilAxis] = {1., 0., 0.}	UNITS no_units		"Cosines of the measurement axis"

   CONTINUOUS
      v = SUM(j IN MovilAxis; state_in.W[j] * CosDir[j])

END COMPONENT

--------------------------------------------------------------------------------
-- Component that represents an acceleration sensor
--------------------------------------------------------------------------------
COMPONENT AccelSensor IS_A AircraftSensor
   "Acceleration sensor"

   DATA
      REAL CosDir[MovilAxis] = {1., 0., 0.} 	UNITS no_units		"Cosines of the measurement axis"
      REAL Pos[MovilAxis] = {0., 0., 0.}    	UNITS u_m			"Accelerometer position"

   DECLS
      REAL A[MovilAxis]           				UNITS u_m_s2		"Acceleration in body axes"

      REAL W[MovilAxis]          				UNITS u_rad_s 		"Angular velocity"
      REAL Wdot[MovilAxis]        				UNITS u_rad_s2		"Angular acceleration"

      REAL W_Pos[MovilAxis]       				UNITS u_m_s2		"Cross product of W and Pos"

      REAL Ac[MovilAxis]          				UNITS u_m_s2		"Centripetal component of A"
      REAL At[MovilAxis]          				UNITS u_m_s2		"Tangential component of A"

   CONTINUOUS
      W = state_in.W
      Wdot = state_in.Wdot

      -- Centripetal Component of Acceleration
      CrossProd(W, Pos, W_Pos)
      CrossProd(W, W_Pos, Ac)

      -- Tangential Component of Acceleration
      CrossProd(Wdot, Pos, At)

      -- Acceleration in Body Axes
      EXPAND (j IN MovilAxis)
         A[j] = state_in.A[j] + At[j] + Ac[j]

      v = SUM(j IN MovilAxis; A[j] * CosDir[j])

END COMPONENT

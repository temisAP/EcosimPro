--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompActuators.el
-- DESCRIPTION: Defines common actuators components with limiters like an
--    Elevator Actuator, Aileron Actuator, Rudder Actuator, and Aileron-Rudder
--    Interconnect (ARI) Actuator
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 20/03/2001
--------------------------------------------------------------------------------

-- Libraries
USE PORTS_LIB 
USE CONTROL 
USE MATH 


-- Functions
--------------------------------------------------------------------------------
-- Purpose: To set the appropriate sign to a limit value
--------------------------------------------------------------------------------
FUNCTION REAL Limit
   (
   IN REAL LimitValue            	UNITS no_units		"Limit value",
   IN REAL SignedVar              	UNITS no_units		"Signed variable"
   )

   "Sets the appropriate sign to a limit value"

   BODY
      IF (SignedVar < 0.) THEN
         RETURN -abs(LimitValue)
      END IF

      RETURN abs(LimitValue)

END FUNCTION


-- Components
--------------------------------------------------------------------------------
-- Component that represents a control surface actuator
--------------------------------------------------------------------------------
COMPONENT Actuator
   "Control surface actuator"

   PORTS
      IN analog_signal s_in       	"Commanded deflection (rad)"
      OUT analog_signal s_out     	"Real deflection (rad)"

   DATA
      REAL Rtau = 20.             	UNITS u_1_s			"Inverse of the lag time constant"

      REAL RL = 60.               	UNITS u_deg_s		"Actuator rate limit"
      REAL DL = 25.               	UNITS u_deg			"Actuator deflection limit"

   DECLS
      REAL crdefl                 	UNITS u_rad_s		"Commanded actuator rate"
      REAL rdefl                 	UNITS u_rad_s 		"Actuator rate"
      REAL cdefl                  	UNITS u_rad			"Commanded actuator deflection"
      REAL defl                   	UNITS	u_rad			"Actuator deflection"

   CONTINUOUS
      cdefl = s_in.signal[1]

      -- Actuator first-order lag model
      crdefl = Rtau * (cdefl - defl)

      -- Actuator rate limit
      rdefl = ZONE (abs(crdefl) < DtoR * RL) crdefl
              OTHERS                         Limit(DtoR * RL, crdefl)

      -- Actuator deflection limit
      defl' = ZONE (abs(cdefl) < DtoR * DL) rdefl
              OTHERS                        0.

      -- Output assignation
      s_out.signal[1] = defl

END COMPONENT

--------------------------------------------------------------------------------
-- Component that represents an ARI actuator
--------------------------------------------------------------------------------
COMPONENT ARI IS_A SI2SO
   "ARI actuator"

   DATA
      REAL A = 1.0                	UNITS no_units		"Scaler for ARI gain calculation"
      REAL B = 0.0                	UNITS no_units		"Adder for ARI gain calculation"

      REAL ADL = 25.0             	UNITS u_deg			"ARI limit due to aileron defection"

   DECLS
      REAL u                      	UNITS u_rad			"limited input signal"

      REAL K_ARI                  	UNITS no_units		"ARI gain"

   CONTINUOUS
      -- Limited input signal due to aileron deflection
      u = ZONE (abs(s_in_1.signal[1]) <= DtoR * ADL) s_in_1.signal[1]
          OTHERS                                  Limit(DtoR * ADL, s_in_1.signal[1])

      -- ARI gain as an AOA input signal function
      K_ARI = A * s_in_2.signal[1] + B

      -- Output assignation
      s_out.signal[1] = K_ARI * u

END COMPONENT

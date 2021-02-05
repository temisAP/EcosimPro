--------------------------------------------------------------------------------
-- EA Internacional 2011   EcosimPro Simulation Source Code
--
--    FILE NAME:  CTRL_NonLinear.el
--    FILE TYPE:  New Non linear components of the CONTROL library
--    DESCRIPTION:  Defines components that describe standard nonlinear functions
--    NOTES:  Based on EcosimPro CONTROL library
--    AUTHOR:  Ramon Perez Vara
--    CREATION DATE:  Feb-2005
--------------------------------------------------------------------------------
-- Libraries
USE MATH 
USE PORTS_LIB 

--------------------------------------------------------------------------------
-- Component Relay
--------------------------------------------------------------------------------
-- Purpose:
--    To switch output signals between two constants depending on the value of
--	the input signals.
--------------------------------------------------------------------------------
COMPONENT Relay IS_A Controller \
"To switch output signals between two constants depending on the value of the input signals. ON/OFF controller with hysteresis"
   DATA
      REAL e_off[n] = -1.         UNITS no_units	"Error for switching to OFF state"
      REAL e_on[n] = 1.           UNITS no_units	"Error for switching to ON state"

      REAL u_off[n] = 0.          UNITS no_units	"Value of controller output when OFF"
      REAL u_on[n] = 1.           UNITS no_units	"Value of controller output when ON"

   DECLS
      ENUM state_type state[n]    "State of controller [ON/OFF]"
   DISCRETE
	EXPAND_BLOCK(i IN 1, n)
		WHEN (e[i] > e_on[i]) THEN
			state[i] = ON
		END WHEN

		WHEN (e[i] < e_off[i]) THEN
			state[i] = OFF
		END WHEN
	END EXPAND_BLOCK

   CONTINUOUS
	EXPAND(i IN 1, n)
      	u[i] = ZONE (state[i] == ON) u_on[i]
			 OTHERS                u_off[i]

END COMPONENT


--------------------------------------------------------------------------------
-- Component Delay
--------------------------------------------------------------------------------
-- Purpose:
--    To delay an input signal by a given period of time.
--------------------------------------------------------------------------------
COMPONENT Delay IS_A MIMOs "To delay an input signal by a given period of time"
   DATA
      REAL tdelay[n] = 1.     UNITS u_s   "Delay time"

   CONTINUOUS

      EXPAND (i IN 1, n)
         s_out.signal[i] = delay(s_in.signal[i], max(tdelay[i],1.0e-12))

END COMPONENT


--------------------------------------------------------------------------------
-- Component VarDelay
--------------------------------------------------------------------------------
-- Purpose:
--    To delay an input signal by a variable period of time.
--------------------------------------------------------------------------------
COMPONENT VarDelay IS_A MIMOs "To delay an input signal by a variable period of time"
   PORTS
      IN  analog_signal (n = n) s_TimeDelay		"Time delay port"
   DATA
      REAL tdelay_max[n] = 1.				UNITS u_s			"Maximum delay time"

   CONTINUOUS
      EXPAND (i IN 1, n)
         s_out.signal[i] = delay(s_in.signal[i], \
		bound(s_TimeDelay.signal[i], 1.0e-12, tdelay_max[i]))

END COMPONENT


--------------------------------------------------------------------------------
-- Component Saturation
--------------------------------------------------------------------------------
-- Purpose:
--    To limit the range of a signal.
--------------------------------------------------------------------------------
COMPONENT Saturation IS_A MIMOs "To limit the range of a signal"
   DATA
	REAL output_max[n] = 1		"Upper limit of input signal"
	REAL output_min[n] = -1		"Lower limit of input signal"
   CONTINUOUS
	EXPAND (i IN 1,n)
         s_out.signal[i] = ZONE (s_in.signal[i] > output_max[i]) output_max[i]
                              ZONE (s_in.signal[i] < output_min[i]) output_min[i]
					OTHERS s_in.signal[i] 
END COMPONENT


--------------------------------------------------------------------------------
-- Component DeadZone
--------------------------------------------------------------------------------
-- Purpose:
--    To Generate zero output within a specified region called its dead zone
--------------------------------------------------------------------------------
COMPONENT DeadZone IS_A MIMOs "zero output within a specified region called dead zone"
   DATA
	REAL output_max[n] = 1		"Upper limit of the dead zone"
	REAL output_min[n] = -1		"Lower limit of the dead zone"
   CONTINUOUS
	EXPAND (i IN 1,n)
         s_out.signal[i] = ZONE (s_in.signal[i] > output_max[i]) s_in.signal[i] - output_max[i]
                           ZONE (s_in.signal[i] < output_min[i]) s_in.signal[i] - output_min[i]
				   OTHERS 0.0

END COMPONENT



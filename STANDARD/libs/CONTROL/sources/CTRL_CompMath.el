--------------------------------------------------------------------------------
-- EA Internacional 2011   EcosimPro Simulation Source Code
--
--    FILE NAME:  CTRL_CompMath.el
--    FILE TYPE:  Components of the CONTROL library
--    DESCRIPTION:  Defines component to calculate mathematical operations and 
--			  to calculate the mathematical function of the signal inputs
--    NOTES:  Based on EcosimPro CONTROL library
--    AUTHOR:  Ramon Perez Vara
--    CREATION DATE:  Feb-2005
--------------------------------------------------------------------------------
USE MATH 
--------------------------------------------------------------------------------
-- Component Gain
--------------------------------------------------------------------------------
-- Purpose:
--    To multiply an input signal by a constant number.
--------------------------------------------------------------------------------
COMPONENT Gain IS_A MIMOs "To multiply an input signal by a constant number"
   DATA
      REAL k[n] = 1.        UNITS no_units	"Gain"

   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = k[i] * s_in.signal[i]

END COMPONENT

--------------------------------------------------------------------------------
-- Component Minimum
--------------------------------------------------------------------------------
-- Purpose:
--    Outputs the minimum input value.
--------------------------------------------------------------------------------
COMPONENT Minimum IS_A MI2MOs "Outputs the minimum input value"
   CONTINUOUS
      EXPAND (i IN 1, n)
         s_out.signal[i] = ZONE (s_in_1.signal[i] < s_in_2.signal[i]) s_in_1.signal[i]
                           OTHERS						    s_in_2.signal[i]

END COMPONENT

--------------------------------------------------------------------------------
-- Component Maximum
--------------------------------------------------------------------------------
-- Purpose:
--    Outputs the maximum input value.
--------------------------------------------------------------------------------
COMPONENT Maximum IS_A MI2MOs "Outputs the maximum input value"
   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = ZONE (s_in_1.signal[i] > s_in_2.signal[i]) s_in_1.signal[i]
                           OTHERS                                     s_in_2.signal[i]

END COMPONENT

--------------------------------------------------------------------------------
-- Component Product
--------------------------------------------------------------------------------
-- Purpose:
--    To multiply two input signals.
--------------------------------------------------------------------------------
COMPONENT Product IS_A MI2MOs "To multiply two input signals"
   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = s_in_1.signal[i] * s_in_2.signal[i]

END COMPONENT

--------------------------------------------------------------------------------
-- Component Inverse
--------------------------------------------------------------------------------
-- Purpose:
--    To calculate the inverse of a signal.
--------------------------------------------------------------------------------
COMPONENT Inverse IS_A MIMOs "To calculate the inverse of a signal"
   DISCRETE
	EXPAND(i IN 1, n)
	   ASSERT(abs(s_in.signal[i]) > 1e-12) FATAL "Error in Inverse component: Input signal is zero"

   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = 1. / s_in.signal[i]

END COMPONENT

--------------------------------------------------------------------------------
-- Component Addition
--------------------------------------------------------------------------------
-- Purpose:
--    To sum two input signals.
--------------------------------------------------------------------------------
COMPONENT Addition IS_A MI2MOs "Adder unit. It calculates an output signal that is the algebraic sum of the two input signals"
   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = s_in_1.signal[i] + s_in_2.signal[i]

END COMPONENT

--------------------------------------------------------------------------------
-- Component Subtraction
--------------------------------------------------------------------------------
-- Purpose:
--    To calculate the difference of two input signals (s_in_1 - s_in_2)
--------------------------------------------------------------------------------
COMPONENT Subtraction IS_A MI2MOs "Subtraction unit. It calculates an output signal that is the algebraic subtraction of the two input signals"
   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = s_in_1.signal[i] - s_in_2.signal[i]

END COMPONENT

--------------------------------------------------------------------------------
-- Component Division
--------------------------------------------------------------------------------
-- Purpose:
--    To calculate the integer part of the division of two input signals (s_in_1 - s_in_2)
--    based in IEC 61131-3 International Standard
--------------------------------------------------------------------------------
COMPONENT iDivision IS_A MI2MOs "Division unit. It calculates the integer part of the division of two input signals. \
										fractional quotients are rounded toward zero to the nearest integers."
   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = int(s_in_1.signal[i] / s_in_2.signal[i])

END COMPONENT

--------------------------------------------------------------------------------
-- Component Module
--------------------------------------------------------------------------------
-- Purpose:
--    To calculate the module of a division of two input signals (s_in_1 - s_in_2)
--------------------------------------------------------------------------------
COMPONENT Module IS_A MI2MOs "Module unit. It calculates an output signal that is the module of a division of two input signals"
   
   CONTINUOUS
      EXPAND (i IN 1,n)
         s_out.signal[i] = IF (s_in_2.signal[i]== 0)0 ELSE s_in_1.signal[i] - int(s_in_1.signal[i]/s_in_2.signal[i]) * s_in_2.signal[i] 

END COMPONENT

--------------------------------------------------------------------------------
-- Component MathFunction
--------------------------------------------------------------------------------
-- Purpose:
--   To perform a mathematical function on the input signals such as the square root
--   the sine, etc
--------------------------------------------------------------------------------
COMPONENT MathFunction IS_A MIMOs(
	ENUM MathOption option = FunSin	"Mathematical function"
	)
"To perform a mathematical function on the input signals such as the square root, the sine, etc"
   CONTINUOUS
	EXPAND_BLOCK(i IN 1, n)
		EXPAND (option == FunAbs)
			s_out.signal[i] = abs(s_in.signal[i])
		EXPAND (option == FunSign)
			s_out.signal[i] = ZONE(s_in.signal[i] > 0) 1
						   ZONE(s_in.signal[i] == 0) 0
						   OTHERS -1
		EXPAND (option == FunSqrt)
			s_out.signal[i] = sqrt(s_in.signal[i])
		EXPAND (option == FunSin)
			s_out.signal[i] = sin(s_in.signal[i])
		EXPAND (option == FunCos)
			s_out.signal[i] = cos(s_in.signal[i])
		EXPAND (option == FunTan)
			s_out.signal[i] = tan(s_in.signal[i])
		EXPAND (option == FunAsin)
			s_out.signal[i] = asin(s_in.signal[i])
		EXPAND (option == FunAcos)
			s_out.signal[i] = acos(s_in.signal[i])
		EXPAND (option == FunAtan)
			s_out.signal[i] = atan(s_in.signal[i])
		EXPAND (option == FunSinh)
			s_out.signal[i] = sinh(s_in.signal[i])
		EXPAND (option == FunCosh)
			s_out.signal[i] = cosh(s_in.signal[i])
		EXPAND (option == FunTanh)
			s_out.signal[i] = tanh(s_in.signal[i])
		EXPAND (option == FunExp)
			s_out.signal[i] = exp(s_in.signal[i])
		EXPAND (option == FunLog)
			s_out.signal[i] = log(s_in.signal[i])
		EXPAND (option == FunLog10)
			s_out.signal[i] = log10(s_in.signal[i])
	END EXPAND_BLOCK

END COMPONENT

--------------------------------------------------------------------------------
-- Component Table1DFunction
--------------------------------------------------------------------------------
-- Purpose:
--   To perform a linear mapping of the input signals
--------------------------------------------------------------------------------
COMPONENT Table1DFunction IS_A MIMOs "To perform a linear mapping (table interpolation) of the input signals"
   DATA
	TABLE_1D tab = {{0, 1}, {0, 1}} "Look-up table"

   CONTINUOUS
	EXPAND(i IN 1, n)
	   s_out.signal[i] = linearInterp1D(tab, s_in.signal[i])

END COMPONENT


--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_FuncsAtm.el
-- DESCRIPTION: Defines common functions for atmospheric temperature (T),
--    atmospheric pressure (p), air density (rho), and sound velocity (Vsound)
--    calculation
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 3/01/2001
--------------------------------------------------------------------------------
USE MATH 
-- Functions
--------------------------------------------------------------------------------
-- Purpose: To calculate the atmospheric temperature
--------------------------------------------------------------------------------
FUNCTION REAL TAtm
   (
   IN REAL altitude             		UNITS	u_m			"Altitude"
   )

   "Calculates the atmospheric temperature"

   DECLS
      REAL Ho                     	UNITS u_m			"Reference altitude"
      REAL To                    	UNITS u_K			"Reference temperature"

      REAL GradTerm               	UNITS u_K_m			"Temperature variation ratio"

      REAL T                      	UNITS u_K			"Temperature"

   BODY
      IF (altitude <= 11000.) THEN
         To = 288.
         GradTerm = -6.5e-3
         T = To + GradTerm * altitude
      ELSEIF (altitude <= 20000.) THEN
         T = 216.5
      ELSE
         Ho = 20000.
         To = 216.5
         GradTerm = 1.e-3
         T = To + GradTerm * (altitude - Ho)
      END IF 

      RETURN T

END FUNCTION

--------------------------------------------------------------------------------
-- Purpose: To calculate the atmospheric pressure
--------------------------------------------------------------------------------
FUNCTION REAL pAtm
   (
   IN REAL altitude               	UNITS u_m			"Altitude"
   )

   "Calculates the atmospheric pressure"

   DECLS
      REAL Ho                     	UNITS u_m			"Reference altitude"
      REAL To                     	UNITS u_K			"Reference temperature"
      REAL po                     	UNITS u_Pa			"Reference pressure"

      REAL GradTerm              	UNITS u_K_m			"Temperature variation ratio"

      REAL p                      	UNITS	u_Pa			"Pressure"

   BODY
      IF (altitude <= 11000) THEN
         To = 288.
         po = 101325.
         GradTerm = -6.5e-3
         p = po * (1 + (GradTerm * altitude / To))**(-g / R / GradTerm)
      ELSEIF (altitude <= 20000) THEN
         Ho = 11000.
         To = 216.5
         po = 22607.6
         p  = po * exp(-g * (altitude - Ho) / R / To)
      ELSE
         Ho = 20000.
         To = 216.5
         po = 20116.5
         GradTerm = 1.e-3
         p = po * (1 + (GradTerm * (altitude - Ho) / To))**(-g / R / GradTerm)
      END IF

      RETURN p

END FUNCTION

--------------------------------------------------------------------------------
-- Purpose: To calculate the air density
--------------------------------------------------------------------------------
FUNCTION REAL rhoAtm
   (
   IN REAL altitude               	UNITS u_m			"Altitude"
   )

   "Calculates the air density"

   DECLS
      REAL T                      	UNITS u_K			"Temperature"
      REAL p                      	UNITS u_Pa			"Pressure"

   BODY
      T = TAtm(altitude)
      p = pAtm(altitude)	

      RETURN p / (R * T)

END FUNCTION

--------------------------------------------------------------------------------
-- Purpose: To calculate the sound velocity
--------------------------------------------------------------------------------
FUNCTION REAL VsoundAtm
   (
   IN REAL altitude               	UNITS u_m			"Altitude"
   )

   "Calculates the sound velocity"

   DECLS
      REAL T                      	UNITS u_K			"Temperature"

   BODY
      T = TAtm(altitude)

      RETURN sqrt(gamma * R * T)

END FUNCTION

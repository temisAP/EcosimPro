--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_Common.el
-- DESCRIPTION: Defines common enumerative types, constants, global variables,
--    and port types for flight dynamics components
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 3/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 


-- Enumerative types
--------------------------------------------------------------------------------
-- Axis names for reference systems
--------------------------------------------------------------------------------
ENUM MovilAxis = {x, y, z}        	"Movil reference system axis names"
ENUM EarthAxis = {N, E, D}        	"Earth reference system axis names"


-- Global constants
CONST REAL g = 9.806              UNITS u_m_s2		"Gravity acceleration"

CONST REAL R = 287.               UNITS u_J_kgK		"Air gas constant"
CONST REAL gamma = 1.4            UNITS no_units	"Ratio of air specific heat"


CONST REAL LBtoN = 0.453592 * g   UNITS "(N/lb)"  	"Units conversion coefficient (N/lb)"
CONST REAL FTtoM = 0.3048         UNITS "(m/ft)"	"Units conversion coefficient (m/ft)"


-- Global variables
--------------------------------------------------------------------------------
-- Defines a Trim variable used to select steady-state equations
--------------------------------------------------------------------------------
--	Trim = 1 : Calculate steady states (Initial conditions)
--	Trim = 0 : Calculate transient states
--------------------------------------------------------------------------------
INTEGER Trim = 0                  "Variable used to select steady-state equations (0/1)"


-- Ports
--------------------------------------------------------------------------------
-- Port for forces connections
--------------------------------------------------------------------------------
PORT Forces "Forces port"
      SUM REAL F[MovilAxis]       UNITS u_N			"External forces"
      SUM REAL M[MovilAxis]       UNITS u_Nm			"External moments"

END PORT

----------------------------------------------------------------
-- Port for state connections
----------------------------------------------------------------
PORT State "State port"
   EQUAL REAL alpha               UNITS u_rad		"Angle of atack"
   EQUAL REAL beta                UNITS u_rad		"Sideslip angle"
   EQUAL REAL VT                  UNITS u_m_s		"Air speed"
   EQUAL REAL V[MovilAxis]        UNITS u_m_s		"Body axis aircraft velocity"
   EQUAL REAL Vdot[MovilAxis]     UNITS u_m_s2		"Body axis aircraft acceleration"
   EQUAL REAL W[MovilAxis]        UNITS u_rad_s		"Body axis angular velocity"
   EQUAL REAL Wdot[MovilAxis]     UNITS u_rad_s2	"Body axis angular acceleration"
   EQUAL REAL A[MovilAxis]        UNITS u_m_s2		"Body axis absolute acceleration"
   EQUAL REAL psi                 UNITS u_rad		"Yaw angle"
   EQUAL REAL theta               UNITS u_rad		"Pitch angle"
   EQUAL REAL phi                 UNITS u_rad		"Roll angle"
   EQUAL REAL R[EarthAxis]        UNITS u_m			"Earth axis aircraft position"
   EQUAL REAL Rdot[EarthAxis]     UNITS u_m_s		"Earth axis aircraft velocity"

END PORT

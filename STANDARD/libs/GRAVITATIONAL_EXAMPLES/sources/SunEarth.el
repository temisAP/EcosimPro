--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: SunEarth.el
-- DESCRIPTION: Defines "SunEarth" component example
-- NOTES:
-- AUTHOR: Borja Garcia Gutierrez
-- CREATION DATE: 30/05/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE GRAVITATIONAL 


-- Components
--------------------------------------------------------------------------------
-- Sun and Earth gravitational interaction example
--------------------------------------------------------------------------------
COMPONENT SunEarth IS_A TwoBodiesFx
   "Sun and Earth gravitational interaction example"

   DECLS
      CLOSE CBmu = 2.957e-4
      CLOSE OBmu = 8.887e-10

END COMPONENT

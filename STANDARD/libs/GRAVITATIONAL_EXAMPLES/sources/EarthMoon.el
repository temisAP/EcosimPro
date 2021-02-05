--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: EarthMoon.el
-- DESCRIPTION: Defines "EarthMoon" component example
-- NOTES:
-- AUTHOR: Borja Garcia Gutierrez
-- CREATION DATE: 30/05/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE GRAVITATIONAL 


-- Components
--------------------------------------------------------------------------------
-- Earth and Moon gravitational interaction example
--------------------------------------------------------------------------------
COMPONENT EarthMoon IS_A TwoBodiesFx
   "Earth and Moon gravitational interaction example"

   DECLS
      CLOSE CBmu = 8.887e-10
      CLOSE OBmu = 2.379e-13

END COMPONENT

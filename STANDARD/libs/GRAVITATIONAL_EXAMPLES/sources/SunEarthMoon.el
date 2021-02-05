--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: SunEarthMoon.el
-- DESCRIPTION: Defines "SunEarthMoon" component example
-- NOTES:
-- AUTHOR: Borja Garcia Gutierrez
-- CREATION DATE: 30/05/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE GRAVITATIONAL


-- Components
--------------------------------------------------------------------------------
-- Sun, Earth, and Moon gravitational interaction example
--------------------------------------------------------------------------------
COMPONENT SunEarthMoon IS_A ThreeBodiesFx
   "Sun, Earth, and Moon gravitational interaction example"

   DECLS
      CLOSE CBmu = 2.957e-4
      CLOSE OB1mu = 8.887e-10
      CLOSE OB2mu = 2.379e-13

END COMPONENT

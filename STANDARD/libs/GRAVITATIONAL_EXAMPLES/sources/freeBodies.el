--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: freeBodies.el
-- DESCRIPTION: Defines "freeBodies" component example
-- NOTES:
-- AUTHOR: Borja Garcia Gutierrez
-- CREATION DATE: 30/05/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE GRAVITATIONAL 


-- Components
----------------------------------------------------------------
-- Two free bodies gravitational interaction example
----------------------------------------------------------------
COMPONENT freeBodies IS_A TwoBodies
   "Two free bodies gravitational interaction example"

   DECLS
      CLOSE OB1mu = 8.887e-10
      CLOSE OB2mu = 8.887e-10

END COMPONENT

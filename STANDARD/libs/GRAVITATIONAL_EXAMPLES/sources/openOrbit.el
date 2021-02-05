--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: openOrbit.el
-- DESCRIPTION: Defines "openOrbit" component example
-- NOTES:
-- AUTHOR: Borja Garcia Gutierrez
-- CREATION DATE: 30/05/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE GRAVITATIONAL 


-- Components
--------------------------------------------------------------------------------
-- Two fixed bodies and one free body gravitational interaction example
--------------------------------------------------------------------------------
COMPONENT openOrbit
   "Two fixed bodies and one free body gravitational interaction example"

   TOPOLOGY
      Eter(
         nbodies = 3
         ) Universe(
            I = {{0, 0, 0}, {0, 0, 0}, {1, 1, 0}}
            )

      Body CentralBody1(
         mu = 10.
         )

      Body CentralBody2(
         mu = 10.
         )

      Body OrbitalBody

      CONNECT CentralBody1.gp TO Universe.gp[1]
      CONNECT CentralBody2.gp TO Universe.gp[2]
      CONNECT OrbitalBody.gp TO Universe.gp[3]

END COMPONENT

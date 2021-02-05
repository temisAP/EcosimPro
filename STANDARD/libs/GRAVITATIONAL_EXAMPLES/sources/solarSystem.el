--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: solarSystem.el
-- DESCRIPTION: Defines "solarSystem" component example
-- NOTES:
-- AUTHOR: Borja Garcia Gutierrez
-- CREATION DATE: 30/05/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE GRAVITATIONAL 


-- Components
--------------------------------------------------------------------------------
-- Solar system gravitational interaction example
--------------------------------------------------------------------------------
COMPONENT solarSystem
   "Solar system gravitational interaction example"

   TOPOLOGY
      Eter(
         nbodies = 11
         ) Universe(
            I = {
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}
               }
            )

      Body Sun(
         mu = 2.957e-4
         )

      Body Mercury(
         mu = 4.912e-11
         )

      Body Venus(
         mu = 7.244e-10
         )

      Body Earth(
         mu = 8.887e-10
         )

      Body Mars(
         mu = 9.550e-11
         )

      Body Jupiter(
         mu = 2.825e-4
         )

      Body Saturn(
         mu = 8.459e-8
         )

      Body Uranus(
         mu = 1.292e-8
         )

      Body Neptune(
         mu = 1.532e-8
         )

      Body Pluto(
         mu = 2.230e-12
         )

      Body Moon(
         mu = 2.379e-13
         )

      CONNECT Sun.gp TO Universe.gp[1]
      CONNECT Mercury.gp TO Universe.gp[2]
      CONNECT Venus.gp TO Universe.gp[3]
      CONNECT Earth.gp TO Universe.gp[4]
      CONNECT Mars.gp TO Universe.gp[5]
      CONNECT Jupiter.gp TO Universe.gp[6]
      CONNECT Saturn.gp TO Universe.gp[7]
      CONNECT Neptune.gp TO Universe.gp[8]
      CONNECT Uranus.gp TO Universe.gp[9]
      CONNECT Pluto.gp TO Universe.gp[10]
      CONNECT Moon.gp TO Universe.gp[11]

END COMPONENT

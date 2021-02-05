--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompF16Autopilots.el
-- DESCRIPTION: Defines specific F-16 CAS (Control Augmentation System)
--    autopilots components like a F-16 pitch-rate CAS and a F-16 lateral-
--    directional CAS
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 115/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE CONTROL 


-- Components
--------------------------------------------------------------------------------
-- Component that represents a F-16 pitch-rate CAS (Control Augmentation System)
-- autopilot
--------------------------------------------------------------------------------
COMPONENT F16qAutopilot IS_A qAutopilot
   "F-16 pitch-rate CAS (Control Augmentation System) autopilot"

   DECLS
      CLOSE k_qGyro = -0.5
      CLOSE k_Err = 0.
      CLOSE k_Integ = -1.5
      CLOSE k_AOA = -0.08

END COMPONENT

--------------------------------------------------------------------------------
-- Component that represents a F-16 lateral-directional CAS (Control
-- Augmentation System) autopilot
--------------------------------------------------------------------------------
COMPONENT F16prAutopilot IS_A prAutopilot
   "F-16 lateral-directional CAS (Control Augmentation System) autopilot"

   DECLS
      CLOSE A_ARI = 7.448
      CLOSE B_ARI = -0.7
      CLOSE ADL_ARI = 21.5

      CLOSE k_pGyro = -0.2
      CLOSE k_rGyro = -0.8
      CLOSE k_yAccel = -0.018

END COMPONENT

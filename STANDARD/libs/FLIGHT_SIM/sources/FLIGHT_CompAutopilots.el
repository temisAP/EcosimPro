--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompAutopilots.el
-- DESCRIPTION: Defines common CAS (Control Augmentation System) autopilots
--    components like a pitch-rate CAS and a lateral-directional CAS
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 15/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE PORTS_LIB 
USE CONTROL 


-- Abstract components
--------------------------------------------------------------------------------
-- Abstract component for definition of pitch-rate CAS (Control Augmentation
-- System) autopilots
--------------------------------------------------------------------------------
ABSTRACT COMPONENT qAutopilot
   "Abstract component for pitch-rate CAS (Control Augmentation System) autopilots"

   PORTS
      IN State state_in               	"Input aircraft state port"
      IN analog_signal s_q             "Input commanded pitch rate (rad/s) port"
      OUT analog_signal s_elevator     "Output commanded elevator deflection (rad) port"

   DATA
     
      REAL k_qGyro           				UNITS no_units		"Pitch rate control gain"
      REAL k_Err             				UNITS no_units		"Error control gain"
      REAL k_Integ           				UNITS no_units		"Integral control gain"
      REAL k_AOA         	  				UNITS no_units		"AOA control gain"
      
   DECLS
      REAL k_qGyro_aux[1] = -1      	UNITS no_units		"Pitch rate control gain - auxiliary variable"
      REAL k_Err_aux[1] = -1				UNITS no_units		"Error control gain - auxiliary variable"
      REAL k_Integ_aux[1] =  -1.       UNITS no_units   	"Integral control gain - auxiliary variable"
      REAL k_AOA_aux[1] = -1.         	UNITS no_units		"AOA control gain - auxiliary variable"      


     
   TOPOLOGY
      GyroSensor q_GyroSensor(
         CosDir = {0., 1., 0.}
         )

      AOASensor AOASensor

      TransferFunction(
         n_num=0,
         n_den=1
         ) AOA_filter(
            p = {10.},
            q = {1., 10.}
            )

      Integrator Integ

      Gain qGyro_gain(
         k = k_qGyro_aux
         )

      Gain Error_gain(
         k = k_Err_aux
         )

      Gain Integ_gain(
         k = k_Integ_aux
         )

      Gain AOA_gain(
         k = k_AOA_aux
         )

      Addition Sum1

      Addition Sum2

      Subtraction Dif1

      Subtraction Dif2

      -- Components connections
      CONNECT state_in TO q_GyroSensor.state_in
      CONNECT state_in TO AOASensor.state_in
      CONNECT s_q TO Dif1.s_in_1
      CONNECT q_GyroSensor.s_out TO Dif1.s_in_2
      CONNECT q_GyroSensor.s_out TO qGyro_gain.s_in
      CONNECT Dif1.s_out TO Error_gain.s_in
      CONNECT Dif1.s_out TO Integ.s_in
      CONNECT Error_gain.s_out TO Sum1.s_in_1
      CONNECT Integ.s_out TO Integ_gain.s_in
      CONNECT Integ_gain.s_out TO Sum1.s_in_2
      CONNECT Sum1.s_out TO Dif2.s_in_1
      CONNECT qGyro_gain.s_out TO Sum2.s_in_1
      CONNECT AOASensor.s_out TO AOA_filter.s_in
      CONNECT AOA_filter.s_out TO AOA_gain.s_in
      CONNECT AOA_gain.s_out TO Sum2.s_in_2
      CONNECT Sum2.s_out TO Dif2.s_in_2
      CONNECT Dif2.s_out TO s_elevator
  

CONTINUOUS
	-- Auxiliary variables definition
	
	   k_qGyro = k_qGyro_aux[1]
      k_Err = k_Err_aux[1]
      k_Integ = k_Integ_aux[1]
      k_AOA = k_AOA_aux[1]


END COMPONENT

--------------------------------------------------------------------------------
-- Abstract component for definition of lateral-directional CAS (Control
-- Augmentation System) autopilots
--------------------------------------------------------------------------------
ABSTRACT COMPONENT prAutopilot
   "Abstract component for lateral-directional CAS (Control Augmentation System) autopilots"

   PORTS
      IN State state_in           		"Input aircraft state port"
      IN analog_signal s_p        		"Input commanded roll rate (rad/s) port"
      IN analog_signal s_r        		"Input commanded yaw rate (rad/s) port"
      OUT analog_signal s_aileron 		"Output commanded aileron deflection (rad) port"
      OUT analog_signal s_rudder  		"Output commanded rudder deflection (rad) port"

   DATA
      REAL A_ARI = 1.             		UNITS no_units		"ARI constant scaler"
      REAL B_ARI = 0.             		UNITS no_units		"ARI constant adder"
      REAL ADL_ARI = 1.e+18       		UNITS u_deg			"ARI limit due to aileron defection"

      REAL k_pGyro          				UNITS no_units		"Roll rate control gain"
      REAL k_rGyro          				UNITS no_units		"Yaw rate control gain"
      REAL k_yAccel         				UNITS no_units		"Lateral acceleration gain"
      
DECLS

      REAL k_pGyro_aux[1] = -1.       	UNITS no_units		"Roll rate control gain - auxiliary variable"
      REAL k_rGyro_aux[1] = -1.        UNITS no_units		"Yaw rate control gain - auxiliary variable"
      REAL k_yAccel_aux[1] = -1.       UNITS no_units		"Lateral acceleration gain- auxiliary variable"
            
      
   TOPOLOGY
      GyroSensor p_GyroSensor(
         CosDir = {1., 0., 0.}
         )

      GyroSensor r_GyroSensor(
         CosDir = {0., 0., 1.}
         )

      AOASensor AOASensor

      AccelSensor y_AccelSensor(
         CosDir = {0., 1., 0.},
         Pos = {0., 0., 0.}
         )

      ARI k_ARI(
         A = A_ARI,
         B = B_ARI,
         ADL = ADL_ARI
         )

      TransferFunction(
         n_num=0,
         n_den=1
         ) AOA_filter(
            p = {10.},
            q = {1., 10.}
            )

      TransferFunction(
         n_num=1,
         n_den=1
         ) yaw_control(
            p = {1., 0.},
            q = {1., 1.}
            )

      Gain pGyro_gain(
         k = k_pGyro_aux
         )

      Gain rGyro_gain(
         k = k_rGyro_aux
         )

      Gain yAccel_gain(
         k = k_yAccel_aux
         )

      Addition Sum1

      Addition Sum2

      Subtraction Dif1

      Subtraction Dif2

      Subtraction Dif3

      Product Mult

      -- Components connections
      CONNECT state_in TO p_GyroSensor.state_in
      CONNECT state_in TO r_GyroSensor.state_in
      CONNECT state_in TO AOASensor.state_in
      CONNECT state_in TO y_AccelSensor.state_in
      CONNECT s_p TO Dif1.s_in_1
      CONNECT p_GyroSensor.s_out TO Dif1.s_in_2
      CONNECT p_GyroSensor.s_out TO Mult.s_in_1
      CONNECT Dif1.s_out TO pGyro_gain.s_in
      CONNECT pGyro_gain.s_out TO k_ARI.s_in_1
      CONNECT pGyro_gain.s_out TO s_aileron
      CONNECT s_r TO Dif2.s_in_1
      CONNECT r_GyroSensor.s_out TO Dif3.s_in_1
      CONNECT AOASensor.s_out TO AOA_filter.s_in
      CONNECT AOA_filter.s_out TO k_ARI.s_in_2
      CONNECT AOA_filter.s_out TO Mult.s_in_2
      CONNECT Mult.s_out TO Dif3.s_in_2
      CONNECT Dif3.s_out TO yaw_control.s_in
      CONNECT yaw_control.s_out TO rGyro_gain.s_in
      CONNECT rGyro_gain.s_out TO Sum1.s_in_1
      CONNECT y_AccelSensor.s_out TO yAccel_gain.s_in
      CONNECT yAccel_gain.s_out TO Sum1.s_in_2
      CONNECT Sum1.s_out TO Dif2.s_in_2
      CONNECT Dif2.s_out TO Sum2.s_in_1
      CONNECT k_ARI.s_out TO Sum2.s_in_2
      CONNECT Sum2.s_out TO s_rudder

CONTINUOUS

	-- Auxiliary variables definition
	
		k_pGyro = k_pGyro_aux[1]
      k_rGyro = k_rGyro_aux[1]
      k_yAccel = k_yAccel_aux[1]

END COMPONENT

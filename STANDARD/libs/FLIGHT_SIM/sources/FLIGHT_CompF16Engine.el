--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompF16Engine.el
-- DESCRIPTION: Defines a component used to model the F-16 engine response,
--    throttle gearing, and engine thrust
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 4/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE MATH 
USE PORTS_LIB 
USE CONTROL 


-- Components
----------------------------------------------------------------
-- Component that represents the F-16 engine response
----------------------------------------------------------------
COMPONENT F16Engine
   "F-16 engine response"

   PORTS
      IN State state_in           	"Input aircraft state port"
      IN analog_signal s_Mach     	"Input mach number port (-)"
      IN analog_signal s_throttle 	"Input throttle level port (-)"
      OUT Forces forces_out       	"Output engine thrust forces port"

   DATA
      REAL H= 225.                	UNITS u_kgm2_s		"engine angular momentum assumed fixed at 160 slugs*ft^2/s"

      -- Thrust for IDLE power level
      TABLE_2D A = {
            {0., 0.2, 0.4, 0.6, 0.8, 1.0},
            {0., 10000., 20000., 30000., 40000., 50000.},
            {
               { 1060.,   670.,   880., 1140., 1500., 1860.},
               {  635.,   425.,   690., 1010., 1330., 1700.},
               {   60.,    25.,   345.,  755., 1130., 1525.},
               {-1020.,  -710.,  -300.,  350.,  910., 1360.},
               {-2700., -1900., -1300., -247.,  600., 1100.},
               {-3600., -1400.,  -595., -342., -200.,  700.}
            }
         } 									UNITS u_N			"Thrust for IDLE power level (N) vs Mach (-) and altitude (m)"

      -- Thrust for MILITARY power level
      TABLE_2D B = {
            {0., 0.2, 0.4, 0.6, 0.8, 1.0},
            {0., 10000., 20000., 30000., 40000., 50000.},
            {
               {12680.,  9150., 6200., 3950., 2450., 1400.},
               {12680.,  9150., 6313., 4040., 2470., 1400.},
               {12610.,  9312., 6610., 4290., 2600., 1560.},
               {12640.,  9839., 7090., 4660., 2840., 1660.},
               {12390., 10176., 7750., 5320., 3250., 1930.},
               {11680.,  9848., 8050., 6100., 3800., 2310.}
            }
         } 									UNITS u_N			"Thrust for MILITARY power level (N) vs Mach (-) and altitude (m)"

      -- Thrust for MAXIMUM power level
      TABLE_2D C = {
            {0., 0.2, 0.4, 0.6, 0.8, 1.0},
            {0., 10000., 20000., 30000., 40000., 50000.},
            {
               {20000., 15000., 10800.,  7000., 4000., 2500.},
               {21420., 15700., 11225.,  7323., 4435., 2600.},
               {22700., 16860., 12250.,  8154., 5000., 2835.},
               {24240., 18910., 13760.,  9285., 5700., 3215.},
               {26070., 21075., 15975., 11115., 6860., 3950.},
               {28886., 23319., 18300., 13484., 8642., 5057.}
            }
         } 									UNITS u_N			"Thrust for MAXIMUM power level (N) vs Mach (-) and altitude (m)"

   DECLS
      REAL altitude               	UNITS	u_m			"Altitude"
      REAL Mach[1]                  UNITS no_units		"Mach number"
      REAL throttle[1]   				UNITS no_units		RANGE 0.,1.		"Throttle level [0,1]"

      REAL apow                   	UNITS	u_pct			"Actual engine power level"
      REAL cpow                   	UNITS	u_pct			"Commanded engine power level"
      REAL dpow                   	UNITS u_pct			"Required power level rate"

      REAL Rt                     	UNITS u_1_s			"Calculated inverse of the lag time constant"
      REAL Rtau                   	UNITS	u_1_s			"Limited inverse of the lag time constant"

      REAL tidl                   	UNITS	u_N			"Idle thrust"
      REAL tmil                   	UNITS u_N			"Military thrus"
      REAL tmax                   	UNITS u_N			"Maximum thrust"

      REAL thrust                 	UNITS u_N			"Engine thrust"

   CONTINUOUS
      altitude = - state_in.R[D]
      Mach = s_Mach.signal
      throttle = s_throttle.signal

      -- First-Order lag model
      cpow = ZONE (throttle[1] <= 0.77) 64.94 * throttle[1]
             OTHERS                  217.38 * throttle[1] - 117.38

      dpow = ZONE ((cpow >= 50.) AND (apow >= 50.)) cpow - apow
             ZONE ((cpow >= 50.) AND (apow < 50.))  60 - apow
             ZONE ((cpow < 50.) AND (apow >= 50.))  40 - apow
             OTHERS                                 cpow - apow

      Rt = ZONE (dpow <= 25.) 1.
           ZONE (dpow >= 50.) 0.1
           OTHERS             1.9 - 0.036 * dpow

      Rtau = ZONE (apow >= 50.) 5.
             OTHERS             Rt

      apow' = Rtau * dpow

      -- Thrust Evaluation
      tidl = LBtoN * linearInterp2D(A, Mach[1], altitude)
      tmil = LBtoN * linearInterp2D(B, Mach[1], altitude)
      tmax = LBtoN * linearInterp2D(C, Mach[1], altitude)

      thrust = ZONE (apow < 50.) tidl + 0.02 * (tmil - tidl) * apow
               OTHERS            tmil + 0.02 * (tmax - tmil) * (apow - 50.0)

      -- Outputs Assignation
      forces_out.F[x] = thrust
      forces_out.F[y] = 0.
      forces_out.F[z] = 0.

      forces_out.M[x] = 0.
      forces_out.M[y] = - state_in.W[z] * H
      forces_out.M[z] = state_in.W[y] * H

END COMPONENT

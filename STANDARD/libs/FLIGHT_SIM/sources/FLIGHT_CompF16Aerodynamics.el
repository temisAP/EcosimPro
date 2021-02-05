--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: FLIGHT_CompF16Aerodynamics.el
-- DESCRIPTION: Defines a component used to model the F-16 aerodynamic response
-- NOTES:
-- AUTHOR: Ramon Perez Vara and Borja Garcia Gutierrez
-- CREATION DATE: 4/01/2001
--------------------------------------------------------------------------------

-- Libraries
USE PORTS_LIB 
USE MATH 
USE CONTROL 


-- Components
--------------------------------------------------------------------------------
-- Component that represents the F-16 aerodynamic response
--------------------------------------------------------------------------------
COMPONENT F16Aerodynamics
   "F-16 aerodynamic response"

   PORTS
      IN State state_in           	"Input aircraft state port"
      IN analog_signal s_elevator 	"Input elevator deflection (rad) port"
      IN analog_signal s_aileron  	"Input aileron deflection (rad) port"
      IN analog_signal s_rudder   	"Input rudder deflection (rad) port"
      OUT analog_signal s_Mach    	"Output mach number signal (-) port"
      OUT Forces forces_out       	"Output aerodynamic forces port"

   DATA
      REAL S = 27.871             	UNITS u_m2			"Wing area"
      REAL c = 3.450              	UNITS u_m			"Wing mean geometric chord"
      REAL b= 9.144               	UNITS	u_m			"Wing span"
      REAL xcg = 0.35             	UNITS no_units		"Center of gravity location adimensionalised with the chord"
      REAL xr = 0.35              	UNITS no_units		"Reference CG location adimensionalised with the chord"

      -- Damping coefficients data
      TABLE_1D Cxq_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { -0.267, -0.110, 0.308, 1.34, 2.08, 2.91, 2.760, 2.050, 1.500, 1.49, 1.83, 1.21}
         } 									UNITS no_units		"X-axis aerodynamic force coefficient due to pitch rate (-) vs angle of attack (deg)"

      TABLE_1D Cyp_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { -0.108, -0.108, -0.188, 0.110, 0.258, 0.226, 0.344, 0.362, 0.611, 0.529, 0.298, -2.270}
         } 									UNITS no_units		"Y-axis aerodynamic force coefficient due to roll rate (-) vs angle of attack (deg)"

      TABLE_1D Cyr_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { 0.882, 0.852, 0.876, 0.958, 0.962, 0.974, 0.819, 0.483, 0.590, 1.210, -0.493, -1.040}
         } 									UNITS no_units		"Y-axis aerodynamic force coefficient due to yaw rate (-) vs angle of attack (deg)"

      TABLE_1D Czq_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { -8.80, -25.8, -28.9, -31.4, -31.2, -30.7, -27.70, -28.2, -29.0, -29.8, -38.3, -35.3}
         } 									UNITS no_units		"Z-axis aerodynamic force coefficient due to pitch rate (-) vs angle of attack (deg)"

      TABLE_1D Clp_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { -0.360, -0.359, -0.443, -0.420, -0.383, -0.375, -0.329, -0.294, -0.230, -0.210, -0.120, -0.100}
         } 									UNITS no_units		"Rolling aerodynamic moment coefficient due to roll rate (-) vs angle of attack (deg)"

      TABLE_1D Clr_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { -0.126, -0.026, 0.063, 0.113, 0.208, 0.230, 0.319, 0.437, 0.680, 0.100, 0.447, -0.330}
         } 									UNITS no_units		"Rolling aerodynamic moment coefficient due to yaw rate (-) vs angle of attack (deg)"

      TABLE_1D Cmq_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { -7.21, -0.540, -5.23, -5.26, -6.11, -6.64, -5.69, -6.000, -6.20, -6.40, -6.60, -6.00}
         } 									UNITS no_units		"Pitching aerodynamic moment coefficient due to pitch rate (-) vs angle of attack (deg)"

      TABLE_1D Cnp_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { 0.061, 0.052, 0.052, -0.012, -0.013, -0.024, 0.050, 0.150, 0.130, 0.158, 0.240, 0.150}
         } 									UNITS no_units		"Yawing aerodynamic moment coefficient due to roll rate (-) vs angle of attack (deg)"

      TABLE_1D Cnr_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { -0.380, -0.363, -0.378, -0.386, -0.370, -0.453, -0.550, -0.582, -0.595, -0.637, -1.020, -0.840}
         } 									UNITS no_units		"Yawing aerodynamic moment coefficient due to yaw rate (-) vs angle of attack (deg)"

      -- X-axis aerodynamic force coefficient
      TABLE_2D Cx_vs_elevator_alpha = {
            { -24., -12., 0., 12., 24.},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               { -0.099, -0.081, -0.081, -0.063, -0.025, 0.044, 0.097, 0.113, 0.145, 0.167, 0.174, 0.166},
               { -0.048, -0.038, -0.040, -0.021,  0.016, 0.083, 0.127, 0.137, 0.162, 0.177, 0.179, 0.167},
               { -0.022, -0.020, -0.021, -0.004,  0.032, 0.094, 0.128, 0.130, 0.154, 0.161, 0.155, 0.138},
               { -0.040, -0.038, -0.039, -0.025,  0.006, 0.062, 0.087, 0.085, 0.100, 0.110, 0.104, 0.091},
               { -0.083, -0.073, -0.076, -0.072, -0.046, 0.012, 0.024, 0.025, 0.043, 0.053, 0.047, 0.040}
            }
         } 									UNITS no_units		"X-axis aerodynamic force coefficient (-) vs elevator deflection (deg) and angle of attack (deg)"

      -- Y-axis Aerodynamic force coefficients due to beta, ailerons, and rudder
      REAL dCy_beta = -0.020      	UNITS no_units		"Y-axis Aerodynamic force coefficients due to beta"
      REAL dCy_aileron = 0.021    	UNITS no_units		"Y-axis Aerodynamic force coefficients due to ailerons"
      REAL dCy_rudder = 0.086     	UNITS no_units		"Y-axis Aerodynamic force coefficients due to rudder"

      -- Z-axis aerodynamic force coefficient
      TABLE_1D Cz_vs_alpha = {
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            { 0.770, 0.241, -0.100, -0.416, -0.731, -1.053, -1.366, -1.646, -1.917, -2.120, -2.248, -2.229}
         } 									UNITS no_units		"Z-axis aerodynamic force coefficient (-) vs angle of attack (deg)"

      -- Rolling aerodynamic moment coefficient
      TABLE_2D Cl_vs_abs_beta_alpha = {
            { 0., 5., 10., 15., 20., 25., 30.},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               {  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000},
               { -0.001, -0.004, -0.008, -0.012, -0.016, -0.022, -0.022, -0.021, -0.015, -0.008, -0.013, -0.015},
               { -0.003, -0.009, -0.017, -0.024, -0.030, -0.041, -0.045, -0.040, -0.016, -0.002, -0.010, -0.019},
               { -0.001, -0.010, -0.020, -0.030, -0.039, -0.054, -0.057, -0.054, -0.023, -0.006, -0.014, -0.027},
               {  0.000, -0.010, -0.022, -0.034, -0.047, -0.060, -0.069, -0.067, -0.033, -0.036, -0.035, -0.035},
               {  0.007, -0.010, -0.023, -0.034, -0.049, -0.063, -0.081, -0.079, -0.060, -0.058, -0.062, -0.059},
               {  0.009, -0.011, -0.023, -0.037, -0.050, -0.068, -0.089, -0.088, -0.091, -0.076, -0.077, -0.076}
            }
         } 									UNITS no_units		"Rolling aerodynamic moment coefficient (-) vs sideslip angle (deg) and angle of attack (deg)"

      -- Pitching aerodynamic moment coefficient
      TABLE_2D Cm_vs_elevator_alpha = {
            { -24., -12., 0., 12., 24.},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               {  0.205,  0.168,  0.186,  0.196,  0.213,  0.251,  0.245,  0.238,  0.252,  0.231,  0.198,  0.192},
               {  0.081,  0.077,  0.107,  0.110,  0.110,  0.141,  0.127,  0.119,  0.133,  0.108,  0.081,  0.093},
               { -0.046, -0.020, -0.009, -0.005, -0.006,  0.010,  0.006, -0.001,  0.014,  0.000, -0.013,  0.032},
               { -0.174, -0.145, -0.121, -0.127, -0.129, -0.102, -0.097, -0.113, -0.087, -0.084, -0.069, -0.006},
               { -0.259, -0.202, -0.184, -0.193, -0.199, -0.150, -0.160, -0.167, -0.104, -0.076, -0.041, -0.005}
            }
         } 									UNITS no_units		"Pitching aerodynamic moment coefficient (-) vs elevator deflection (deg) and angle of attack (deg)"

      -- Yawing aerodynamic moment coefficient
      TABLE_2D Cn_vs_abs_beta_alpha = {
            { 0., 5., 10., 15., 20., 25., 30.},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               { 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000,  0.000,  0.000,  0.000},
               { 0.018, 0.019, 0.018, 0.019, 0.019, 0.018, 0.013, 0.007, 0.004, -0.014, -0.017, -0.033},
               { 0.038, 0.042, 0.042, 0.042, 0.043, 0.039, 0.030, 0.017, 0.004, -0.035, -0.047, -0.057},
               { 0.056, 0.057, 0.059, 0.058, 0.058, 0.053, 0.032, 0.012, 0.002, -0.045, -0.071, -0.073},
               { 0.064, 0.077, 0.076, 0.074, 0.073, 0.057, 0.029, 0.007, 0.012, -0.034, -0.065, -0.041},
               { 0.074, 0.086, 0.093, 0.089, 0.080, 0.062, 0.049, 0.022, 0.028, -0.012, -0.002, -0.013},
               { 0.079, 0.090, 0.106, 0.106, 0.096, 0.080, 0.068, 0.030, 0.064,  0.015,  0.011, -0.001}
            }
         } 									UNITS no_units		"Yawing aerodynamic moment coefficient (-) vs sideslip angle (deg) and angle of attack (deg)"

      -- Rolling aerodynamic moment coefficient due to ailerons
      TABLE_2D dCl_aileron_vs_beta_alpha = {
            { -30., -20., -10., 0., 10., 20., 30},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               { -0.041, -0.052, -0.053, -0.056, -0.050, -0.056, -0.082, -0.059, -0.042, -0.038, -0.027, -0.017},
               { -0.041, -0.053, -0.053, -0.053, -0.050, -0.051, -0.066, -0.043, -0.038, -0.027, -0.023, -0.016},
               { -0.042, -0.053, -0.052, -0.051, -0.049, -0.049, -0.043, -0.035, -0.026, -0.016, -0.018, -0.014},
               { -0.040, -0.052, -0.051, -0.052, -0.048, -0.048, -0.042, -0.037, -0.031, -0.026, -0.017, -0.012},
               { -0.043, -0.049, -0.048, -0.049, -0.043, -0.042, -0.042, -0.036, -0.025, -0.021, -0.016, -0.011},
               { -0.044, -0.048, -0.048, -0.047, -0.042, -0.041, -0.020, -0.028, -0.013, -0.014, -0.011, -0.010},
               { -0.043, -0.049, -0.047, -0.045, -0.042, -0.037, -0.003, -0.013, -0.010, -0.003, -0.007, -0.008}
            }
         } 									UNITS no_units		"Rolling aerodynamic moment coefficient due to ailerons (-) vs sideslip angle (deg) and angle of attack (deg)"

      -- Rolling aerodynamic moment coefficient due to rudder
      TABLE_2D dCl_rudder_vs_beta_alpha = {
            { -30., -20., -10., 0., 10., 20., 30},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               { 0.005, 0.017, 0.014, 0.010, -0.005, 0.009, 0.019, 0.005, -0.000, -0.005, -0.011, 0.008},
               { 0.007, 0.016, 0.014, 0.014,  0.013, 0.009, 0.012, 0.005,  0.000,  0.004,  0.009, 0.007},
               { 0.013, 0.013, 0.011, 0.012,  0.011, 0.009, 0.008, 0.005, -0.002,  0.005,  0.003, 0.005},
               { 0.018, 0.015, 0.015, 0.014,  0.014, 0.014, 0.014, 0.015,  0.013,  0.011,  0.006, 0.001},
               { 0.015, 0.014, 0.013, 0.013,  0.012, 0.011, 0.011, 0.010,  0.008,  0.008,  0.007, 0.003},
               { 0.021, 0.011, 0.010, 0.011,  0.010, 0.009, 0.008, 0.010,  0.006,  0.005,  0.000, 0.001},
               { 0.023, 0.010, 0.011, 0.011,  0.011, 0.010, 0.008, 0.010,  0.006,  0.014,  0.020, 0.000}
            }
         } 									UNITS no_units		"Rolling aerodynamic moment coefficient due to rudder (-) vs sideslip angle (deg) and angle of attack (deg)"

      -- Yawing aerodynamic moment coefficient due to ailerons
      TABLE_2D dCn_aileron_vs_beta_alpha = {
            { -30., -20., -10., 0., 10., 20., 30},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               {  0.001, -0.027, -0.017, -0.013, -0.012, -0.016,  0.001,  0.017,  0.011, 0.017,  0.008, 0.016},
               {  0.002, -0.014, -0.016, -0.016, -0.014, -0.019, -0.021,  0.002,  0.012, 0.016,  0.015, 0.011},
               { -0.006, -0.008, -0.006, -0.006, -0.005, -0.008, -0.005,  0.007,  0.004, 0.007,  0.006, 0.006},
               { -0.011, -0.011, -0.010, -0.009, -0.008, -0.006,  0.000,  0.004,  0.007, 0.010,  0.004, 0.010},
               { -0.015, -0.015, -0.014, -0.012, -0.011, -0.008, -0.002,  0.002,  0.006, 0.012,  0.011, 0.011},
               { -0.024, -0.010, -0.004, -0.002, -0.001,  0.003,  0.014,  0.006, -0.001, 0.004,  0.004, 0.006},
               { -0.022,  0.002, -0.003, -0.005, -0.003, -0.001, -0.009, -0.009, -0.001, 0.003, -0.002, 0.001}
            }
         } 									UNITS no_units		"Yawing aerodynamic moment coefficient due to ailerons (-) vs sideslip angle (deg) and angle of attack (deg)"

      -- Yawing aerodynamic moment coefficient due to rudder
      TABLE_2D dCn_rudder_vs_beta_alpha = {
            { -30., -20., -10., 0., 10., 20., 30},
            { -10., -5., 0., 5., 10., 15., 20., 25., 30., 35., 40., 45.},
            {
               { -0.018, -0.052, -0.052, -0.052, -0.054, -0.049, -0.059, -0.051, -0.030, -0.037, -0.026, -0.013},
               { -0.028, -0.051, -0.043, -0.046, -0.045, -0.049, -0.057, -0.052, -0.030, -0.033, -0.030, -0.008},
               { -0.037, -0.041, -0.038, -0.040, -0.040, -0.038, -0.037, -0.030, -0.027, -0.024, -0.019, -0.013},
               { -0.048, -0.045, -0.045, -0.045, -0.044, -0.045, -0.047, -0.048, -0.049, -0.045, -0.033, -0.016},
               { -0.043, -0.044, -0.041, -0.041, -0.040, -0.038, -0.034, -0.035, -0.035, -0.029, -0.022, -0.009},
               { -0.052, -0.034, -0.036, -0.036, -0.035, -0.028, -0.024, -0.023, -0.020, -0.016, -0.010, -0.014},
               { -0.062, -0.034, -0.027, -0.028, -0.027, -0.027, -0.023, -0.023, -0.019, -0.009, -0.025, -0.010}
            }
         } 									UNITS no_units		"Yawing aerodynamic moment coefficient due to rudder (-) vs sideslip angle (deg) and angle of attack (deg)"

   DECLS
      REAL altitude                	UNITS u_m			"Altitude"

      REAL Mach 				         UNITS no_units   	RANGE 0.,1.			"Mach number"

      REAL T                        UNITS u_K   		"Temperature"
      REAL p_stat                   UNITS u_Pa   		"Static pressure"
      REAL rho                      UNITS u_kg_m3   	"Density"
      REAL Vsound                   UNITS u_m_s		   "Sound velocity"

      REAL alpha      					UNITS u_deg			RANGE -15.,45.		"Angle of attack"
      REAL beta       					UNITS u_deg  		RANGE -30.,30.		"Sideslip angle"

      REAL elevator 						UNITS u_deg			RANGE -25.,25.    "Elevator deflection"
      REAL aileron 						UNITS u_deg			RANGE -21.5,21.5  "Ailerons deflection"
      REAL rudder 						UNITS u_deg			RANGE -30., 30.   "Rudder deflection"

      REAL VT                       UNITS u_m_s   		"Air speed"

      REAL p                        UNITS u_rad_s   	"Roll rate"
      REAL q                        UNITS u_rad_s   	"Pitch rate"
      REAL r                        UNITS u_rad_s   	"Yaw rate"

      REAL p_dyn                    UNITS u_Pa   		"Dynamic pressure"

      REAL Cx_damp                  UNITS no_units	   "X-axis force coeff. due to angular rate"
      REAL Cy_damp                  UNITS no_units	   "Y-axis force coeff. due to angular rate"
      REAL Cz_damp                  UNITS no_units	   "Z-axis force coeff. due to angular rate"

      REAL Cxt                      UNITS no_units	   "Total x-axis force coeff."
      REAL Cyt                      UNITS no_units	   "Total y-axis force coeff."
      REAL Czt                      UNITS no_units	   "Total z-axis force coeff."

      REAL Clo                      UNITS no_units	   "Rolling moment coeff."
      REAL Cmo                      UNITS no_units	   "Pitching moment coeff."
      REAL Cno                      UNITS no_units	   "Yawing moment coeff."

      REAL dCl_aileron              UNITS no_units	   "Rolling moment coeff. due to ailerons"
      REAL dCl_rudder               UNITS no_units	   "Rolling moment coeff. due to rudder"
      REAL dCn_aileron              UNITS no_units	   "Yawing moment coeff. due to ailerons"
      REAL dCn_rudder               UNITS no_units	   "Yawing moment coeff. due to rudder"

      REAL Cl_damp                  UNITS no_units	   "Rolling moment coeff. due to angular rate"
      REAL Cm_damp                  UNITS no_units	   "Pitching moment coeff. due to angular rate"
      REAL Cn_damp                  UNITS no_units	   "Yawing moment coeff. due to angular rate"

      REAL Clt                      UNITS no_units	   "Total rolling moment coeff."
      REAL Cmt                      UNITS no_units	   "Total pitching moment coeff."
      REAL Cnt                      UNITS no_units	   "Total yawing moment coeff."

   CONTINUOUS
      altitude = - state_in.R[D]

      -- Atmospheric conditions
      T = TAtm(altitude)
      p_stat = pAtm(altitude)
      rho = rhoAtm(altitude)
      Vsound = VsoundAtm(altitude)

      alpha = RtoD * state_in.alpha
      beta = RtoD * state_in.beta

      elevator = RtoD * s_elevator.signal[1]
      aileron = RtoD * s_aileron.signal[1]
      rudder = RtoD * s_rudder.signal[1]

      VT = state_in.VT

      p = state_in.W[x]
      q = state_in.W[y]
      r = state_in.W[z]

      -- Mach number
      Mach = VT / Vsound

      -- Dynamic pressure
      p_dyn = 0.5 * rho * state_in.VT**2

      -- Forces coefficients evaluation
      Cx_damp = linearInterp1D(Cxq_vs_alpha, alpha) * q * (0.5 * c / state_in.VT)
      Cy_damp = (linearInterp1D(Cyp_vs_alpha, alpha) * p + \
         linearInterp1D(Cyr_vs_alpha, alpha) * r) * (0.5 * b / state_in.VT)
      Cz_damp = linearInterp1D(Czq_vs_alpha, alpha) * q * (0.5 * c / state_in.VT)

      Cxt = linearInterp2D(Cx_vs_elevator_alpha, elevator, alpha) + Cx_damp
      Cyt = dCy_beta * beta + dCy_aileron * (aileron / 20.) + \
         dCy_rudder * (rudder / 30.) + Cy_damp
      Czt = linearInterp1D(Cz_vs_alpha, alpha) * (1. - (DtoR * beta)**2.) - \
         0.19 * elevator / 25. + Cz_damp

      -- Moments coefficients evaluation
      Clo = sign(beta) * linearInterp2D(Cl_vs_abs_beta_alpha, abs(beta), alpha)
      Cmo = linearInterp2D(Cm_vs_elevator_alpha, elevator, alpha) 
      Cno = sign(beta) * linearInterp2D(Cn_vs_abs_beta_alpha, abs(beta), alpha)

      dCl_aileron = linearInterp2D(dCl_aileron_vs_beta_alpha, beta, alpha)
      dCl_rudder = linearInterp2D(dCl_rudder_vs_beta_alpha, beta, alpha)
      dCn_aileron = linearInterp2D(dCn_aileron_vs_beta_alpha, beta, alpha)
      dCn_rudder = linearInterp2D(dCn_rudder_vs_beta_alpha, beta, alpha)

      Cl_damp = (linearInterp1D(Clp_vs_alpha, alpha) * p + \
         linearInterp1D(Clr_vs_alpha, alpha) * r) * (0.5 * b / state_in.VT)
      Cm_damp = linearInterp1D(Cmq_vs_alpha, alpha) * q * (0.5 * c / state_in.VT)
      Cn_damp = (linearInterp1D(Cnp_vs_alpha, alpha) * p + \
         linearInterp1D(Cnr_vs_alpha, alpha) * r) * (0.5 * b / state_in.VT)

      Clt = Clo + dCl_aileron * (aileron / 20.) + dCl_rudder * (rudder / 30.) + Cl_damp
      Cmt = Cmo + Czt * (xr - xcg) + Cm_damp
      Cnt = Cno + dCn_aileron * (aileron / 20.) + dCn_rudder * (rudder / 30.) - \
         Cyt * (xr - xcg) * (c / b) + Cn_damp

      -- Outputs assignation
      forces_out.F[x] = Cxt * p_dyn * S
      forces_out.F[y] = Cyt * p_dyn * S
      forces_out.F[z] = Czt * p_dyn * S

      forces_out.M[x] = Clt * p_dyn * S * b
      forces_out.M[y] = Cmt * p_dyn * S * c
      forces_out.M[z] = Cnt * p_dyn * S * b

      s_Mach.signal[1] = Mach

END COMPONENT

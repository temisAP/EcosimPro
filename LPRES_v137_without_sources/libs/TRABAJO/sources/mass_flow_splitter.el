/*-----------------------------------------------------------------------------------------
 LIBRARY: TRABAJO
 FILE: mass_flow_splitter
 CREATION DATE: 06/02/2021
-----------------------------------------------------------------------------------------*/
COMPONENT mass_flow_splitter (
		-----------------------------------------------------------
		-- Coded in LPRES.mass_flow_splitter
		-----------------------------------------------------------
	ENUM OnOffDesign  Type = Design)
"mass_flow_splitter"
PORTS

		-----------------------------------------------------------
		-- Coded in LPRES.mass_flow_splitter
		-----------------------------------------------------------
	IN Fluid f_in "Inlet fluid port"
	OUT Fluid f_out "Outlet fluid port"
DATA

		-----------------------------------------------------------
		-- Coded in LPRES.mass_flow_splitter
		-----------------------------------------------------------
	REAL C_D = 0.5 UNITS "-" "Discharge coefficient (used only in liquid state)"
	REAL A = 0.05 UNITS "m^2" "Output area"
	REAL W = 100 UNITS "kg/s" "Mass flow"
DECLS

		-----------------------------------------------------------
		-- Coded in LPRES.mass_flow_splitter
		-----------------------------------------------------------
	REAL A_d UNITS "m^2" "Design output area"
	REAL A_sl UNITS "m^2" "Sonic lock area (calculated only for gases)"
	REAL PR = 10 UNITS "-" "Pressure ratio"
	REAL PR_sl UNITS "-" "Sonic lock pressure ratio (calculated only for gases)"
	REAL M_out UNITS "-" "Outlet Mach number (calculated only for gases)"
	REAL p_out_ch UNITS "Pa" "Choked outlet pressure (calculated only for gases)"
	REAL v_ideal UNITS "m/s" "Ideal outlet speed"
	REAL Re UNITS "-" "Outlet Reynolds number (calculated only for liquids)"
CONTINUOUS

		-----------------------------------------------------------
		-- Coded in LPRES.mass_flow_splitter
		-----------------------------------------------------------
		-- PRIVATE
END COMPONENT
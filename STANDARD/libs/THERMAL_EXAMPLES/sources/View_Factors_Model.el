--**
--** Purpose: Model of six nodes connected to View_Factor component 
--**
--** Method: 
--**
--** References: Example 8.6 Ingeniería Química. Costa Novella E. Vol 4
--		     Transmisión de calor. Ed Alhambra. 1986. page 468
--**
--** Notes: (Only included when needed).
--**/

--Libraries
USE MATH 
USE PORTS_LIB 
USE THERMAL 


COMPONENT View_Factors_Model

  TOPOLOGY
	View_Factors
	(
		nports = 6
	)
	view_factors
	(
		VF = {{0, 0.33371, 0.08365, 0.08365, 0.33371, 0.16527}, 
			{0.16686, 0, 0.07865, 0.07865, 0.50899, 0.16686},
			{0.16731, 0.31460, 0, 0.03618, 0.31460, 0.16731},
			{0.16731, 0.31460, 0.03618, 0, 0.31460, 0.16731},
			{0.16686, 0.50899, 0.07865, 0.07865, 0, 0.16686},
			{0.16527, 0.33371, 0.08365, 0.08365, 0.33371, 0}},
		e = {0.9, 0.75, 0.8, 1e-4, 1e-4, 1e-4},
		A = {4, 8, 2, 2, 8, 4}
	)
	BNode N1 
      BNode N2
      BNode N3 
      DNode N4
      DNode N5
      DNode N6
      CONNECT view_factors.tp_in[1] TO N1
      CONNECT view_factors.tp_in[2] TO N2
      CONNECT view_factors.tp_in[3] TO N3
      CONNECT view_factors.tp_in[4] TO N4
      CONNECT view_factors.tp_in[5] TO N5
      CONNECT view_factors.tp_in[6] TO N6
END COMPONENT

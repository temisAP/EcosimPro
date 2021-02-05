-- Define the version, date, author and comments associated to this library
#LIBRARY_INFO
  #VERSION = "3.5.7"
  #DATE = "17/01/2019"
  #AUTHOR= "EAI" 
  #COMMENTS= "Adding new components for free convection calculation. Detaching dependence of FLUID_PROP\
		  New property files of materials added: SA_106_GrB, SA_210_A1, SA_213_T22, SA_335_P22, T409\
		  version 3.4: Adding standard units of variables and two new setof: VarProp and ConstProp for\
		                variable and constant material properties\
		version 3.4.1: Small bug in SS_304.txt corrected \
		version 3.4.2: - removed VERSION from USE library statement in all the .el files \
				  			- Updated symbols and schematics appearance \
							- new integer global variable (setRaleighWarnings) to test validity range in natural convection correlation\
	   version 3.4.3: - updated symbols and schematics appearance \
	   version 3.4.4: - properties files extension for Copper, Aluminum, Epoxy fibreglass and Titanium\
		version 3.5.0: - added new components: Th_Demux and Th_Mux\
		version 3.5.1: Added libraries dependences and file categories\
		version 3.5.2: Added component DNodeMat_vec\
		version 3.5.3: Corrected bug in DNodeMat_vec\
		version 3.5.4: Eliminated expandFilePath() according to internal SPR 3549\
							Source files saved with UTF-8 format\
		version 3.5.5: Corrected number of files in Epoxy_fiberglass.txt\
		version 3.5.6: Included material properties tables as source code control extra files.\
		version 3.5.7: SPR 2111 corrected (Q_sensor component)."

END #LIBRARY_INFO

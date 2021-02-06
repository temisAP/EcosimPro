//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "LPRES_EXAMPLES.+r+l10_off+design.performance2.exp1.h"

LPRES_EXAMPLES__RL10_offDesign_performance2_exp1* LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::s_current= NULL;
LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::LPRES_EXAMPLES__RL10_offDesign_performance2_exp1(const char* mgr,const char* installDir,bool dmode):LPRES_EXAMPLES__RL10_offDesign_performance2(mgr,installDir,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoGroupName = "";
m_infoExperimentName = "exp1";
m_infoExperimentFileName = "LPRES_EXAMPLES.+r+l10_off+design.performance2.exp1";
m_infoExperimentFileNameExtra = "exp1";
m_infoExperimentDate = "06/02/2021 01:13:08.350000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
R_comb = 0.0;
FGAMMA_comb = 0.0;
nBounds = 3;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[3];
	for (int ib=0; ib < 3 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::initInternalModels()
{
  LPRES_EXAMPLES__RL10_offDesign_performance2::initInternalModels();
}


//Add the experiment variables to the symbols table
void LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::addExptVariables()
{
	ADD_EXPT_VAR( "R_comb", "REAL", "",&R_comb);
	ADD_EXPT_VAR( "FGAMMA_comb", "REAL", "",&FGAMMA_comb);
varHasEquationInBoundBlock("CC.OF");
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Regulator_1.dp");

}


//Run the experiment code
void LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::runExperiment()
{
	unkR[351] = 0.194281146 ;
	unkR[339] = 0.208304833 ;
	unkR[341] = 0.0014118924 ;
	unkR[329] = 0.000677279675 ;
	unkR[375] = 0.000513113762 ;
	unkR[392] = 0.715229315 ;
	unkR[313] = 0.000580606872 ;
	unkR[303] = 0.00178349971 ;
	unkR[4] = 0.0134109877 ;
	DEBUG_LEVEL = 1 ;
	TOLERANCE = 1e-06 ;
	_vi1 = 1 ;
	while ( _vi1 <= 3 ) {
	dyn[2] = 0. ;
	dyn[3] = 10. ;
	dyn[4] = 170. ;
	dyn[8] = 100. ;
	dyn[9] = 100. ;
	m_boundaryBranch[0] = -1;
	unkR[7] = 6. - (_vi1 - 1.) * 0.5 ;
	TIME = 0. ;
	TSTOP = 20. ;
	CINT = 0.1 ;
	INTEG() ;
	_vi1 += 1 ;
	}
}

/* Initialisation of defaults for global variables only used in experiment*/
void LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::initDefaultsExp()
{
	dyn[2] = 0. ;
	dyn[3] = 10. ;
	dyn[4] = 170. ;
	dyn[8] = 100. ;
	dyn[9] = 100. ;
}

/* Initialisation of boundaries*/
void LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[7] = 6. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[328] = 9000. ;
	if (m_boundaryBranch[2] == 0)  
		unkR[353] = 3219188.99 * (0.75 + TIME/40.) ;
}
/* Initialisation of delays in experiments*/
void LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::initDelaysExpt()
{
}

#ifndef SIMULA_USE_DECK_SYMBOLS
bool LPRES_EXAMPLES__RL10_offDesign_performance2_exp1::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}
#endif //SIMULA_USE_DECK_SYMBOLS

#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
#if SIMULA_PLATFORM == 1
int wmain( int argc, wchar_t * wargv[] )
{
	char **argv = NULL;
	if (!createUtf8argv(argc, wargv, argv))
	{
		argc = 0;
	}
#else
int main( int argc, char * argv[] )
{
#endif
	try
	{
#ifndef SIMULA_USE_DECK_SYMBOLS
		LPRES_EXAMPLES__RL10_offDesign_performance2_exp1 ecomodel;
#else
		LPRES_EXAMPLES__RL10_offDesign_performance2_exp1 ecomodel(0,0,true);
#endif //SIMULA_USE_DECK_SYMBOLS
		mainLoop(argc, argv, &ecomodel);
	}
	catch(...)
	{
		printf("Program stops due to abnormal condition\n");
	}
#if SIMULA_PLATFORM == 1
	releaseUtf8argv(argc, argv);
#endif
	return 0;	
}
#endif //SIMULA_USE_GRAPHICAL_MAIN

/* Function to create an instance of the experiment class */
SIMULA_EXPORT_C_EXP void *fcnExpCreate(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ee = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__RL10_offDesign_performance2_exp1(name,dirInstall,d);
		ee = (void*)tmp->createThinModel(t,(void(*)())fcnExpCreate);
	}
	catch(...)
	{
	}
	return ee;
}

/* Function to destroy the experiment instance */
SIMULA_EXPORT_C_EXP void fcnExpDel(void *obj,const char* name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to get information of the model*/
SIMULA_EXPORT_C_EXP void getInformationExperiment(char *experimentName, bool& isDebug)
{
	sprintf(experimentName,"%s","exp1");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" void* getDeck(int t) {return 0;};
	extern "C" void delDeck(void *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS



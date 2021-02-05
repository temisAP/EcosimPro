//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "TRABAJO.+r+l10_offdesign.regulator.steady.h"

TRABAJO__RL10_offdesign_regulator_steady* TRABAJO__RL10_offdesign_regulator_steady::s_current= NULL;
TRABAJO__RL10_offdesign_regulator_steady::TRABAJO__RL10_offdesign_regulator_steady(const char* mgr,const char* installDir,bool dmode):TRABAJO__RL10_offdesign_regulator(mgr,installDir,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoGroupName = "";
m_infoExperimentName = "steady";
m_infoExperimentFileName = "TRABAJO.+r+l10_offdesign.regulator.steady";
m_infoExperimentFileNameExtra = "steady";
m_infoExperimentDate = "06/02/2021 00:23:46.334000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
PG = 0.0;
FRACC = 0.0;
nBounds = 2;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[2];
	for (int ib=0; ib < 2 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void TRABAJO__RL10_offdesign_regulator_steady::initInternalModels()
{
  TRABAJO__RL10_offdesign_regulator::initInternalModels();
}


//Add the experiment variables to the symbols table
void TRABAJO__RL10_offdesign_regulator_steady::addExptVariables()
{
	ADD_EXPT_VAR( "PG", "REAL", "",&PG);
	ADD_EXPT_VAR( "FRACC", "REAL", "",&FRACC);
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Regulator_F.dp");

}


//Run the experiment code
void TRABAJO__RL10_offdesign_regulator_steady::runExperiment()
{
	REPORT_LIST("reportAll", "*") ;
	DEBUG_LEVEL = 1 ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	m_boundaryBranch[1] = -1;
	unkR[358] = 2500000. ;
	while ( unkR[358] <= 4000000 ) {
	STEADY() ;
	PG = _div( _div( unkR[306] * _sqrt(dyn[3],"Junction.f_in2.Tt") , unkR[364],"Turbine.f_in.pt") , unkR[371],"Turbine.A_in") ;
	FRACC = _div( unkR[306] , unkR[317],"Injector_F.W") ;
	m_boundaryBranch[1] = -1;
	unkR[358] = unkR[358] + 100000. ;
	}
}

/* Initialisation of defaults for global variables only used in experiment*/
void TRABAJO__RL10_offdesign_regulator_steady::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void TRABAJO__RL10_offdesign_regulator_steady::initDefaultsExp()
{
	dyn[3] = 200. ;
	dyn[7] = 4252. ;
	dyn[8] = 4.53 ;
}

/* Initialisation of boundaries*/
void TRABAJO__RL10_offdesign_regulator_steady::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[333] = 9000. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[358] = 0. ;
}
/* Initialisation of delays in experiments*/
void TRABAJO__RL10_offdesign_regulator_steady::initDelaysExpt()
{
}

#ifndef SIMULA_USE_DECK_SYMBOLS
bool TRABAJO__RL10_offdesign_regulator_steady::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
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
		TRABAJO__RL10_offdesign_regulator_steady ecomodel;
#else
		TRABAJO__RL10_offdesign_regulator_steady ecomodel(0,0,true);
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
		INTEG_simula *tmp = new TRABAJO__RL10_offdesign_regulator_steady(name,dirInstall,d);
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
	sprintf(experimentName,"%s","steady");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" void* getDeck(int t) {return 0;};
	extern "C" void delDeck(void *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS



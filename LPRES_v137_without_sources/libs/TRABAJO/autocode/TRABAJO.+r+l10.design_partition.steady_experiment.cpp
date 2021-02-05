//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "TRABAJO.+r+l10.design_partition.steady_experiment.h"

TRABAJO__RL10_design_partition_steady_experiment* TRABAJO__RL10_design_partition_steady_experiment::s_current= NULL;
TRABAJO__RL10_design_partition_steady_experiment::TRABAJO__RL10_design_partition_steady_experiment(const char* mgr,const char* installDir,bool dmode):TRABAJO__RL10_design_partition(mgr,installDir,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoGroupName = "";
m_infoExperimentName = "steady_experiment";
m_infoExperimentFileName = "TRABAJO.+r+l10.design_partition.steady_experiment";
m_infoExperimentFileNameExtra = "steady_experiment";
m_infoExperimentDate = "05/02/2021 17:16:38.207000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
nBounds = 1;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[1];
	for (int ib=0; ib < 1 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void TRABAJO__RL10_design_partition_steady_experiment::initInternalModels()
{
  TRABAJO__RL10_design_partition::initInternalModels();
}


//Add the experiment variables to the symbols table
void TRABAJO__RL10_design_partition_steady_experiment::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");

}


//Run the experiment code
void TRABAJO__RL10_design_partition_steady_experiment::runExperiment()
{
	REPORT_LIST("reportAll", "*") ;
	DEBUG_LEVEL = 1 ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	STEADY() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void TRABAJO__RL10_design_partition_steady_experiment::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void TRABAJO__RL10_design_partition_steady_experiment::initDefaultsExp()
{
	dyn[1] = 1. ;
	dyn[2] = 1. ;
	dyn[3] = 100. ;
	dyn[4] = 100. ;
	unkR[179] = 3000. ;
}

/* Initialisation of boundaries*/
void TRABAJO__RL10_design_partition_steady_experiment::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[336] = 9000. ;
}
/* Initialisation of delays in experiments*/
void TRABAJO__RL10_design_partition_steady_experiment::initDelaysExpt()
{
}

#ifndef SIMULA_USE_DECK_SYMBOLS
bool TRABAJO__RL10_design_partition_steady_experiment::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
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
		TRABAJO__RL10_design_partition_steady_experiment ecomodel;
#else
		TRABAJO__RL10_design_partition_steady_experiment ecomodel(0,0,true);
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
		INTEG_simula *tmp = new TRABAJO__RL10_design_partition_steady_experiment(name,dirInstall,d);
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
	sprintf(experimentName,"%s","steady_experiment");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" void* getDeck(int t) {return 0;};
	extern "C" void delDeck(void *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS



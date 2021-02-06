//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "TRABAJO.+r+l10_alternative_control.partition1.exp1.h"

TRABAJO__RL10_alternative_control_partition1_exp1* TRABAJO__RL10_alternative_control_partition1_exp1::s_current= NULL;
TRABAJO__RL10_alternative_control_partition1_exp1::TRABAJO__RL10_alternative_control_partition1_exp1(const char* mgr,const char* installDir,bool dmode):TRABAJO__RL10_alternative_control_partition1(mgr,installDir,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoGroupName = "";
m_infoExperimentName = "exp1";
m_infoExperimentFileName = "TRABAJO.+r+l10_alternative_control.partition1.exp1";
m_infoExperimentFileNameExtra = "exp1";
m_infoExperimentDate = "06/02/2021 23:48:37.001000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
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
void TRABAJO__RL10_alternative_control_partition1_exp1::initInternalModels()
{
  TRABAJO__RL10_alternative_control_partition1::initInternalModels();
}


//Add the experiment variables to the symbols table
void TRABAJO__RL10_alternative_control_partition1_exp1::addExptVariables()
{
varHasEquationInBoundBlock("CombCha.OF");
varHasEquationInBoundBlock("LPRES.Altitude");

}


//Run the experiment code
void TRABAJO__RL10_alternative_control_partition1_exp1::runExperiment()
{
	REPORT_LIST("reportAll", "*") ;
	DEBUG_LEVEL = 1 ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	unkR[359] = 2500000. ;
	while ( unkR[359] <= 4000000 ) {
	STEADY() ;
	unkR[359] = unkR[359] + 100000. ;
	}
}

/* Initialisation of defaults for global variables only used in experiment*/
void TRABAJO__RL10_alternative_control_partition1_exp1::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void TRABAJO__RL10_alternative_control_partition1_exp1::initDefaultsExp()
{
	dyn[1] = 4. ;
	dyn[2] = 170. ;
	dyn[6] = 4252. ;
	dyn[7] = 4.53 ;
	dyn[5] = 0.5 ;
}

/* Initialisation of boundaries*/
void TRABAJO__RL10_alternative_control_partition1_exp1::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[7] = 6.0549999999 ;
	if (m_boundaryBranch[1] == 0)  
		unkR[334] = 9000. ;
}
/* Initialisation of delays in experiments*/
void TRABAJO__RL10_alternative_control_partition1_exp1::initDelaysExpt()
{
}

#ifndef SIMULA_USE_DECK_SYMBOLS
bool TRABAJO__RL10_alternative_control_partition1_exp1::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
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
		TRABAJO__RL10_alternative_control_partition1_exp1 ecomodel;
#else
		TRABAJO__RL10_alternative_control_partition1_exp1 ecomodel(0,0,true);
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
		INTEG_simula *tmp = new TRABAJO__RL10_alternative_control_partition1_exp1(name,dirInstall,d);
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



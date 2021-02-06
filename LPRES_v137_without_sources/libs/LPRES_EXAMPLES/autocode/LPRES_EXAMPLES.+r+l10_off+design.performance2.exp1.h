//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__RL10_offDesign_performance2_exp1_H
#define LPRES_EXAMPLES__RL10_offDesign_performance2_exp1_H
#include "LPRES_EXAMPLES.+r+l10_off+design.performance2.h"

class LPRES_EXAMPLES__RL10_offDesign_performance2_exp1: public LPRES_EXAMPLES__RL10_offDesign_performance2
{
public:
	LPRES_EXAMPLES__RL10_offDesign_performance2_exp1(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();
	virtual bool gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);

	static LPRES_EXAMPLES__RL10_offDesign_performance2_exp1* s_current;
private:


// Experiment variables
	double R_comb;
	double FGAMMA_comb;
	int _vi1;

// experiment functions

};
#endif

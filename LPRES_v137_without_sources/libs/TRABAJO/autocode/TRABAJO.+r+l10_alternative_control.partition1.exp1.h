//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef TRABAJO__RL10_alternative_control_partition1_exp1_H
#define TRABAJO__RL10_alternative_control_partition1_exp1_H
#include "TRABAJO.+r+l10_alternative_control.partition1.h"

class TRABAJO__RL10_alternative_control_partition1_exp1: public TRABAJO__RL10_alternative_control_partition1
{
public:
	TRABAJO__RL10_alternative_control_partition1_exp1(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();
	virtual bool gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);

	static TRABAJO__RL10_alternative_control_partition1_exp1* s_current;
private:


// Experiment variables

// experiment functions

};
#endif

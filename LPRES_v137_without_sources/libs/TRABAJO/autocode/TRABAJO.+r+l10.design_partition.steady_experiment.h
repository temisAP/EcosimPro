//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef TRABAJO__RL10_design_partition_steady_experiment_H
#define TRABAJO__RL10_design_partition_steady_experiment_H
#include "TRABAJO.+r+l10.design_partition.h"

class TRABAJO__RL10_design_partition_steady_experiment: public TRABAJO__RL10_design_partition
{
public:
	TRABAJO__RL10_design_partition_steady_experiment(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();
	virtual bool gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);

	static TRABAJO__RL10_design_partition_steady_experiment* s_current;
private:


// Experiment variables

// experiment functions

};
#endif

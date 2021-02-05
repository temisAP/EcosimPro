//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef TRABAJO__RL10_offdesign_offdesign_partition_steady_H
#define TRABAJO__RL10_offdesign_offdesign_partition_steady_H
#include "TRABAJO.+r+l10_offdesign.offdesign_partition.h"

class TRABAJO__RL10_offdesign_offdesign_partition_steady: public TRABAJO__RL10_offdesign_offdesign_partition
{
public:
	TRABAJO__RL10_offdesign_offdesign_partition_steady(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();
	virtual bool gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);

	static TRABAJO__RL10_offdesign_offdesign_partition_steady* s_current;
private:


// Experiment variables

// experiment functions

};
#endif

//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef TRABAJO__RL10_offdesign_offdesign_partition_CPP
#define TRABAJO__RL10_offdesign_offdesign_partition_CPP

#include "TRABAJO.+r+l10_offdesign.offdesign_partition.h"

TRABAJO__RL10_offdesign_offdesign_partition* TRABAJO__RL10_offdesign_offdesign_partition::s_current= NULL;

TRABAJO__RL10_offdesign_offdesign_partition::TRABAJO__RL10_offdesign_offdesign_partition(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoComponentName = "RL10_offdesign";
m_infoPartitionName = "offdesign_partition";
m_infoModelName = "TRABAJO__RL10_offdesign_offdesign_partition";
m_infoModelFileName = "TRABAJO.+r+l10_offdesign.offdesign_partition";
m_infoModelFileNameExtra = "+r+l10_offdesign.offdesign_partition";
m_perfFlag = false;
m_infoComponentDate = "05/02/2021 17:35:06.268000";
m_infoPartitionDate = "05/02/2021 17:35:16.052000";
m_programVersion= "EcosimPro V6.0.0";
m_libsVersion= "LPRES V1.3.7 MATH V3.2.7 TRABAJO V0.0 ";

m_solveInternalBox= new int[4]; 
int nbx;
for (nbx=0; nbx < 4 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[1];
int ib;
for (ib=0; ib < 1 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[4]; 
int nibr;
for (nibr=0; nibr < 4 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[16]; 
int nif;
for (nif=0; nif < 16 ; nif++)
	m_branchIf[nif]= -1;

static const char * elmstr0[] = { "Angles", "Coefficients", NULL } ;
static int elmind0[] = { 1, 2 } ;
static const char * elmstr1[] = { "LOX", "NTO", "H2O2", "HNO3", "LF2", "RP_1", "LCH4", "LH2", "N2H4", "UDMH", "MMH", "JP_10", "Kerox", "Oil", "H2O", "IPA", 
		"Air", "Ar", "CH4", "CO", "CO2", "H2", "He", "N2", "O2", "MMH_vapour", "Comb_prod", "Comb_prod_M", "Comb_prod_cp", NULL } ;
static int elmind1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 } ;
static const char * elmstr2[] = { "Liquid", "Gas", NULL } ;
static int elmind2[] = { 1, 2 } ;
static const char * elmstr3[] = { "Convergent", "Divergent", NULL } ;
static int elmind3[] = { 1, 2 } ;
static int elmind4[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 } ;
static int elmind5[] = { 1, 7, 8, 11 } ;
static int elmind6[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 } ;
static int elmind7[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26 } ;
static int elmind8[] = { 1, 4 } ;
static const char * elmstr9[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", NULL } ;
static int elmind9[] = { 1, 2, 3, 4, 5, 6, 7, 8 } ;
static int elmind10[] = { 8, 6 } ;
static const char * elmstr11[] = { "All", "Unknown_W", NULL } ;
static int elmind11[] = { 1, 2 } ;
static int elmind12[] = { 1, 5, 6, 7 } ;
static int elmind13[] = { 6, 3, 4 } ;
static int elmind14[] = { 2, 3, 4 } ;
static const char * elmstr15[] = { "Yes", "No", NULL } ;
static int elmind15[] = { 1, 2 } ;
n_typ=16;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,2,elmind0},
		{elmstr1,29,elmind1},
		{elmstr2,2,elmind2},
		{elmstr3,2,elmind3},
		{elmstr1,10,elmind4},
		{elmstr1,4,elmind5},
		{elmstr1,16,elmind6},
		{elmstr1,26,elmind7},
		{elmstr9,2,elmind8},
		{elmstr9,8,elmind9},
		{elmstr9,2,elmind10},
		{elmstr11,2,elmind11},
		{elmstr9,4,elmind12},
		{elmstr9,3,elmind13},
		{elmstr9,3,elmind14},
		{elmstr15,2,elmind15}
	} ;
typ= new struct INTEG_enumType[16];
etypecopy(16,typ,tmp_typ);
n_dyn=9;
dyn= new double[9] ;
static double tmp_dynInit[9]={ 1, 1, 1, 1, 1, 1, 1, 100, 100 } ;
dynInit= new double[9];
dcopy(9,dynInit,tmp_dynInit);


n_der=0;
der= new double[9] ;
static double tmp_derInit[9]={ 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[9];
dcopy(9,derInit,tmp_derInit);


res= new double[9] ;
ldr= new double[9] ;
boxDyn= new double[9] ;
boxDer= new double[9] ;

n_unkR=391;
unkR= new double[391] ;
static double tmp_unkRInit[391]={ 56.8879856, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 3300, 0, 
		2.7, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 
		0, 0, 3275010, 5000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		1.475994, 0, 0, 0, 0, 500, 0.00100103471, 0.00813274823, 100000, 0, 1, 0, 16.09, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 0, 0, 
		1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 
		3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 1500, 
		0.1, 1, 1, 1, 1, 1200000, 0.05, 0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 
		0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 0, 0, 1, 1, 1, 0, 0.000677279675, 0, 
		0, 850, 7358000, 0.573907002, 0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 0, 850, 4282000, 0.6508, 
		0, 0.03027, 0, 0.05393, 0.194281146, 0, 3219188.99, 1500, 0.1, 1, 1200000, 1, 1, 1, 1, 0, 
		0, 0, 0, 0.000513113762, 0.1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 0, 
		0.05, 1.8, 0, 0.7, 0.715229315, 38172.635, 0 } ;
unkRInit= new double[391];
dcopy(391,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=23;
static int tmp_cteIInit[23]={ 1, 4, 1, 1, 1, 1, 8, 1, 1, 6, 6, 6, 6, 4, 4, 4, 
		4, 6, 2, 2, 1, 4, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 65;
n_neld= 0;
m_numBoxes= 3;
m_nNonLinearBoxes= 3;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void TRABAJO__RL10_offdesign_offdesign_partition::initInternalModels()
{
}

void TRABAJO__RL10_offdesign_offdesign_partition::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi1;
	int _vi2;
	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[1]) ) {
	_vi2 = setofElem(&typ[1], _vi1) ;
	fluid[_vi1-1] = 0. ;
	_vi1 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::MATH__min(const double & x,const double & y)
{
	if( x < y ) {
	return x ;
	}
	return y ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi3;
	int _vi4;
	double _vr1;
	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[7]) ) {
	_vi4 = setofElem(&typ[7], _vi3) ;
	_vr1 += Chem_cp[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 + fluid[28] * fluid[26] ;
}


void TRABAJO__RL10_offdesign_offdesign_partition::LPRES__fluid_func(double f[],double fluid[])
{
	int _vi5;
	int _vi6;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[1]) ) {
	_vi6 = setofElem(&typ[1], _vi5) ;
	if( _vi6 == 27 ) {
	fluid[_vi5-1] = 0. ;
		}
	else if( _vi6 == 28) {
	fluid[_vi5-1] = 0. ;

		}
	else if( _vi6 == 29) {
	fluid[_vi5-1] = 0. ;

	}
	else {
	fluid[_vi5-1] = _div( f[_vi5-1] , (1. - f[26]),"1 - f[Comb_prod]") ;
	}
	_vi5 += 1 ;
	}
}


double TRABAJO__RL10_offdesign_offdesign_partition::MATH__max(const double & x,const double & y)
{
	if( x > y ) {
	return x ;
	}
	return y ;
}


void TRABAJO__RL10_offdesign_offdesign_partition::LPRES__fluidP(const int & Combustion,double fluid_O[],double fluid_F[],const double & phi,const double & W_O,const double & W_F,const double & W_F_st,const double & M_P,const double & cp_P,double fluid_P[])
{
	int _vi7;
	int _vi8;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[1]) ) {
	_vi8 = setofElem(&typ[1], _vi7) ;
	if( Combustion ) {
	if( _vi8 == 27 ) {
	fluid_P[_vi7-1] = _div( (fluid_O[_vi7-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi7-1] * MATH__max(phi - 1., 0.) * W_F_st + (1. - MATH__max(1. - phi, 0.)) * (W_O + W_F_st)) , (W_O + W_F),"W_O + W_F") ;
		}
	else if( _vi8 == 28) {
	fluid_P[_vi7-1] = M_P ;

		}
	else if( _vi8 == 29) {
	fluid_P[_vi7-1] = cp_P ;

	}
	else {
	fluid_P[_vi7-1] = _div( (fluid_O[_vi7-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi7-1] * MATH__max(phi - 1., 0.) * W_F_st) , (W_O + W_F),"W_O + W_F") ;
	}
	}
	else {
	if( _vi8 == 27 ) {
	fluid_P[_vi7-1] = 0. ;
		}
	else if( _vi8 == 28) {
	fluid_P[_vi7-1] = 0. ;

		}
	else if( _vi8 == 29) {
	fluid_P[_vi7-1] = 0. ;

	}
	else {
	fluid_P[_vi7-1] = _div( (fluid_O[_vi7-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi7-1] * MATH__max(phi - 1., 0.) * W_F_st) , (W_O + W_F),"W_O + W_F") ;
	}
	}
	_vi7 += 1 ;
	}
}


void TRABAJO__RL10_offdesign_offdesign_partition::LPRES__fluidG(double fluid_P[],const double & W_O,const double & W_IO,const double & W_F,const double & W_IF,const double & W,double fluid[])
{
	int _vi10;
	int _vi9;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[1]) ) {
	_vi10 = setofElem(&typ[1], _vi9) ;
	if( _vi10 == 27 ) {
	fluid[_vi9-1] = _div( (fluid_P[26] * (W_O + W_F) + W_IO + W_IF) , W,"W") ;
		}
	else if( _vi10 == 28) {
	fluid[_vi9-1] = fluid_P[27] ;

		}
	else if( _vi10 == 29) {
	fluid[_vi9-1] = fluid_P[28] ;

	}
	else {
	fluid[_vi9-1] = _div( fluid_P[_vi9-1] * (W_O + W_F) , W,"W") ;
	}
	_vi9 += 1 ;
	}
}


int TRABAJO__RL10_offdesign_offdesign_partition::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi11;
	int _vi12;
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[7]) ) {
	_vi12 = setofElem(&typ[7], _vi11) ;
	if( fluid[_vi12-1] != 0 ) {
	fluid_name = _vi12 ;
	}
	_vi11 += 1 ;
	}
	if( fluid[26] != 0 ) {
	fluid_name = 27 ;
	}
	return fluid_name ;
}


int TRABAJO__RL10_offdesign_offdesign_partition::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;
	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[6], fluid_name) != 0 ) {
	fluid_state = 1 ;
	}
	else {
	fluid_state = 2 ;
	}
	return fluid_state ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi13;
	int _vi14;
	double _vr2;
	_vr2 = 0. ;
	_vi13 = 1 ;
	while ( _vi13 <= setofSize(&typ[7]) ) {
	_vi14 = setofElem(&typ[7], _vi13) ;
	_vr2 += _div( fluid[_vi14-1] , Chem_M[_vi13-1],"Chem_M[_vi13]") ;
	_vi13 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__R(double fluid[])
{
	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",262,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__cv(double fluid[])
{
	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__gamma(double fluid[])
{
	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__FGAMMA(double fluid[])
{
	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int TRABAJO__RL10_offdesign_offdesign_partition::LPRES__Vaporisation(double fluid[])
{
	// Local variables:
	int Vapour[4] = { 25,19,22,26 };
	int liquid_name = 1;
	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",222,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	liquid_name = LPRES__Know_fluid(fluid) ;
	if(!(setofPos(&typ[5], liquid_name) != 0))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",226,".","setofPos(LPRES.LV, liquid_name) != 0","%s","ONLY LIQUIDS IN ENUM LV CAN BE VAPORISED!");

	return Vapour[setofPos(&typ[5], liquid_name)-1] ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__cond(double fluid[])
{
	// Local variables:
	double Chem_cond[16] = { 0.149,0.131,0.353,0.294,0.1,0.137,0.15,0.117,0.488,0.035,0.246,0.11,0.17,0.12,0.607,0.145 };
	int _vi15;
	int _vi16;
	double _vr3;
	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",366,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr3 = 0. ;
	_vi15 = 1 ;
	while ( _vi15 <= setofSize(&typ[6]) ) {
	_vi16 = setofElem(&typ[6], _vi15) ;
	_vr3 += Chem_cond[_vi15-1] * fluid[_vi16-1] ;
	_vi15 += 1 ;
	}
	return _vr3 ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi17;
	int _vi18;
	double _vr4;
	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",346,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr4 = 0. ;
	_vi17 = 1 ;
	while ( _vi17 <= setofSize(&typ[6]) ) {
	_vi18 = setofElem(&typ[6], _vi17) ;
	_vr4 += Chem_rho[_vi17-1] * fluid[_vi18-1] ;
	_vi17 += 1 ;
	}
	return _vr4 ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[16] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002 };
	int _vi19;
	int _vi20;
	double _vr5;
	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",386,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr5 = 0. ;
	_vi19 = 1 ;
	while ( _vi19 <= setofSize(&typ[6]) ) {
	_vi20 = setofElem(&typ[6], _vi19) ;
	_vr5 += Chem_visc[_vi19-1] * fluid[_vi20-1] ;
	_vi19 += 1 ;
	}
	return _vr5 ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
{
	// Local variables:
	double rey = 0.0;
	double fric = 0.0;
	double a = 0.0;
	double b = 0.0;
	rey = MATH__max(cabs(Re), 1e-05) ;
	a = _pow( (2.457 * _log(_div( 1. , (_pow( (_div( 7. , Re,"Re")) , 0.9,"(7 / Re)**(0.9)" ) + _div( 0.27 * rug , D,"D")),"(7 / Re) ** 0.9 + 0.27 * rug / D"),"1 / ((7 / Re) ** 0.9 + 0.27 * rug / D)")) , 16.,"(2.457 * log(1 / ((7 / Re) ** 0.9 + 0.27 * rug / D)))**(16)" ) ;
	b = _pow( (_div( 37530. , rey,"rey")) , 16.,"(37530 / rey)**(16)" ) ;
	fric = 8. * _pow( (_pow( (_div( 8. , rey,"rey")) , 12.,"(8 / rey)**(12)" ) + _div( 1. , _pow( (a + b) , 1.5,"(a + b)**(1.5)" ),"(a + b) ** 1.5")) , 0.0833333333,"((8 / rey) ** 12 + 1 / (a + b) ** 1.5)**(0.0833333333)" ) ;
	return fric ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__Geopotential_Altitude(const double & z)
{
	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double TRABAJO__RL10_offdesign_offdesign_partition::LPRES__ISA_Pressure(const double & z)
{
	// Local variables:
	double p_amb = 101325.;
	double a[8] = { -6.5,0,1,2.8,0,-2.8,-2,0 };
	int b[8] = { 0,1,0,0,1,0,0,1 };
	double T_0 = 288.15;
	double p_0 = 101325.;
	double h_0 = 0.;
	double h_max[7] = { 11000,20000,32000,47000,51000,71000,84852 };
	int i = 0;
	int j = 1;
	double h = 0.0;
	int _vi21;
	h = LPRES__Geopotential_Altitude(z) ;
	_vi21 = 1 ;
	while ( _vi21 <= 7 ) {
	if( h > h_max[_vi21-1] ) {
	if( b[_vi21-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi21-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi21-1] * (h_max[_vi21-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi21-1] * 287./1000.),"a[_vi21] * 287 / 1000")),"((T_0 + a[_vi21] * (h_max[_vi21] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi21] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi21-1] * (h_max[_vi21-1] - h_0)/1000. ;
	h_0 = h_max[_vi21-1] ;
	j = _vi21 + 1 ;
	}
	_vi21 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


/* Copy special unkR[] items to dyn[] vector */

void TRABAJO__RL10_offdesign_offdesign_partition::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void TRABAJO__RL10_offdesign_offdesign_partition::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",161,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[177]) ;
	unkI[0] = 1 ;
	unkR[212] = 1. ;
	if( 1 ) {
	unkR[57] = unkR[211] ;
	}
	dyn[5] = unkR[14] ;
	dyn[1] = unkR[16] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[238]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[59]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[238]), &unkR[27]) ;
	unkR[228] = unkR[229] ;
  // init(Pump_F.Pump,0)
	dyn[4] = unkR[337] ;
  // init(Pump_O.Pump,0)
	unkR[348] = unkR[349] ;
  // init(Turbine.Turbine,0)
	dyn[6] = unkR[372] ;
	unkR[374] = unkR[375] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void TRABAJO__RL10_offdesign_offdesign_partition::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-17]  PRIVATE_EQT
unkR[26] = _div( dyn[1] , (1. - unkR[53]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-18]  PRIVATE_EQT
unkR[270] = _div( _div( unkR[26] , (unkR[230] * unkR[231] * LPRES__rho(&unkR[238])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-19]  PRIVATE_EQT
unkR[227] = _div( LPRES__rho(&unkR[238]) * unkR[270] * unkR[223] , LPRES__visc(&unkR[238]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-20]  PRIVATE_EQT
unkR[225] = 0.027 * _pow( unkR[227] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[226] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-21]  PRIVATE_EQT
unkR[235] = _div( unkR[225] * LPRES__cond(&unkR[238]) , unkR[223],"CoolingJacket.D_hy") ;
//[E-22]  PRIVATE_EQT
unkR[233] = LPRES__hdc_fric(unkR[222], unkR[268], unkR[227]) ;
//[E-23]  PRIVATE_EQT
unkR[18] = unkR[26] - dyn[1] ;
//[E-24]  PRIVATE_EQT
unkR[340] = _div( unkR[26] , (unkR[334] * dyn[4] * LPRES__rho(&unkR[238])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-25]  PRIVATE_EQT
unkR[342] = 1. - _div( (1. - unkR[343]) , unkR[341],"Pump_F.phi_d") * unkR[340] ;
//[E-26]  PRIVATE_EQT
unkR[345] = unkR[342] * _pow( dyn[4] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-27]  PRIVATE_EQT
unkR[267] = unkR[345] * unkR[339] * LPRES__rho(&unkR[238]) + unkR[293] ;
//[E-28]  PRIVATE_EQT
unkR[234] = unkR[267] - _div( unkR[233] * unkR[224] , unkR[222],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[238]) * _pow( unkR[270] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-29]  PRIVATE_EQT
unkR[364] = unkR[234] * unkR[363] ;
//[E-30]  PRIVATE_EQT
unkR[306] = _div( _sqrt(LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[6], 1.) * cos(unkR[380] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( MATH__min(dyn[6], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[27]) + 1.)/2. , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) * unkR[364] * unkR[371] , _sqrt(dyn[3] * LPRES__R(&unkR[27]),"Junction.f_in2.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(Junction.f_in2.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") ;
//[E-31]  PRIVATE_EQT
unkR[331] = unkR[26] - unkR[306] ;
//[E-32]  PRIVATE_EQT
unkR[361] = unkR[234] * unkR[363] ;
//[E-33]  PRIVATE_EQT
unkR[332] = unkR[361] - unkR[358] ;
//[E-34]  PRIVATE_EQT
unkR[285] = unkR[332] * unkR[330] ;
//[E-35]  PRIVATE_EQT
unkR[308] = _div( unkR[285] , unkR[330],"Junction.TPL") ;
//[E-36]  PRIVATE_EQT
unkR[307] = unkR[308] + unkR[302] ;
//[E-37]  PRIVATE_EQT
unkR[379] = 1. - unkR[382] * (1. - _pow( (_div( unkR[307] , unkR[364],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-38]  PRIVATE_EQT
unkR[305] = unkR[379] * dyn[3] ;
//[E-39]  PRIVATE_EQT
unkR[284] = _div( (-(_div( unkR[306] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) * -unkR[305]) - _div( unkR[331] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) * -dyn[3]) , (_div( unkR[306] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) + _div( unkR[331] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27])),"HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + Junction.f_in2.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-40]  PRIVATE_EQT
unkR[373] = unkR[306] * LPRES__cp(&unkR[27]) * (dyn[3] - unkR[305]) ;
//[E-41]  PRIVATE_EQT
unkR[390] = _div( unkR[373] , unkR[306],"HeadLoss_Turb.f_in.W") ;
//[E-42]  PRIVATE_EQT
unkR[286] = unkR[285] - unkR[281] ;
//[E-43]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[318] = _div( unkR[286] , unkR[315],"Injector_F.PR_sl") ;
}
else 
{
unkR[318] = 0. ;
}
//[E-44]  PRIVATE_EQT
unkR[237] = _div( _div( (unkR[267] - unkR[293]) , LPRES__rho(&unkR[238]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[339],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[238]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[291] ;
//[E-45]  PRIVATE_EQT
unkR[206] = unkR[26] * LPRES__cp(&unkR[27]) * (dyn[3] - unkR[237]) ;
//[E-46]  PRIVATE_EQT
unkR[228] = _div( _div( unkR[206] , unkR[221],"CoolingJacket.A_wet_cooling") , unkR[235],"CoolingJacket.h_l") + unkR[237] ;
//[E-47]  PRIVATE_EQT
unkR[207] = _div( _div( unkR[206] , unkR[5],"CombCha.A_wet") , (_div( unkR[236] , unkR[269],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[228] ;
//[E-48]  PRIVATE_EQT
unkR[336] = -(unkR[345] * unkR[26]) ;
//[E-49]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[280] = unkR[336] + unkR[373] ;
//[E-50]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[278] = -(_div( unkR[280] , unkR[276],"Gearbox.eta")) ;
else unkR[278] = -(unkR[280] * unkR[276]) ;
//[E-51]  PRIVATE_EQT
unkR[357] = _div( -unkR[278] , dyn[2],"HeadLoss_TO.f_in.W") ;
//[E-52]  PRIVATE_EQT
unkR[273] = unkR[357] * unkR[351] * LPRES__rho(&unkR[59]) + unkR[300] ;
//[E-53]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[328] = _div( unkR[273] , unkR[325],"Injector_O.PR_sl") ;
}
else 
{
unkR[328] = 0. ;
}
//[E-54]  PRIVATE_EQT
unkR[272] = _div( _div( (unkR[273] - unkR[300]) , LPRES__rho(&unkR[59]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[351],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[59]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[298] ;
//[E-55]  PRIVATE_EQT
unkR[20] = dyn[2] * (1. - unkR[85]) ;
//[E-56]  PRIVATE_EQT
unkR[19] = dyn[2] - unkR[20] ;
//[E-57]  PRIVATE_EQT
unkR[176] = unkR[19] + unkR[20] + unkR[26] ;
//[E-58]  PRIVATE_EQT
unkR[7] = _div( unkR[20] , dyn[1],"CombCha.W_F") ;
//[E-59]  PRIVATE_EQT
unkR[212] = _div( unkR[8] , unkR[7],"CombCha.OF") ;
//[E-60]  PRIVATE_EQT
unkR[17] = _div( dyn[1] , unkR[212],"CombCha.phi") ;
//[E-61]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_P 
LPRES__fluidP(unkI[0], &unkR[118], &unkR[89], unkR[212], unkR[20], dyn[1], unkR[17], unkR[6], unkR[22], &unkR[147]);
//[E-62]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[147], unkR[20], unkR[19], dyn[1], unkR[18], unkR[176], &unkR[177]);
//[E-63]  PRIVATE_EQT
unkR[57] = _div( _div( unkR[176] * _sqrt(LPRES__R(&unkR[177]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[177]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-64]  PRIVATE_EQT
unkR[314] = _div( unkR[286] , unkR[57],"CombCha.f_O.p_c") ;
//[E-65]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[313] = _sqrt(_div( 2. * (_pow( unkR[314] , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[313] = 1. ;
else unkR[313] = 0. ;
//[E-66]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[25] = _div( unkR[284] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( unkR[313] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[25] = unkR[284] ;
}
//[E-67]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[56] = MATH__max(unkR[57], unkR[318]) ;
}
else 
{
unkR[56] = unkR[57] ;
}
//[E-68]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[27]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[26],_div( _div( unkR[310] * LPRES__FGAMMA(&unkR[27]) * unkR[286] , _sqrt(unkR[284] * LPRES__R(&unkR[27]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[27]) - 1) * _pow( unkR[313] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[27]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[27]) + 1) , (2 * (LPRES__gamma(&unkR[27]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[313],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[26],unkR[310] * unkR[312] * _sqrt(2. * LPRES__rho(&unkR[27]) * (unkR[286] - unkR[56]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-69]  PRIVATE_EQT
unkR[324] = _div( unkR[273] , unkR[57],"CombCha.f_O.p_c") ;
//[E-70]  PRIVATE_EQT
 if(m_branchZone[3]==0)
	unkR[323] = _sqrt(_div( 2. * (_pow( unkR[324] , (_div( (LPRES__gamma(&unkR[59]) - 1.) , LPRES__gamma(&unkR[59]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[59]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[323] = 1. ;
else unkR[323] = 0. ;
//[E-71]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[58] = _div( unkR[272] , (1. + (LPRES__gamma(&unkR[59]) - 1.)/2. * _pow( unkR[323] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[58] = unkR[272] ;
}
//[E-72]  PRIVATE_EQT
unkR[13] = dyn[5] - _div( (-(_div( unkR[18] , unkR[176],"ThrustMonitor.g.W") * unkR[55] * (dyn[5] - unkR[25])) - _div( unkR[19] , unkR[176],"ThrustMonitor.g.W") * unkR[87] * (dyn[5] - unkR[58])) , (_div( (unkR[20] + dyn[1]) , unkR[176],"ThrustMonitor.g.W") * LPRES__cp(&unkR[147])),"(CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P)") ;
//[E-73]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[88] = MATH__max(unkR[57], unkR[328]) ;
}
else 
{
unkR[88] = unkR[57] ;
}
//[E-74]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_LOX.f_in.pt / sqrt(FlowMeter_LOX.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_LOX.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[59]) == 2 ) 
{
res[1] = evalNormResidueInternal(1,dyn[2],_div( _div( unkR[320] * LPRES__FGAMMA(&unkR[59]) * unkR[273] , _sqrt(unkR[272] * LPRES__R(&unkR[59]),"FlowMeter_LOX.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_LOX.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[59]) - 1) * _pow( unkR[323] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[59]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[59]) + 1) , (2 * (LPRES__gamma(&unkR[59]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[323],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[1] = evalNormResidueInternal(1,dyn[2],unkR[320] * unkR[322] * _sqrt(2. * LPRES__rho(&unkR[59]) * (unkR[273] - unkR[88]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_LOX.f_in.pt - CombCha.f_O.p)"));
}
//[E-75]  PRIVATE_EQT
unkR[21] = _div( _sqrt(LPRES__R(&unkR[177]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[177]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-76]  PRIVATE_EQT
unkR[9] = _div( 4. * LPRES__gamma(&unkR[177]) , (9. * LPRES__gamma(&unkR[177]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-77]  PRIVATE_EQT
unkR[12] = dyn[5] * _div( (1. + _pow( unkR[9] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[177]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[177]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-78]  PRIVATE_EQT
unkR[213] = 1.184e-07 * _pow( LPRES__M(&unkR[177]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-79]  PRIVATE_EQT
unkR[208] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[213] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[177]) , _pow( unkR[9] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[57] , unkR[21],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-80]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[2] = evalNormResidueInternal(2,unkR[206],unkR[208] * (unkR[12] - unkR[207]) * unkR[5]);
//[E-81]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[177]) , _sqrt(LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[177]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[177]) + 1) , (2 * (LPRES__gamma(&unkR[177]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-82]  PRIVATE_EQT
unkR[23] = _div( (unkR[20] * LPRES__cp(&unkR[118]) + dyn[1] * LPRES__cp(&unkR[89])) , (unkR[20] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
//[E-83]  PRIVATE_EQT
unkR[15] = _div( (LPRES__cp(&unkR[147]) * (unkR[13] - 298.15) - _div( unkR[24] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)")) , unkR[23],"CombCha.cp_R") + 298.15 ;
//[E-84]  (1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R * CombCha.T_in = LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T
res[4] = evalNormResidueInternal(4,(1 + _div( unkR[212] , unkR[8],"CombCha.OF_st")) * unkR[23] * unkR[15],LPRES__cp(&unkR[118]) * unkR[58] + _div( unkR[212] , unkR[8],"CombCha.OF_st") * LPRES__cp(&unkR[89]) * unkR[25]);
//[E-85]  PRIVATE_EQT
unkR[376] = dyn[6] * _sqrt(_div( LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * dyn[3] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( dyn[6] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-86]  PRIVATE_EQT
unkR[377] = unkR[376] * cos(unkR[380] * 3.14159265358979/180.) ;
//[E-87]  PRIVATE_EQT
unkR[279] = _div( dyn[4] , unkR[344],"Pump_F.r_m") ;
//[E-88]  PRIVATE_EQT
unkR[277] = _div( unkR[279] , unkR[275],"Gearbox.GR") ;
//[E-89]  PRIVATE_EQT
unkR[348] = unkR[277] * unkR[356] ;
//[E-90]  PRIVATE_EQT
unkR[354] = _div( unkR[357] , _pow( unkR[348] , 2.,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2") ;
//[E-91]  PRIVATE_EQT
unkR[352] = _div( (1. - unkR[354]) , (_div( (1. - unkR[355]) , unkR[353],"Pump_O.phi_d")),"(1 - Pump_O.psi_d) / Pump_O.phi_d") ;
//[E-92]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
res[5] = evalNormResidueInternal(5,unkR[352],_div( dyn[2] , (unkR[346] * unkR[348] * LPRES__rho(&unkR[59])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)"));
//[E-93]  PRIVATE_EQT
unkR[374] = unkR[279] * unkR[388] ;
//[E-94]  PRIVATE_EQT
unkR[386] = _div( unkR[390] , _pow( unkR[374] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-95]  PRIVATE_EQT
unkR[383] = _div( (unkR[386] + 1.) , (tan(unkR[380] * 3.14159265358979/180.) - tan(unkR[381] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-96]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[6] = evalNormResidueInternal(6,unkR[383],_div( unkR[377] , unkR[374],"Turbine.U"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void TRABAJO__RL10_offdesign_offdesign_partition::fcn1(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign_offdesign_partition& m= *TRABAJO__RL10_offdesign_offdesign_partition::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	dcopy(*n,&m.res[0],residues);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void TRABAJO__RL10_offdesign_offdesign_partition::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[7];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign_offdesign_partition::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void TRABAJO__RL10_offdesign_offdesign_partition::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-97]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[177]) , (_pow( (_div( dyn[7] , unkR[57],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[177]) * (1. - _pow( (_div( dyn[7] , unkR[57],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[177]) - 1.) , LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[177]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void TRABAJO__RL10_offdesign_offdesign_partition::fcn2(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign_offdesign_partition& m= *TRABAJO__RL10_offdesign_offdesign_partition::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[7],x);
	dcopy(*n,&m.res[7],residues);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void TRABAJO__RL10_offdesign_offdesign_partition::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign_offdesign_partition::fcn2, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void TRABAJO__RL10_offdesign_offdesign_partition::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-102]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[176] * _sqrt(LPRES__R(&unkR[177]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[57],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[177]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[177]) + 1)/2 , (LPRES__gamma(&unkR[177]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void TRABAJO__RL10_offdesign_offdesign_partition::fcn3(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign_offdesign_partition& m= *TRABAJO__RL10_offdesign_offdesign_partition::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	dcopy(*n,&m.res[8],residues);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void TRABAJO__RL10_offdesign_offdesign_partition::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign_offdesign_partition::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}

int TRABAJO__RL10_offdesign_offdesign_partition::sparseGetEquiv( int nvars,int v[] )
{
	return -1;
}

/* Main residues function for this model */
void TRABAJO__RL10_offdesign_offdesign_partition::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[59]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[238]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[238]), &unkR[27]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_O 
LPRES__fluid_func(&unkR[59], &unkR[118]);
//[E-6]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_F 
LPRES__fluid_func(&unkR[27], &unkR[89]);
//[E-7]  PRIVATE_EQT
 if(m_branchZone[0]==0)
	unkR[11] = unkR[10] ;
else unkR[11] = 0. ;
//[E-8]  PRIVATE_EQT
unkR[300] = unkR[299] - unkR[295] ;
//[E-9]  PRIVATE_EQT
unkR[3] = unkR[4] * unkR[1] ;
//[E-10]  PRIVATE_EQT
unkR[223] = _div( 2. * unkR[230] * unkR[231] , (unkR[230] + unkR[231]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-11]  PRIVATE_EQT
unkR[226] = _div( LPRES__visc(&unkR[238]) * LPRES__cp(&unkR[238]) , LPRES__cond(&unkR[238]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-12]  PRIVATE_EQT
unkR[293] = unkR[292] - unkR[288] ;
//[E-13]  PRIVATE_EQT
unkR[221] = unkI[2] * 2. * (unkR[230] + unkR[231]) * unkR[224] ;
//[E-14]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[315] = _pow( ((LPRES__gamma(&unkR[27]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[27]) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[315] = 0. ;
}
//[E-15]  PRIVATE_EQT
unkR[222] = _div( 1.3 * _pow( (unkR[230] * unkR[231]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[230] + unkR[231]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-16]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[325] = _pow( ((LPRES__gamma(&unkR[59]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[59]) , (LPRES__gamma(&unkR[59]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[325] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,7,50);
else fbox1(_time,dyn,ldr,res) ;


if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-98]  PRIVATE_EQT
unkR[271] = cabs(unkR[26]) ;
//[E-99]  PRIVATE_EQT
unkR[274] = cabs(dyn[2]) ;
//[E-100]  PRIVATE_EQT
unkR[218] = unkR[271] + unkR[274] ;
//[E-101]  PRIVATE_EQT
unkR[209] = unkR[21] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-103]  PRIVATE_EQT
unkR[367] = _div( dyn[5] , (1. + (LPRES__gamma(&unkR[177]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-104]  PRIVATE_EQT
unkR[370] = dyn[8] * _sqrt(LPRES__gamma(&unkR[177]) * LPRES__R(&unkR[177]) * unkR[367],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-105]  PRIVATE_EQT
unkR[369] = _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[177]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[177]) - 1.) , LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-106]  PRIVATE_EQT
unkR[368] = LPRES__ISA_Pressure(unkR[333]) ;
//[E-107]  PRIVATE_EQT
unkR[217] = unkR[176] * unkR[370] + unkR[2] * (unkR[369] - unkR[368]) ;
//[E-108]  PRIVATE_EQT
unkR[215] = _div( unkR[217] , unkR[218],"ControlPanel.W_tot") ;
//[E-109]  PRIVATE_EQT
unkR[214] = _div( unkR[215] , unkR[21],"CombCha.c_star") ;
//[E-110]  PRIVATE_EQT
unkR[216] = unkR[215]/9.80665 ;
//[E-111]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[311] = _div( _sqrt(unkR[284] * LPRES__R(&unkR[27]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[26] , (LPRES__FGAMMA(&unkR[27]) * unkR[286]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[311] = 0. ;
}
//[E-112]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[319] = unkR[313] * _sqrt(LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * unkR[25],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[319] = _div( unkR[26] , (LPRES__rho(&unkR[27]) * unkR[310] * unkR[312]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-113]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[316] = 0. ;
}
else 
{
unkR[316] = _div( LPRES__rho(&unkR[27]) * unkR[319] * unkR[312] * _sqrt(4. * unkR[310]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[27]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-114]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[321] = _div( _sqrt(unkR[272] * LPRES__R(&unkR[59]),"FlowMeter_LOX.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * dyn[2] , (LPRES__FGAMMA(&unkR[59]) * unkR[273]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_LOX.f_in.pt") ;
}
else 
{
unkR[321] = 0. ;
}
//[E-115]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[329] = unkR[323] * _sqrt(LPRES__gamma(&unkR[59]) * LPRES__R(&unkR[59]) * unkR[58],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[329] = _div( dyn[2] , (LPRES__rho(&unkR[59]) * unkR[320] * unkR[322]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-116]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[326] = 0. ;
}
else 
{
unkR[326] = _div( LPRES__rho(&unkR[59]) * unkR[329] * unkR[322] * _sqrt(4. * unkR[320]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[59]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-117]  PRIVATE_EQT
unkR[335] = _div( (unkR[267] - unkR[293]) , (9.80665 * LPRES__rho(&unkR[238])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-118]  PRIVATE_EQT
unkR[347] = _div( (unkR[273] - unkR[300]) , (9.80665 * LPRES__rho(&unkR[59])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-119]  PRIVATE_EQT
unkR[219] = unkR[217] ;
//[E-120]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[220] = unkR[271] + unkR[274] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void TRABAJO__RL10_offdesign_offdesign_partition::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[238])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",59,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[238])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[59])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[177])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[369] , unkR[368],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",895,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[27])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void TRABAJO__RL10_offdesign_offdesign_partition::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114];
    ev[1]= unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114];
    ev[2]= unkI[0] - 1;
    ev[3]= unkR[278];
    ev[4]= LPRES__State(&unkR[27]) - 2;
    ev[5]= unkR[314] - unkR[315];
    ev[6]= LPRES__State(&unkR[27]) - 2;
    ev[7]= unkR[314] - unkR[315];
    ev[8]= LPRES__State(&unkR[59]) - 2;
    ev[9]= unkR[324] - unkR[325];
    ev[10]= LPRES__State(&unkR[59]) - 2;
    ev[11]= unkR[324] - unkR[325];
}

/* Evaluation of when conditions*/
void TRABAJO__RL10_offdesign_offdesign_partition::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ;
     w[1] = cont[1] ;
}

/* Generation WHEN conditions*/
void TRABAJO__RL10_offdesign_offdesign_partition::executeWhen(double *_time,  int index )
{
  if ( index == 0 )
  {
	unkI[0] = 0 ;
	return;
  }

  if ( index == 1 )
  {
	unkI[0] = 1 ;
	return;
  }

}

/* Evaluation of ZONE conditions*/
void TRABAJO__RL10_offdesign_offdesign_partition::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha.Q_comb_effective =  ZONE (CombCha.Combustion) CombCha.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Gearbox.m_out.Power =  ZONE (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta OTHERS -Pump_O.m.Power / Gearbox.eta
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* TRABAJO__RL10_offdesign_offdesign_partition::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 12 ;
	nConstraints= 31;
	nWhen= 2;
	nZones= 4;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "Private-info",
		"Private-info"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha.Combustion","OTHERS",
	"Pump_O.m.Power > 0","OTHERS",
	"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"Private-info"},{ WHEN,EQ_OP,0,1,"Private-info"},{ ZONE,EQ_OP,0,0,"CombCha.Combustion"},{ ZONE,GT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"}
,{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,GT_EQ_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"}
,{ ZONE,GT_EQ_OP,0,0,"Private-info"}};
	return evs;
};

/* Initialisation of delays */
void TRABAJO__RL10_offdesign_offdesign_partition::initDelays()
{
}


bool TRABAJO__RL10_offdesign_offdesign_partition::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_TRABAJO__RL10_offdesign_offdesign_partition = 84728;
static const unsigned int s_gst_chunkSize_TRABAJO__RL10_offdesign_offdesign_partition = 2000;
static const char *s_gst_chunkedStr_TRABAJO__RL10_offdesign_offdesign_partition[] = 
{
"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"
};
*size = s_gst_size_TRABAJO__RL10_offdesign_offdesign_partition;
*chunkSize = s_gst_chunkSize_TRABAJO__RL10_offdesign_offdesign_partition;
*chunkedStr = s_gst_chunkedStr_TRABAJO__RL10_offdesign_offdesign_partition;
return true;
}



bool TRABAJO__RL10_offdesign_offdesign_partition::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_TRABAJO__RL10_offdesign_offdesign_partition = 460;
static const unsigned int s_gsi_chunkSize_TRABAJO__RL10_offdesign_offdesign_partition = 2000;
static const char *s_gsi_chunkedStr_TRABAJO__RL10_offdesign_offdesign_partition[] = 
{
"CQAAAEEAAAAAAAAABwAAAAcAAAAHAAAABwAAAAcAAAAHAAAABwAAAAgAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_TRABAJO__RL10_offdesign_offdesign_partition;
*chunkSize = s_gsi_chunkSize_TRABAJO__RL10_offdesign_offdesign_partition;
*chunkedStr = s_gsi_chunkedStr_TRABAJO__RL10_offdesign_offdesign_partition;
return true;
}



bool TRABAJO__RL10_offdesign_offdesign_partition::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP void* create_TRABAJO__RL10_offdesign_offdesign_partition(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ep = 0;
	try
	{
		INTEG_simula *tmp = new TRABAJO__RL10_offdesign_offdesign_partition(name,dirInstall);
		ep = (void *)tmp->createThinModel(t,(void(*)())create_TRABAJO__RL10_offdesign_offdesign_partition);
	}
	catch(...)
	{
	}
	return ep;
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_TRABAJO__RL10_offdesign_offdesign_partition(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

#ifndef SIMULA_NOT_USE_METAINFO
/* Function to get information of the model*/
SIMULA_EXPORT_C_EXP void getInformationPartition(char *libraryName, char *componentName, char *partitionName, char *symbolTableFilename, bool& isDebug)
{
	sprintf(libraryName,"%s","TRABAJO");
	sprintf(componentName,"%s","RL10_offdesign");
	sprintf(partitionName,"%s","offdesign_partition");
	sprintf(symbolTableFilename,"%s","TRABAJO.+r+l10_offdesign.offdesign_partition");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


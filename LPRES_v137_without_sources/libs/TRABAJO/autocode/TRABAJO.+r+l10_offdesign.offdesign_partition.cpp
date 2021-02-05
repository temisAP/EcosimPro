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
m_infoComponentDate = "05/02/2021 18:51:54.920000";
m_infoPartitionDate = "05/02/2021 18:51:58.373000";
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
static int elmind13[] = { 2, 3, 4 } ;
static const char * elmstr14[] = { "Yes", "No", NULL } ;
static int elmind14[] = { 1, 2 } ;
n_typ=15;
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
		{elmstr14,2,elmind14}
	} ;
typ= new struct INTEG_enumType[15];
etypecopy(15,typ,tmp_typ);
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
static double tmp_unkRInit[391]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 3300, 0, 
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
		0.1, 1, 1, 1, 1, 1200000, 0.00178349971, 0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 
		0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 0, 0, 1, 1, 1, 0, 0.000677279675, 0, 
		0, 850, 7358000, 0.573907002, 0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 0, 350, 4282000, 0.6508, 
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
//[E-74]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[59]) == 2 ) 
{
res[1] = evalNormResidueInternal(1,dyn[2],_div( _div( unkR[320] * LPRES__FGAMMA(&unkR[59]) * unkR[273] , _sqrt(unkR[272] * LPRES__R(&unkR[59]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[59]) - 1) * _pow( unkR[323] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[59]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[59]) + 1) , (2 * (LPRES__gamma(&unkR[59]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[323],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[1] = evalNormResidueInternal(1,dyn[2],unkR[320] * unkR[322] * _sqrt(2. * LPRES__rho(&unkR[59]) * (unkR[273] - unkR[88]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
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
unkR[321] = _div( _sqrt(unkR[272] * LPRES__R(&unkR[59]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * dyn[2] , (LPRES__FGAMMA(&unkR[59]) * unkR[273]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
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
//[E-120]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
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
static const unsigned int s_gst_size_TRABAJO__RL10_offdesign_offdesign_partition = 84592;
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


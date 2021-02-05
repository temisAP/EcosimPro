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
m_infoComponentDate = "05/02/2021 16:30:37.389000";
m_infoPartitionDate = "05/02/2021 16:38:39.152000";
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
		0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 0, 0, 0, 1, 1, 0, 0.000677279675, 0, 
		0, 350, 7358000, 0.573907002, 0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 0, 350, 4282000, 0.6508, 
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


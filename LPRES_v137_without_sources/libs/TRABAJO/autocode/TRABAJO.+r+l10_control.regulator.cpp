//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef TRABAJO__RL10_control_regulator_CPP
#define TRABAJO__RL10_control_regulator_CPP

#include "TRABAJO.+r+l10_control.regulator.h"

TRABAJO__RL10_control_regulator* TRABAJO__RL10_control_regulator::s_current= NULL;

TRABAJO__RL10_control_regulator::TRABAJO__RL10_control_regulator(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoComponentName = "RL10_control";
m_infoPartitionName = "regulator";
m_infoModelName = "TRABAJO__RL10_control_regulator";
m_infoModelFileName = "TRABAJO.+r+l10_control.regulator";
m_infoModelFileNameExtra = "+r+l10_control.regulator";
m_perfFlag = false;
m_infoComponentDate = "06/02/2021 00:41:31.721000";
m_infoPartitionDate = "06/02/2021 01:19:04.137000";
m_programVersion= "EcosimPro V6.0.0";
m_libsVersion= "LPRES V1.3.7 MATH V3.2.7 TRABAJO V0.0 ";

m_solveInternalBox= new int[4]; 
int nbx;
for (nbx=0; nbx < 4 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[3];
int ib;
for (ib=0; ib < 3 ; ib++)
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
static double tmp_dynInit[9]={ 1, 1, 10, 1, 1, 1, 1, 100, 100 } ;
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

n_unkR=397;
unkR= new double[397] ;
static double tmp_unkRInit[397]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 3300, 0, 
		2.7, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 
		1, 0, 0, 3275010, 5000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 1.475994, 0, 0, 0, 0, 500, 0.00100103471, 0.00813274823, 100000, 0, 1, 0, 16.09, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 0, 
		0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 
		1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 
		1500, 0.1, 1, 1, 1, 1, 1200000, 0.00178349971, 0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 
		0, 0.000580606872, 0, 0.5, 0, 0, 0, 16.3526821, 1, 0, 0, 1, 1, 1, 0, 0.000677279675, 
		0, 0, 850, 7358000, 0.573907002, 0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 0, 350, 4282000, 
		0.6508, 0, 0.03027, 0, 0.05393, 0.194281146, 0, 3219188.99, 1500, 0.1, 1, 1200000, 100000, 0, 1500, 0.1, 
		1200000, 1, 1, 1, 1, 0, 0, 0, 0, 0.000513113762, 0.1, 0, 0, 10000, 0, 0, 
		5, 0, 45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 0.715229315, 38172.635, 0 } ;
unkRInit= new double[397];
dcopy(397,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=24;
static int tmp_cteIInit[24]={ 1, 4, 1, 1, 1, 1, 8, 1, 1, 6, 6, 6, 6, 4, 4, 4, 
		4, 6, 1, 2, 2, 1, 4, 1 } ;
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
void TRABAJO__RL10_control_regulator::initInternalModels()
{
}

void TRABAJO__RL10_control_regulator::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int TRABAJO__RL10_control_regulator::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi3;
	int _vi4;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[7]) ) {
	_vi4 = setofElem(&typ[7], _vi3) ;
	if( fluid[_vi4-1] != 0 ) {
	fluid_name = _vi4 ;
	}
	_vi3 += 1 ;
	}
	if( fluid[26] != 0 ) {
	fluid_name = 27 ;
	}
	return fluid_name ;
}


int TRABAJO__RL10_control_regulator::LPRES__State(double fluid[])
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


double TRABAJO__RL10_control_regulator::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi5;
	int _vi6;
	double _vr1;
	_vr1 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[7]) ) {
	_vi6 = setofElem(&typ[7], _vi5) ;
	_vr1 += Chem_cp[_vi5-1] * fluid[_vi6-1] ;
	_vi5 += 1 ;
	}
	return _vr1 + fluid[28] * fluid[26] ;
}


double TRABAJO__RL10_control_regulator::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi7;
	int _vi8;
	double _vr2;
	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[7]) ) {
	_vi8 = setofElem(&typ[7], _vi7) ;
	_vr2 += _div( fluid[_vi8-1] , Chem_M[_vi7-1],"Chem_M[_vi7]") ;
	_vi7 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double TRABAJO__RL10_control_regulator::LPRES__R(double fluid[])
{
	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",262,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double TRABAJO__RL10_control_regulator::LPRES__cv(double fluid[])
{
	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double TRABAJO__RL10_control_regulator::LPRES__gamma(double fluid[])
{
	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double TRABAJO__RL10_control_regulator::MATH__min(const double & x,const double & y)
{
	if( x < y ) {
	return x ;
	}
	return y ;
}


double TRABAJO__RL10_control_regulator::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi10;
	int _vi9;
	double _vr3;
	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",346,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr3 = 0. ;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[6]) ) {
	_vi10 = setofElem(&typ[6], _vi9) ;
	_vr3 += Chem_rho[_vi9-1] * fluid[_vi10-1] ;
	_vi9 += 1 ;
	}
	return _vr3 ;
}


void TRABAJO__RL10_control_regulator::LPRES__fluid_func(double f[],double fluid[])
{
	int _vi11;
	int _vi12;
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[1]) ) {
	_vi12 = setofElem(&typ[1], _vi11) ;
	if( _vi12 == 27 ) {
	fluid[_vi11-1] = 0. ;
		}
	else if( _vi12 == 28) {
	fluid[_vi11-1] = 0. ;

		}
	else if( _vi12 == 29) {
	fluid[_vi11-1] = 0. ;

	}
	else {
	fluid[_vi11-1] = _div( f[_vi11-1] , (1. - f[26]),"1 - f[Comb_prod]") ;
	}
	_vi11 += 1 ;
	}
}


double TRABAJO__RL10_control_regulator::MATH__max(const double & x,const double & y)
{
	if( x > y ) {
	return x ;
	}
	return y ;
}


void TRABAJO__RL10_control_regulator::LPRES__fluidP(const int & Combustion,double fluid_O[],double fluid_F[],const double & phi,const double & W_O,const double & W_F,const double & W_F_st,const double & M_P,const double & cp_P,double fluid_P[])
{
	int _vi13;
	int _vi14;
	_vi13 = 1 ;
	while ( _vi13 <= setofSize(&typ[1]) ) {
	_vi14 = setofElem(&typ[1], _vi13) ;
	if( Combustion ) {
	if( _vi14 == 27 ) {
	fluid_P[_vi13-1] = _div( (fluid_O[_vi13-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi13-1] * MATH__max(phi - 1., 0.) * W_F_st + (1. - MATH__max(1. - phi, 0.)) * (W_O + W_F_st)) , (W_O + W_F),"W_O + W_F") ;
		}
	else if( _vi14 == 28) {
	fluid_P[_vi13-1] = M_P ;

		}
	else if( _vi14 == 29) {
	fluid_P[_vi13-1] = cp_P ;

	}
	else {
	fluid_P[_vi13-1] = _div( (fluid_O[_vi13-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi13-1] * MATH__max(phi - 1., 0.) * W_F_st) , (W_O + W_F),"W_O + W_F") ;
	}
	}
	else {
	if( _vi14 == 27 ) {
	fluid_P[_vi13-1] = 0. ;
		}
	else if( _vi14 == 28) {
	fluid_P[_vi13-1] = 0. ;

		}
	else if( _vi14 == 29) {
	fluid_P[_vi13-1] = 0. ;

	}
	else {
	fluid_P[_vi13-1] = _div( (fluid_O[_vi13-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi13-1] * MATH__max(phi - 1., 0.) * W_F_st) , (W_O + W_F),"W_O + W_F") ;
	}
	}
	_vi13 += 1 ;
	}
}


void TRABAJO__RL10_control_regulator::LPRES__fluidG(double fluid_P[],const double & W_O,const double & W_IO,const double & W_F,const double & W_IF,const double & W,double fluid[])
{
	int _vi15;
	int _vi16;
	_vi15 = 1 ;
	while ( _vi15 <= setofSize(&typ[1]) ) {
	_vi16 = setofElem(&typ[1], _vi15) ;
	if( _vi16 == 27 ) {
	fluid[_vi15-1] = _div( (fluid_P[26] * (W_O + W_F) + W_IO + W_IF) , W,"W") ;
		}
	else if( _vi16 == 28) {
	fluid[_vi15-1] = fluid_P[27] ;

		}
	else if( _vi16 == 29) {
	fluid[_vi15-1] = fluid_P[28] ;

	}
	else {
	fluid[_vi15-1] = _div( fluid_P[_vi15-1] * (W_O + W_F) , W,"W") ;
	}
	_vi15 += 1 ;
	}
}


double TRABAJO__RL10_control_regulator::LPRES__FGAMMA(double fluid[])
{
	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int TRABAJO__RL10_control_regulator::LPRES__Vaporisation(double fluid[])
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


double TRABAJO__RL10_control_regulator::LPRES__cond(double fluid[])
{
	// Local variables:
	double Chem_cond[16] = { 0.149,0.131,0.353,0.294,0.1,0.137,0.15,0.117,0.488,0.035,0.246,0.11,0.17,0.12,0.607,0.145 };
	int _vi17;
	int _vi18;
	double _vr4;
	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",366,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr4 = 0. ;
	_vi17 = 1 ;
	while ( _vi17 <= setofSize(&typ[6]) ) {
	_vi18 = setofElem(&typ[6], _vi17) ;
	_vr4 += Chem_cond[_vi17-1] * fluid[_vi18-1] ;
	_vi17 += 1 ;
	}
	return _vr4 ;
}


double TRABAJO__RL10_control_regulator::LPRES__visc(double fluid[])
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


double TRABAJO__RL10_control_regulator::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double TRABAJO__RL10_control_regulator::LPRES__Geopotential_Altitude(const double & z)
{
	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double TRABAJO__RL10_control_regulator::LPRES__ISA_Pressure(const double & z)
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

void TRABAJO__RL10_control_regulator::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void TRABAJO__RL10_control_regulator::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[60]) ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[239]) ;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",161,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[178]) ;
	unkI[0] = 1 ;
	unkR[213] = 1. ;
	if( 1 ) {
	unkR[57] = unkR[212] ;
	}
	dyn[5] = unkR[14] ;
	dyn[1] = unkR[16] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[239]), &unkR[27]) ;
	unkR[229] = unkR[230] ;
  // init(Turbine.Turbine,0)
	dyn[6] = unkR[378] ;
	unkR[380] = unkR[381] ;
  // init(Pump_O.Pump,0)
	unkR[349] = unkR[350] ;
  // init(Pump_F.Pump,0)
	dyn[4] = unkR[338] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void TRABAJO__RL10_control_regulator::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-17]  PRIVATE_EQT
unkR[26] = _div( dyn[1] , (1. - unkR[53]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-18]  PRIVATE_EQT
unkR[341] = _div( unkR[26] , (unkR[335] * dyn[4] * LPRES__rho(&unkR[239])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-19]  PRIVATE_EQT
unkR[343] = 1. - _div( (1. - unkR[344]) , unkR[342],"Pump_F.phi_d") * unkR[341] ;
//[E-20]  PRIVATE_EQT
unkR[346] = unkR[343] * _pow( dyn[4] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-21]  PRIVATE_EQT
unkR[268] = unkR[346] * unkR[340] * LPRES__rho(&unkR[239]) + unkR[294] ;
//[E-22]  PRIVATE_EQT
unkR[238] = _div( _div( (unkR[268] - unkR[294]) , LPRES__rho(&unkR[239]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[340],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[239]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[292] ;
//[E-23]  PRIVATE_EQT
unkR[207] = unkR[26] * LPRES__cp(&unkR[27]) * (dyn[3] - unkR[238]) ;
//[E-24]  PRIVATE_EQT
unkR[337] = -(unkR[346] * unkR[26]) ;
//[E-25]  PRIVATE_EQT
unkR[271] = _div( _div( unkR[26] , (unkR[231] * unkR[232] * LPRES__rho(&unkR[239])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-26]  PRIVATE_EQT
unkR[228] = _div( LPRES__rho(&unkR[239]) * unkR[271] * unkR[224] , LPRES__visc(&unkR[239]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-27]  PRIVATE_EQT
unkR[226] = 0.027 * _pow( unkR[228] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[227] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-28]  PRIVATE_EQT
unkR[236] = _div( unkR[226] * LPRES__cond(&unkR[239]) , unkR[224],"CoolingJacket.D_hy") ;
//[E-29]  PRIVATE_EQT
unkR[229] = _div( _div( unkR[207] , unkR[222],"CoolingJacket.A_wet_cooling") , unkR[236],"CoolingJacket.h_l") + unkR[238] ;
//[E-30]  PRIVATE_EQT
unkR[208] = _div( _div( unkR[207] , unkR[5],"CombCha.A_wet") , (_div( unkR[237] , unkR[270],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[229] ;
//[E-31]  PRIVATE_EQT
unkR[234] = LPRES__hdc_fric(unkR[223], unkR[269], unkR[228]) ;
//[E-32]  PRIVATE_EQT
unkR[235] = unkR[268] - _div( unkR[234] * unkR[225] , unkR[223],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[239]) * _pow( unkR[271] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-33]  PRIVATE_EQT
unkR[370] = unkR[235] * unkR[369] ;
//[E-34]  PRIVATE_EQT
unkR[307] = _div( _sqrt(LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[6], 1.) * cos(unkR[386] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( MATH__min(dyn[6], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[27]) + 1.)/2. , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) * unkR[370] * unkR[377] , _sqrt(dyn[3] * LPRES__R(&unkR[27]),"Junction.f_in2.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(Junction.f_in2.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") ;
//[E-35]  PRIVATE_EQT
unkR[332] = unkR[26] - unkR[307] ;
//[E-36]  PRIVATE_EQT
unkR[18] = unkR[307] + unkR[332] - dyn[1] ;
//[E-37]  PRIVATE_EQT
unkR[362] = unkR[235] * unkR[369] ;
//[E-38]  PRIVATE_EQT
unkR[333] = unkR[362] - unkR[359] ;
//[E-39]  PRIVATE_EQT
unkR[286] = unkR[333] * unkR[331] ;
//[E-40]  PRIVATE_EQT
unkR[309] = _div( unkR[286] , unkR[331],"Junction.TPL") ;
//[E-41]  PRIVATE_EQT
unkR[308] = unkR[309] + unkR[303] ;
//[E-42]  PRIVATE_EQT
unkR[385] = 1. - unkR[388] * (1. - _pow( (_div( unkR[308] , unkR[370],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-43]  PRIVATE_EQT
unkR[306] = unkR[385] * dyn[3] ;
//[E-44]  PRIVATE_EQT
unkR[379] = unkR[307] * LPRES__cp(&unkR[27]) * (dyn[3] - unkR[306]) ;
//[E-45]  PRIVATE_EQT
unkR[396] = _div( unkR[379] , unkR[307],"HeadLoss_Turb.f_in.W") ;
//[E-46]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[281] = unkR[337] + unkR[379] ;
//[E-47]  PRIVATE_EQT
 if(m_branchZone[0]==0)
	unkR[279] = -(_div( unkR[281] , unkR[277],"Gearbox.eta")) ;
else unkR[279] = -(unkR[281] * unkR[277]) ;
//[E-48]  PRIVATE_EQT
unkR[285] = _div( (-(_div( unkR[307] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) * -unkR[306]) - _div( unkR[332] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) * -dyn[3]) , (_div( unkR[307] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) + _div( unkR[332] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27])),"HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + Junction.f_in2.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-49]  PRIVATE_EQT
unkR[287] = unkR[286] - unkR[282] ;
//[E-50]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[319] = _div( unkR[287] , unkR[316],"Injector_F.PR_sl") ;
}
else 
{
unkR[319] = 0. ;
}
//[E-51]  PRIVATE_EQT
unkR[20] = unkR[7] * dyn[1] ;
//[E-52]  PRIVATE_EQT
unkR[59] = _div( unkR[20] , (1. - unkR[86]),"1 - CombCha.f_O.fluid[Comb_prod]") ;
//[E-53]  PRIVATE_EQT
unkR[358] = _div( -unkR[279] , unkR[59],"CombCha.f_O.W") ;
//[E-54]  PRIVATE_EQT
unkR[274] = unkR[358] * unkR[352] * LPRES__rho(&unkR[60]) + unkR[301] ;
//[E-55]  PRIVATE_EQT
unkR[273] = _div( _div( (unkR[274] - unkR[301]) , LPRES__rho(&unkR[60]),"LPRES.rho(CombCha.f_O.fluid)") * (_div( 1. , unkR[352],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[60]),"LPRES.cp(CombCha.f_O.fluid)") + unkR[299] ;
//[E-56]  PRIVATE_EQT
unkR[19] = unkR[59] - unkR[20] ;
//[E-57]  PRIVATE_EQT
unkR[177] = unkR[19] + unkR[20] + unkR[307] + unkR[332] ;
//[E-58]  PRIVATE_EQT
unkR[23] = _div( (unkR[20] * LPRES__cp(&unkR[119]) + dyn[1] * LPRES__cp(&unkR[90])) , (unkR[20] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
//[E-59]  PRIVATE_EQT
unkR[17] = _div( dyn[1] , unkR[213],"CombCha.phi") ;
//[E-60]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_P 
LPRES__fluidP(unkI[0], &unkR[119], &unkR[90], unkR[213], unkR[20], dyn[1], unkR[17], unkR[6], unkR[22], &unkR[148]);
//[E-61]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[148], unkR[20], unkR[19], dyn[1], unkR[18], unkR[177], &unkR[178]);
//[E-62]  PRIVATE_EQT
unkR[57] = _div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-63]  PRIVATE_EQT
unkR[315] = _div( unkR[287] , unkR[57],"CombCha.f_O.p_c") ;
//[E-64]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[314] = _sqrt(_div( 2. * (_pow( unkR[315] , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[314] = 1. ;
else unkR[314] = 0. ;
//[E-65]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[25] = _div( unkR[285] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( unkR[314] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[25] = unkR[285] ;
}
//[E-66]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[56] = MATH__max(unkR[57], unkR[319]) ;
}
else 
{
unkR[56] = unkR[57] ;
}
//[E-67]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[27]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[26],_div( _div( unkR[311] * LPRES__FGAMMA(&unkR[27]) * unkR[287] , _sqrt(unkR[285] * LPRES__R(&unkR[27]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[27]) - 1) * _pow( unkR[314] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[27]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[27]) + 1) , (2 * (LPRES__gamma(&unkR[27]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[314],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[26],unkR[311] * unkR[313] * _sqrt(2. * LPRES__rho(&unkR[27]) * (unkR[287] - unkR[56]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-68]  PRIVATE_EQT
unkR[328] = dyn[2] * unkR[57] ;
//[E-69]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[329] = _div( unkR[328] , unkR[325],"Injector_O.PR_sl") ;
}
else 
{
unkR[329] = 0. ;
}
//[E-70]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[89] = MATH__max(unkR[57], unkR[329]) ;
}
else 
{
unkR[89] = unkR[57] ;
}
//[E-71]  PRIVATE_EQT
unkR[21] = _div( _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-72]  PRIVATE_EQT
unkR[9] = _div( 4. * LPRES__gamma(&unkR[178]) , (9. * LPRES__gamma(&unkR[178]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-73]  PRIVATE_EQT
unkR[12] = dyn[5] * _div( (1. + _pow( unkR[9] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-74]  PRIVATE_EQT
unkR[214] = 1.184e-07 * _pow( LPRES__M(&unkR[178]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-75]  PRIVATE_EQT
unkR[209] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[214] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[178]) , _pow( unkR[9] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[57] , unkR[21],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-76]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[1] = evalNormResidueInternal(1,unkR[207],unkR[209] * (unkR[12] - unkR[208]) * unkR[5]);
//[E-77]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[2] = evalNormResidueInternal(2,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[178]) , _sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[178]) + 1) , (2 * (LPRES__gamma(&unkR[178]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-78]  PRIVATE_EQT
 if(m_branchZone[3]==0)
	unkR[324] = _sqrt(_div( 2. * (_pow( dyn[2] , (_div( (LPRES__gamma(&unkR[60]) - 1.) , LPRES__gamma(&unkR[60]),"LPRES.gamma(CombCha.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha.f_O.fluid) - 1) / LPRES.gamma(CombCha.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(CombCha.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha.f_O.fluid) - 1) / LPRES.gamma(CombCha.f_O.fluid)) - 1) / (LPRES.gamma(CombCha.f_O.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[324] = 1. ;
else unkR[324] = 0. ;
//[E-79]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[58] = _div( unkR[273] , (1. + (LPRES__gamma(&unkR[60]) - 1.)/2. * _pow( unkR[324] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[58] = unkR[273] ;
}
//[E-80]  PRIVATE_EQT
unkR[15] = _div( (LPRES__cp(&unkR[119]) * unkR[58] + _div( unkR[213] , unkR[8],"CombCha.OF_st") * LPRES__cp(&unkR[90]) * unkR[25]) , ((1. + _div( unkR[213] , unkR[8],"CombCha.OF_st")) * unkR[23]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-81]  PRIVATE_EQT
unkR[13] = _div( (_div( unkR[24] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[23] * (unkR[15] - 298.15)) , LPRES__cp(&unkR[148]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-82]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * CombCha.f_O.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[3] = evalNormResidueInternal(3,_div( (unkR[20] + dyn[1]) , unkR[177],"ThrustMonitor.g.W") * LPRES__cp(&unkR[148]) * (dyn[5] - unkR[13]) + _div( unkR[19] , unkR[177],"ThrustMonitor.g.W") * unkR[88] * (dyn[5] - unkR[58]) + _div( unkR[18] , unkR[177],"ThrustMonitor.g.W") * unkR[55] * (dyn[5] - unkR[25]),0);
//[E-83]  CombCha.f_O.W =  IF (LPRES.State(CombCha.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha.f_O.fluid) * Injector_O.f_in.pt / sqrt(Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha.f_O.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha.f_O.fluid) * (Injector_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[60]) == 2 ) 
{
res[4] = evalNormResidueInternal(4,unkR[59],_div( _div( unkR[321] * LPRES__FGAMMA(&unkR[60]) * unkR[328] , _sqrt(unkR[273] * LPRES__R(&unkR[60]),"Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid)"),"sqrt(Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[60]) - 1) * _pow( unkR[324] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[60]) + 1),"LPRES.gamma(CombCha.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[60]) + 1) , (2 * (LPRES__gamma(&unkR[60]) - 1)),"2 * (LPRES.gamma(CombCha.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha.f_O.fluid) + 1))**((LPRES.gamma(CombCha.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha.f_O.fluid) - 1)))" ) , unkR[324],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha.f_O.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[4] = evalNormResidueInternal(4,unkR[59],unkR[321] * unkR[323] * _sqrt(2. * LPRES__rho(&unkR[60]) * (unkR[328] - unkR[89]),"2 * LPRES.rho(CombCha.f_O.fluid) * (Injector_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-84]  PRIVATE_EQT
unkR[382] = dyn[6] * _sqrt(_div( LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * dyn[3] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( dyn[6] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-85]  PRIVATE_EQT
unkR[383] = unkR[382] * cos(unkR[386] * 3.14159265358979/180.) ;
//[E-86]  PRIVATE_EQT
unkR[280] = _div( dyn[4] , unkR[345],"Pump_F.r_m") ;
//[E-87]  PRIVATE_EQT
unkR[380] = unkR[280] * unkR[394] ;
//[E-88]  PRIVATE_EQT
unkR[392] = _div( unkR[396] , _pow( unkR[380] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-89]  PRIVATE_EQT
unkR[389] = _div( (unkR[392] + 1.) , (tan(unkR[386] * 3.14159265358979/180.) - tan(unkR[387] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-90]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[5] = evalNormResidueInternal(5,unkR[389],_div( unkR[383] , unkR[380],"Turbine.U"));
//[E-91]  PRIVATE_EQT
unkR[278] = _div( unkR[280] , unkR[276],"Gearbox.GR") ;
//[E-92]  PRIVATE_EQT
unkR[349] = unkR[278] * unkR[357] ;
//[E-93]  PRIVATE_EQT
unkR[355] = _div( unkR[358] , _pow( unkR[349] , 2.,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2") ;
//[E-94]  PRIVATE_EQT
unkR[353] = _div( (1. - unkR[355]) , (_div( (1. - unkR[356]) , unkR[354],"Pump_O.phi_d")),"(1 - Pump_O.psi_d) / Pump_O.phi_d") ;
//[E-95]  Pump_O.phi = CombCha.f_O.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(CombCha.f_O.fluid))
res[6] = evalNormResidueInternal(6,unkR[353],_div( unkR[59] , (unkR[347] * unkR[349] * LPRES__rho(&unkR[60])),"Pump_O.A_in * Pump_O.U * LPRES.rho(CombCha.f_O.fluid)"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void TRABAJO__RL10_control_regulator::fcn1(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_control_regulator& m= *TRABAJO__RL10_control_regulator::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	dcopy(*n,&m.res[0],residues);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void TRABAJO__RL10_control_regulator::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[7];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_control_regulator::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void TRABAJO__RL10_control_regulator::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-99]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[178]) , (_pow( (_div( dyn[7] , unkR[57],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[178]) * (1. - _pow( (_div( dyn[7] , unkR[57],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[178]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void TRABAJO__RL10_control_regulator::fcn2(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_control_regulator& m= *TRABAJO__RL10_control_regulator::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[7],x);
	dcopy(*n,&m.res[7],residues);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void TRABAJO__RL10_control_regulator::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_control_regulator::fcn2, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void TRABAJO__RL10_control_regulator::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-104]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[57],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[178]) + 1)/2 , (LPRES__gamma(&unkR[178]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void TRABAJO__RL10_control_regulator::fcn3(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_control_regulator& m= *TRABAJO__RL10_control_regulator::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	dcopy(*n,&m.res[8],residues);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void TRABAJO__RL10_control_regulator::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_control_regulator::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}

int TRABAJO__RL10_control_regulator::sparseGetEquiv( int nvars,int v[] )
{
	return -1;
}

/* Main residues function for this model */
void TRABAJO__RL10_control_regulator::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  PRIVATE_EQT %%% (OUT VAR)CombCha.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[60]);
//[E-2]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[239]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_O 
LPRES__fluid_func(&unkR[60], &unkR[119]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[239]), &unkR[27]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_F 
LPRES__fluid_func(&unkR[27], &unkR[90]);
//[E-6]  PRIVATE_EQT
unkR[213] = _div( unkR[8] , unkR[7],"CombCha.OF") ;
//[E-7]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[11] = unkR[10] ;
else unkR[11] = 0. ;
//[E-8]  PRIVATE_EQT
unkR[301] = unkR[300] - unkR[296] ;
//[E-9]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[325] = _pow( ((LPRES__gamma(&unkR[60]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[60]) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(CombCha.f_O.fluid) - 1")),"((LPRES.gamma(CombCha.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha.f_O.fluid) / (LPRES.gamma(CombCha.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[325] = 0. ;
}
//[E-10]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[316] = _pow( ((LPRES__gamma(&unkR[27]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[27]) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[316] = 0. ;
}
//[E-11]  PRIVATE_EQT
unkR[223] = _div( 1.3 * _pow( (unkR[231] * unkR[232]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[231] + unkR[232]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-12]  PRIVATE_EQT
unkR[224] = _div( 2. * unkR[231] * unkR[232] , (unkR[231] + unkR[232]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-13]  PRIVATE_EQT
unkR[294] = unkR[293] - unkR[289] ;
//[E-14]  PRIVATE_EQT
unkR[3] = unkR[4] * unkR[1] ;
//[E-15]  PRIVATE_EQT
unkR[227] = _div( LPRES__visc(&unkR[239]) * LPRES__cp(&unkR[239]) , LPRES__cond(&unkR[239]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-16]  PRIVATE_EQT
unkR[222] = unkI[2] * 2. * (unkR[231] + unkR[232]) * unkR[225] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,7,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-96]  PRIVATE_EQT
unkR[348] = _div( (unkR[274] - unkR[301]) , (9.80665 * LPRES__rho(&unkR[60])),"9.80665 * LPRES.rho(CombCha.f_O.fluid)") ;
//[E-97]  PRIVATE_EQT
unkR[336] = _div( (unkR[268] - unkR[294]) , (9.80665 * LPRES__rho(&unkR[239])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-98]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[4] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-100]  PRIVATE_EQT
unkR[275] = cabs(unkR[59]) ;
//[E-101]  PRIVATE_EQT
unkR[272] = cabs(unkR[26]) ;
//[E-102]  PRIVATE_EQT
unkR[219] = unkR[272] + unkR[275] ;
//[E-103]  PRIVATE_EQT
unkR[210] = unkR[21] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-105]  PRIVATE_EQT
unkR[373] = _div( dyn[5] , (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-106]  PRIVATE_EQT
unkR[376] = dyn[8] * _sqrt(LPRES__gamma(&unkR[178]) * LPRES__R(&unkR[178]) * unkR[373],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-107]  PRIVATE_EQT
unkR[375] = _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-108]  PRIVATE_EQT
unkR[374] = LPRES__ISA_Pressure(unkR[334]) ;
//[E-109]  PRIVATE_EQT
unkR[218] = unkR[177] * unkR[376] + unkR[2] * (unkR[375] - unkR[374]) ;
//[E-110]  PRIVATE_EQT
unkR[216] = _div( unkR[218] , unkR[219],"ControlPanel.W_tot") ;
//[E-111]  PRIVATE_EQT
unkR[215] = _div( unkR[216] , unkR[21],"CombCha.c_star") ;
//[E-112]  PRIVATE_EQT
unkR[217] = unkR[216]/9.80665 ;
//[E-113]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[312] = _div( _sqrt(unkR[285] * LPRES__R(&unkR[27]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[26] , (LPRES__FGAMMA(&unkR[27]) * unkR[287]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[312] = 0. ;
}
//[E-114]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[320] = unkR[314] * _sqrt(LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * unkR[25],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[320] = _div( unkR[26] , (LPRES__rho(&unkR[27]) * unkR[311] * unkR[313]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-115]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[317] = 0. ;
}
else 
{
unkR[317] = _div( LPRES__rho(&unkR[27]) * unkR[320] * unkR[313] * _sqrt(4. * unkR[311]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[27]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-116]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[322] = _div( _sqrt(unkR[273] * LPRES__R(&unkR[60]),"Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid)") * unkR[59] , (LPRES__FGAMMA(&unkR[60]) * unkR[328]),"LPRES.FGAMMA(CombCha.f_O.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[322] = 0. ;
}
//[E-117]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[330] = unkR[324] * _sqrt(LPRES__gamma(&unkR[60]) * LPRES__R(&unkR[60]) * unkR[58],"LPRES.gamma(CombCha.f_O.fluid) * LPRES.R(CombCha.f_O.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[330] = _div( unkR[59] , (LPRES__rho(&unkR[60]) * unkR[321] * unkR[323]),"LPRES.rho(CombCha.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-118]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[326] = 0. ;
}
else 
{
unkR[326] = _div( LPRES__rho(&unkR[60]) * unkR[330] * unkR[323] * _sqrt(4. * unkR[321]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[60]),"LPRES.visc(CombCha.f_O.fluid)") ;
}
//[E-119]  PRIVATE_EQT
unkR[220] = unkR[218] ;
//[E-120]  PRIVATE_EQT
unkR[365] = unkR[274] - unkR[328] ;
//[E-121]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[221] = unkR[272] + unkR[275] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void TRABAJO__RL10_control_regulator::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[27])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(1 == LPRES__State(&unkR[60])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(CombCha.f_O.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[239])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[239])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",59,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[178])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[375] , unkR[374],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",895,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void TRABAJO__RL10_control_regulator::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[1]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[2]= unkR[279];
    ev[3]= unkI[0] - 1;
    ev[4]= LPRES__State(&unkR[27]) - 2;
    ev[5]= unkR[315] - unkR[316];
    ev[6]= LPRES__State(&unkR[27]) - 2;
    ev[7]= unkR[315] - unkR[316];
    ev[8]= LPRES__State(&unkR[60]) - 2;
    ev[9]= dyn[2] - unkR[325];
    ev[10]= LPRES__State(&unkR[60]) - 2;
    ev[11]= dyn[2] - unkR[325];
}

/* Evaluation of when conditions*/
void TRABAJO__RL10_control_regulator::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ;
     w[1] = cont[1] ;
}

/* Generation WHEN conditions*/
void TRABAJO__RL10_control_regulator::executeWhen(double *_time,  int index )
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
void TRABAJO__RL10_control_regulator::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Gearbox.m_out.Power =  ZONE (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta OTHERS -Pump_O.m.Power / Gearbox.eta
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // CombCha.Q_comb_effective =  ZONE (CombCha.Combustion) CombCha.Q_comb OTHERS 0
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha.f_O.fluid) - 1) / LPRES.gamma(CombCha.f_O.fluid)) - 1) / (LPRES.gamma(CombCha.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* TRABAJO__RL10_control_regulator::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
	static const char* zoneTxtTable[] = { "Pump_O.m.Power > 0","OTHERS",
	"CombCha.Combustion","OTHERS",
	"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(CombCha.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(CombCha.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"Private-info"},{ WHEN,EQ_OP,0,1,"Private-info"},{ ZONE,GT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"CombCha.Combustion"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"}
,{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,GT_EQ_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"}
,{ ZONE,GT_EQ_OP,0,0,"Private-info"}};
	return evs;
};

/* Initialisation of delays */
void TRABAJO__RL10_control_regulator::initDelays()
{
}


bool TRABAJO__RL10_control_regulator::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_TRABAJO__RL10_control_regulator = 87352;
static const unsigned int s_gst_chunkSize_TRABAJO__RL10_control_regulator = 2000;
static const char *s_gst_chunkedStr_TRABAJO__RL10_control_regulator[] = 
{
"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"
};
*size = s_gst_size_TRABAJO__RL10_control_regulator;
*chunkSize = s_gst_chunkSize_TRABAJO__RL10_control_regulator;
*chunkedStr = s_gst_chunkedStr_TRABAJO__RL10_control_regulator;
return true;
}



bool TRABAJO__RL10_control_regulator::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_TRABAJO__RL10_control_regulator = 460;
static const unsigned int s_gsi_chunkSize_TRABAJO__RL10_control_regulator = 2000;
static const char *s_gsi_chunkedStr_TRABAJO__RL10_control_regulator[] = 
{
"CQAAAEEAAAAAAAAABwAAAAcAAAAHAAAABwAAAAcAAAAHAAAABwAAAAgAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_TRABAJO__RL10_control_regulator;
*chunkSize = s_gsi_chunkSize_TRABAJO__RL10_control_regulator;
*chunkedStr = s_gsi_chunkedStr_TRABAJO__RL10_control_regulator;
return true;
}



bool TRABAJO__RL10_control_regulator::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP void* create_TRABAJO__RL10_control_regulator(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ep = 0;
	try
	{
		INTEG_simula *tmp = new TRABAJO__RL10_control_regulator(name,dirInstall);
		ep = (void *)tmp->createThinModel(t,(void(*)())create_TRABAJO__RL10_control_regulator);
	}
	catch(...)
	{
	}
	return ep;
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_TRABAJO__RL10_control_regulator(INTEG_simula *obj,const char *name=NULL)
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
	sprintf(componentName,"%s","RL10_control");
	sprintf(partitionName,"%s","regulator");
	sprintf(symbolTableFilename,"%s","TRABAJO.+r+l10_control.regulator");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


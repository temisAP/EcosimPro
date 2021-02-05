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
m_infoPartitionDate = "06/02/2021 00:47:43.960000";
m_programVersion= "EcosimPro V6.0.0";
m_libsVersion= "LPRES V1.3.7 MATH V3.2.7 TRABAJO V0.0 ";

m_solveInternalBox= new int[4]; 
int nbx;
for (nbx=0; nbx < 4 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[4];
int ib;
for (ib=0; ib < 4 ; ib++)
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
		0, 1.475994, 0, 0, 0, 0, 500, 0.00100103471, 0.00813274823, 100000, 0, 1, 1, 0, 16.09, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 
		0, 0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 
		1, 1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 
		124105.6, 1500, 0.1, 1, 1, 1, 1, 1200000, 0.00178349971, 0, 0.5, 0, 10, 0, 0, 2.70069069, 
		0, 0, 0.000580606872, 0, 0.5, 0, 0, 0, 16.3526821, 1, 0, 0, 1, 1, 0, 0.000677279675, 
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
	LPRES__Init_fluid(unkI[3], &unkR[240]) ;
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
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[240]), &unkR[27]) ;
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
unkR[341] = _div( unkR[26] , (unkR[335] * dyn[4] * LPRES__rho(&unkR[240])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-19]  PRIVATE_EQT
unkR[343] = 1. - _div( (1. - unkR[344]) , unkR[342],"Pump_F.phi_d") * unkR[341] ;
//[E-20]  PRIVATE_EQT
unkR[346] = unkR[343] * _pow( dyn[4] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-21]  PRIVATE_EQT
unkR[269] = unkR[346] * unkR[340] * LPRES__rho(&unkR[240]) + unkR[295] ;
//[E-22]  PRIVATE_EQT
unkR[239] = _div( _div( (unkR[269] - unkR[295]) , LPRES__rho(&unkR[240]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[340],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[240]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[293] ;
//[E-23]  PRIVATE_EQT
unkR[337] = -(unkR[346] * unkR[26]) ;
//[E-24]  PRIVATE_EQT
unkR[272] = _div( _div( unkR[26] , (unkR[231] * unkR[232] * LPRES__rho(&unkR[240])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-25]  PRIVATE_EQT
unkR[228] = _div( LPRES__rho(&unkR[240]) * unkR[272] * unkR[224] , LPRES__visc(&unkR[240]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-26]  PRIVATE_EQT
unkR[226] = 0.027 * _pow( unkR[228] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[227] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-27]  PRIVATE_EQT
unkR[237] = _div( unkR[226] * LPRES__cond(&unkR[240]) , unkR[224],"CoolingJacket.D_hy") ;
//[E-28]  PRIVATE_EQT
unkR[234] = LPRES__hdc_fric(unkR[223], unkR[270], unkR[228]) ;
//[E-29]  PRIVATE_EQT
unkR[236] = unkR[269] - _div( unkR[234] * unkR[225] , unkR[223],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[240]) * _pow( unkR[272] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-30]  PRIVATE_EQT
unkR[370] = unkR[236] * unkR[369] ;
//[E-31]  PRIVATE_EQT
unkR[362] = unkR[236] * unkR[369] ;
//[E-32]  PRIVATE_EQT
unkR[333] = unkR[362] - unkR[359] ;
//[E-33]  PRIVATE_EQT
unkR[287] = unkR[333] * unkR[332] ;
//[E-34]  PRIVATE_EQT
unkR[310] = _div( unkR[287] , unkR[332],"Junction.TPL") ;
//[E-35]  PRIVATE_EQT
unkR[309] = unkR[310] + unkR[304] ;
//[E-36]  PRIVATE_EQT
unkR[385] = 1. - unkR[388] * (1. - _pow( (_div( unkR[309] , unkR[370],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-37]  PRIVATE_EQT
unkR[288] = unkR[287] - unkR[283] ;
//[E-38]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[320] = _div( unkR[288] , unkR[317],"Injector_F.PR_sl") ;
}
else 
{
unkR[320] = 0. ;
}
//[E-39]  PRIVATE_EQT
unkR[308] = unkR[26] - dyn[3] ;
//[E-40]  PRIVATE_EQT
unkR[235] = _div( _pow( (_div( _sqrt(LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[6], 1.) * cos(unkR[386] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( MATH__min(dyn[6], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[27]) + 1.)/2. , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) * unkR[370] * unkR[377] , unkR[308],"HeadLoss_Turb.f_in.W")) , 2.,"(sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) * Turbine.f_in.pt * Turbine.A_in / HeadLoss_Turb.f_in.W)**(2)" ) , LPRES__R(&unkR[27]),"LPRES.R(HeadLoss_Turb.f_in.fluid)") ;
//[E-41]  PRIVATE_EQT
unkR[307] = unkR[385] * unkR[235] ;
//[E-42]  PRIVATE_EQT
unkR[379] = unkR[308] * LPRES__cp(&unkR[27]) * (unkR[235] - unkR[307]) ;
//[E-43]  PRIVATE_EQT
unkR[396] = _div( unkR[379] , unkR[308],"HeadLoss_Turb.f_in.W") ;
//[E-44]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[282] = unkR[337] + unkR[379] ;
//[E-45]  PRIVATE_EQT
 if(m_branchZone[0]==0)
	unkR[280] = -(_div( unkR[282] , unkR[278],"Gearbox.eta")) ;
else unkR[280] = -(unkR[282] * unkR[278]) ;
//[E-46]  PRIVATE_EQT
unkR[286] = _div( (-(_div( unkR[308] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) * -unkR[307]) - _div( dyn[3] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) * -unkR[235]) , (_div( unkR[308] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27]) + _div( dyn[3] , unkR[26],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[27])),"HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + Junction.f_in2.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-47]  PRIVATE_EQT
unkR[382] = dyn[6] * _sqrt(_div( LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * unkR[235] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( dyn[6] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-48]  PRIVATE_EQT
unkR[383] = unkR[382] * cos(unkR[386] * 3.14159265358979/180.) ;
//[E-49]  PRIVATE_EQT
unkR[207] = unkR[26] * LPRES__cp(&unkR[27]) * (unkR[235] - unkR[239]) ;
//[E-50]  PRIVATE_EQT
unkR[229] = _div( _div( unkR[207] , unkR[222],"CoolingJacket.A_wet_cooling") , unkR[237],"CoolingJacket.h_l") + unkR[239] ;
//[E-51]  PRIVATE_EQT
unkR[208] = _div( _div( unkR[207] , unkR[5],"CombCha.A_wet") , (_div( unkR[238] , unkR[271],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[229] ;
//[E-52]  PRIVATE_EQT
unkR[18] = unkR[308] + dyn[3] - dyn[1] ;
//[E-53]  PRIVATE_EQT
unkR[20] = unkR[7] * dyn[1] ;
//[E-54]  PRIVATE_EQT
unkR[59] = _div( unkR[20] , (1. - unkR[86]),"1 - CombCha.f_O.fluid[Comb_prod]") ;
//[E-55]  PRIVATE_EQT
unkR[358] = _div( -unkR[280] , unkR[59],"CombCha.f_O.W") ;
//[E-56]  PRIVATE_EQT
unkR[275] = unkR[358] * unkR[352] * LPRES__rho(&unkR[60]) + unkR[302] ;
//[E-57]  PRIVATE_EQT
unkR[274] = _div( _div( (unkR[275] - unkR[302]) , LPRES__rho(&unkR[60]),"LPRES.rho(CombCha.f_O.fluid)") * (_div( 1. , unkR[352],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[60]),"LPRES.cp(CombCha.f_O.fluid)") + unkR[300] ;
//[E-58]  PRIVATE_EQT
unkR[19] = unkR[59] - unkR[20] ;
//[E-59]  PRIVATE_EQT
unkR[177] = unkR[19] + unkR[20] + unkR[308] + dyn[3] ;
//[E-60]  PRIVATE_EQT
unkR[23] = _div( (unkR[20] * LPRES__cp(&unkR[119]) + dyn[1] * LPRES__cp(&unkR[90])) , (unkR[20] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
//[E-61]  PRIVATE_EQT
unkR[17] = _div( dyn[1] , unkR[213],"CombCha.phi") ;
//[E-62]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_P 
LPRES__fluidP(unkI[0], &unkR[119], &unkR[90], unkR[213], unkR[20], dyn[1], unkR[17], unkR[6], unkR[22], &unkR[148]);
//[E-63]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[148], unkR[20], unkR[19], dyn[1], unkR[18], unkR[177], &unkR[178]);
//[E-64]  PRIVATE_EQT
unkR[57] = _div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-65]  PRIVATE_EQT
unkR[316] = _div( unkR[288] , unkR[57],"CombCha.f_O.p_c") ;
//[E-66]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[315] = _sqrt(_div( 2. * (_pow( unkR[316] , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[315] = 1. ;
else unkR[315] = 0. ;
//[E-67]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[25] = _div( unkR[286] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( unkR[315] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[25] = unkR[286] ;
}
//[E-68]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[56] = MATH__max(unkR[57], unkR[320]) ;
}
else 
{
unkR[56] = unkR[57] ;
}
//[E-69]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[27]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[26],_div( _div( unkR[312] * LPRES__FGAMMA(&unkR[27]) * unkR[288] , _sqrt(unkR[286] * LPRES__R(&unkR[27]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[27]) - 1) * _pow( unkR[315] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[27]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[27]) + 1) , (2 * (LPRES__gamma(&unkR[27]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[315],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[26],unkR[312] * unkR[314] * _sqrt(2. * LPRES__rho(&unkR[27]) * (unkR[288] - unkR[56]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-70]  PRIVATE_EQT
unkR[329] = dyn[2] * unkR[57] ;
//[E-71]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[330] = _div( unkR[329] , unkR[326],"Injector_O.PR_sl") ;
}
else 
{
unkR[330] = 0. ;
}
//[E-72]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[89] = MATH__max(unkR[57], unkR[330]) ;
}
else 
{
unkR[89] = unkR[57] ;
}
//[E-73]  PRIVATE_EQT
unkR[21] = _div( _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-74]  PRIVATE_EQT
unkR[9] = _div( 4. * LPRES__gamma(&unkR[178]) , (9. * LPRES__gamma(&unkR[178]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-75]  PRIVATE_EQT
unkR[12] = dyn[5] * _div( (1. + _pow( unkR[9] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-76]  PRIVATE_EQT
unkR[214] = 1.184e-07 * _pow( LPRES__M(&unkR[178]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-77]  PRIVATE_EQT
unkR[209] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[214] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[178]) , _pow( unkR[9] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[57] , unkR[21],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-78]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[1] = evalNormResidueInternal(1,unkR[207],unkR[209] * (unkR[12] - unkR[208]) * unkR[5]);
//[E-79]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[2] = evalNormResidueInternal(2,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[178]) , _sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[178]) + 1) , (2 * (LPRES__gamma(&unkR[178]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-80]  PRIVATE_EQT
 if(m_branchZone[3]==0)
	unkR[325] = _sqrt(_div( 2. * (_pow( dyn[2] , (_div( (LPRES__gamma(&unkR[60]) - 1.) , LPRES__gamma(&unkR[60]),"LPRES.gamma(CombCha.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha.f_O.fluid) - 1) / LPRES.gamma(CombCha.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(CombCha.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha.f_O.fluid) - 1) / LPRES.gamma(CombCha.f_O.fluid)) - 1) / (LPRES.gamma(CombCha.f_O.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[325] = 1. ;
else unkR[325] = 0. ;
//[E-81]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[58] = _div( unkR[274] , (1. + (LPRES__gamma(&unkR[60]) - 1.)/2. * _pow( unkR[325] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[58] = unkR[274] ;
}
//[E-82]  PRIVATE_EQT
unkR[15] = _div( (LPRES__cp(&unkR[119]) * unkR[58] + _div( unkR[213] , unkR[8],"CombCha.OF_st") * LPRES__cp(&unkR[90]) * unkR[25]) , ((1. + _div( unkR[213] , unkR[8],"CombCha.OF_st")) * unkR[23]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-83]  PRIVATE_EQT
unkR[13] = _div( (_div( unkR[24] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[23] * (unkR[15] - 298.15)) , LPRES__cp(&unkR[148]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-84]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * CombCha.f_O.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[3] = evalNormResidueInternal(3,_div( (unkR[20] + dyn[1]) , unkR[177],"ThrustMonitor.g.W") * LPRES__cp(&unkR[148]) * (dyn[5] - unkR[13]) + _div( unkR[19] , unkR[177],"ThrustMonitor.g.W") * unkR[88] * (dyn[5] - unkR[58]) + _div( unkR[18] , unkR[177],"ThrustMonitor.g.W") * unkR[55] * (dyn[5] - unkR[25]),0);
//[E-85]  CombCha.f_O.W =  IF (LPRES.State(CombCha.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha.f_O.fluid) * Injector_O.f_in.pt / sqrt(Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha.f_O.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha.f_O.fluid) * (Injector_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[60]) == 2 ) 
{
res[4] = evalNormResidueInternal(4,unkR[59],_div( _div( unkR[322] * LPRES__FGAMMA(&unkR[60]) * unkR[329] , _sqrt(unkR[274] * LPRES__R(&unkR[60]),"Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid)"),"sqrt(Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[60]) - 1) * _pow( unkR[325] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[60]) + 1),"LPRES.gamma(CombCha.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[60]) + 1) , (2 * (LPRES__gamma(&unkR[60]) - 1)),"2 * (LPRES.gamma(CombCha.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha.f_O.fluid) + 1))**((LPRES.gamma(CombCha.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha.f_O.fluid) - 1)))" ) , unkR[325],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha.f_O.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[4] = evalNormResidueInternal(4,unkR[59],unkR[322] * unkR[324] * _sqrt(2. * LPRES__rho(&unkR[60]) * (unkR[329] - unkR[89]),"2 * LPRES.rho(CombCha.f_O.fluid) * (Injector_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-86]  PRIVATE_EQT
unkR[281] = _div( dyn[4] , unkR[345],"Pump_F.r_m") ;
//[E-87]  PRIVATE_EQT
unkR[380] = unkR[281] * unkR[394] ;
//[E-88]  PRIVATE_EQT
unkR[392] = _div( unkR[396] , _pow( unkR[380] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-89]  PRIVATE_EQT
unkR[389] = _div( (unkR[392] + 1.) , (tan(unkR[386] * 3.14159265358979/180.) - tan(unkR[387] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-90]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[5] = evalNormResidueInternal(5,unkR[389],_div( unkR[383] , unkR[380],"Turbine.U"));
//[E-91]  PRIVATE_EQT
unkR[279] = _div( unkR[281] , unkR[277],"Gearbox.GR") ;
//[E-92]  PRIVATE_EQT
unkR[349] = unkR[279] * unkR[357] ;
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
LPRES__Init_fluid(unkI[3], &unkR[240]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_O 
LPRES__fluid_func(&unkR[60], &unkR[119]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[240]), &unkR[27]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_F 
LPRES__fluid_func(&unkR[27], &unkR[90]);
//[E-6]  PRIVATE_EQT
unkR[213] = _div( unkR[8] , unkR[7],"CombCha.OF") ;
//[E-7]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[11] = unkR[10] ;
else unkR[11] = 0. ;
//[E-8]  PRIVATE_EQT
unkR[302] = unkR[301] - unkR[297] ;
//[E-9]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[326] = _pow( ((LPRES__gamma(&unkR[60]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[60]) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(CombCha.f_O.fluid) - 1")),"((LPRES.gamma(CombCha.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha.f_O.fluid) / (LPRES.gamma(CombCha.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[326] = 0. ;
}
//[E-10]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[317] = _pow( ((LPRES__gamma(&unkR[27]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[27]) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[317] = 0. ;
}
//[E-11]  PRIVATE_EQT
unkR[223] = _div( 1.3 * _pow( (unkR[231] * unkR[232]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[231] + unkR[232]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-12]  PRIVATE_EQT
unkR[224] = _div( 2. * unkR[231] * unkR[232] , (unkR[231] + unkR[232]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-13]  PRIVATE_EQT
unkR[295] = unkR[294] - unkR[290] ;
//[E-14]  PRIVATE_EQT
unkR[3] = unkR[4] * unkR[1] ;
//[E-15]  PRIVATE_EQT
unkR[227] = _div( LPRES__visc(&unkR[240]) * LPRES__cp(&unkR[240]) , LPRES__cond(&unkR[240]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-16]  PRIVATE_EQT
unkR[222] = unkI[2] * 2. * (unkR[231] + unkR[232]) * unkR[225] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,7,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-96]  PRIVATE_EQT
unkR[348] = _div( (unkR[275] - unkR[302]) , (9.80665 * LPRES__rho(&unkR[60])),"9.80665 * LPRES.rho(CombCha.f_O.fluid)") ;
//[E-97]  PRIVATE_EQT
unkR[336] = _div( (unkR[269] - unkR[295]) , (9.80665 * LPRES__rho(&unkR[240])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-98]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[4] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-100]  PRIVATE_EQT
unkR[276] = cabs(unkR[59]) ;
//[E-101]  PRIVATE_EQT
unkR[273] = cabs(unkR[26]) ;
//[E-102]  PRIVATE_EQT
unkR[219] = unkR[273] + unkR[276] ;
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
unkR[313] = _div( _sqrt(unkR[286] * LPRES__R(&unkR[27]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[26] , (LPRES__FGAMMA(&unkR[27]) * unkR[288]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[313] = 0. ;
}
//[E-114]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[321] = unkR[315] * _sqrt(LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * unkR[25],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[321] = _div( unkR[26] , (LPRES__rho(&unkR[27]) * unkR[312] * unkR[314]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-115]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[318] = 0. ;
}
else 
{
unkR[318] = _div( LPRES__rho(&unkR[27]) * unkR[321] * unkR[314] * _sqrt(4. * unkR[312]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[27]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-116]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[323] = _div( _sqrt(unkR[274] * LPRES__R(&unkR[60]),"Injector_O.f_in.Tt * LPRES.R(CombCha.f_O.fluid)") * unkR[59] , (LPRES__FGAMMA(&unkR[60]) * unkR[329]),"LPRES.FGAMMA(CombCha.f_O.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[323] = 0. ;
}
//[E-117]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[331] = unkR[325] * _sqrt(LPRES__gamma(&unkR[60]) * LPRES__R(&unkR[60]) * unkR[58],"LPRES.gamma(CombCha.f_O.fluid) * LPRES.R(CombCha.f_O.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[331] = _div( unkR[59] , (LPRES__rho(&unkR[60]) * unkR[322] * unkR[324]),"LPRES.rho(CombCha.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-118]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[327] = 0. ;
}
else 
{
unkR[327] = _div( LPRES__rho(&unkR[60]) * unkR[331] * unkR[324] * _sqrt(4. * unkR[322]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[60]),"LPRES.visc(CombCha.f_O.fluid)") ;
}
//[E-119]  PRIVATE_EQT
unkR[220] = unkR[218] ;
//[E-120]  PRIVATE_EQT
unkR[365] = unkR[275] - unkR[329] ;
//[E-121]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[221] = unkR[273] + unkR[276] ;

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
if(!(1 == LPRES__State(&unkR[240])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[240])))
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
    ev[2]= unkR[280];
    ev[3]= unkI[0] - 1;
    ev[4]= LPRES__State(&unkR[27]) - 2;
    ev[5]= unkR[316] - unkR[317];
    ev[6]= LPRES__State(&unkR[27]) - 2;
    ev[7]= unkR[316] - unkR[317];
    ev[8]= LPRES__State(&unkR[60]) - 2;
    ev[9]= dyn[2] - unkR[326];
    ev[10]= LPRES__State(&unkR[60]) - 2;
    ev[11]= dyn[2] - unkR[326];
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
static const unsigned int s_gst_size_TRABAJO__RL10_control_regulator = 87448;
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


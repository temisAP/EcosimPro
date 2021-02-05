//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef TRABAJO__RL10_offdesign_regulator_CPP
#define TRABAJO__RL10_offdesign_regulator_CPP

#include "TRABAJO.+r+l10_offdesign.regulator.h"

TRABAJO__RL10_offdesign_regulator* TRABAJO__RL10_offdesign_regulator::s_current= NULL;

TRABAJO__RL10_offdesign_regulator::TRABAJO__RL10_offdesign_regulator(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoComponentName = "RL10_offdesign";
m_infoPartitionName = "regulator";
m_infoModelName = "TRABAJO__RL10_offdesign_regulator";
m_infoModelFileName = "TRABAJO.+r+l10_offdesign.regulator";
m_infoModelFileNameExtra = "+r+l10_offdesign.regulator";
m_perfFlag = false;
m_infoComponentDate = "05/02/2021 18:51:54.920000";
m_infoPartitionDate = "05/02/2021 23:44:51.509000";
m_programVersion= "EcosimPro V6.0.0";
m_libsVersion= "LPRES V1.3.7 MATH V3.2.7 TRABAJO V0.0 ";

m_solveInternalBox= new int[4]; 
int nbx;
for (nbx=0; nbx < 4 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[2];
int ib;
for (ib=0; ib < 2 ; ib++)
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
static double tmp_unkRInit[391]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 3300, 0, 
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
void TRABAJO__RL10_offdesign_regulator::initInternalModels()
{
}

void TRABAJO__RL10_offdesign_regulator::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::MATH__min(const double & x,const double & y)
{
	if( x < y ) {
	return x ;
	}
	return y ;
}


double TRABAJO__RL10_offdesign_regulator::LPRES__cp(double fluid[])
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


void TRABAJO__RL10_offdesign_regulator::LPRES__fluid_func(double f[],double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::MATH__max(const double & x,const double & y)
{
	if( x > y ) {
	return x ;
	}
	return y ;
}


void TRABAJO__RL10_offdesign_regulator::LPRES__fluidP(const int & Combustion,double fluid_O[],double fluid_F[],const double & phi,const double & W_O,const double & W_F,const double & W_F_st,const double & M_P,const double & cp_P,double fluid_P[])
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


void TRABAJO__RL10_offdesign_regulator::LPRES__fluidG(double fluid_P[],const double & W_O,const double & W_IO,const double & W_F,const double & W_IF,const double & W,double fluid[])
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


int TRABAJO__RL10_offdesign_regulator::LPRES__Know_fluid(double fluid[])
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


int TRABAJO__RL10_offdesign_regulator::LPRES__State(double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::LPRES__M(double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::LPRES__R(double fluid[])
{
	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",262,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double TRABAJO__RL10_offdesign_regulator::LPRES__cv(double fluid[])
{
	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double TRABAJO__RL10_offdesign_regulator::LPRES__gamma(double fluid[])
{
	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double TRABAJO__RL10_offdesign_regulator::LPRES__FGAMMA(double fluid[])
{
	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int TRABAJO__RL10_offdesign_regulator::LPRES__Vaporisation(double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::LPRES__cond(double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::LPRES__rho(double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::LPRES__visc(double fluid[])
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


double TRABAJO__RL10_offdesign_regulator::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double TRABAJO__RL10_offdesign_regulator::LPRES__Geopotential_Altitude(const double & z)
{
	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double TRABAJO__RL10_offdesign_regulator::LPRES__ISA_Pressure(const double & z)
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

void TRABAJO__RL10_offdesign_regulator::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void TRABAJO__RL10_offdesign_regulator::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",161,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[178]) ;
	unkI[0] = 1 ;
	dyn[2] = 1. ;
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
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[238]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[60]) ;
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
void TRABAJO__RL10_offdesign_regulator::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
unkR[207] = unkR[26] * LPRES__cp(&unkR[27]) * (dyn[3] - unkR[237]) ;
//[E-46]  PRIVATE_EQT
unkR[228] = _div( _div( unkR[207] , unkR[221],"CoolingJacket.A_wet_cooling") , unkR[235],"CoolingJacket.h_l") + unkR[237] ;
//[E-47]  PRIVATE_EQT
unkR[208] = _div( _div( unkR[207] , unkR[5],"CombCha.A_wet") , (_div( unkR[236] , unkR[269],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[228] ;
//[E-48]  PRIVATE_EQT
unkR[336] = -(unkR[345] * unkR[26]) ;
//[E-49]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[280] = unkR[336] + unkR[373] ;
//[E-50]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[278] = -(_div( unkR[280] , unkR[276],"Gearbox.eta")) ;
else unkR[278] = -(unkR[280] * unkR[276]) ;
//[E-51]  PRIVATE_EQT
unkR[17] = _div( dyn[1] , dyn[2],"CombCha.phi") ;
//[E-52]  PRIVATE_EQT
unkR[7] = _div( unkR[8] , dyn[2],"CombCha.phi") ;
//[E-53]  PRIVATE_EQT
unkR[20] = unkR[7] * dyn[1] ;
//[E-54]  PRIVATE_EQT
unkR[59] = _div( unkR[20] , (1. - unkR[86]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-55]  PRIVATE_EQT
unkR[19] = unkR[59] - unkR[20] ;
//[E-56]  PRIVATE_EQT
unkR[177] = unkR[19] + unkR[20] + unkR[26] ;
//[E-57]  PRIVATE_EQT
unkR[357] = _div( -unkR[278] , unkR[59],"HeadLoss_TO.f_in.W") ;
//[E-58]  PRIVATE_EQT
unkR[273] = unkR[357] * unkR[351] * LPRES__rho(&unkR[60]) + unkR[300] ;
//[E-59]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[328] = _div( unkR[273] , unkR[325],"Injector_O.PR_sl") ;
}
else 
{
unkR[328] = 0. ;
}
//[E-60]  PRIVATE_EQT
unkR[272] = _div( _div( (unkR[273] - unkR[300]) , LPRES__rho(&unkR[60]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[351],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[60]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[298] ;
//[E-61]  PRIVATE_EQT
unkR[23] = _div( (unkR[20] * LPRES__cp(&unkR[119]) + dyn[1] * LPRES__cp(&unkR[90])) , (unkR[20] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
//[E-62]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_P 
LPRES__fluidP(unkI[0], &unkR[119], &unkR[90], dyn[2], unkR[20], dyn[1], unkR[17], unkR[6], unkR[22], &unkR[148]);
//[E-63]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[148], unkR[20], unkR[19], dyn[1], unkR[18], unkR[177], &unkR[178]);
//[E-64]  PRIVATE_EQT
unkR[57] = _div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-65]  PRIVATE_EQT
unkR[314] = _div( unkR[286] , unkR[57],"CombCha.f_O.p_c") ;
//[E-66]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[313] = _sqrt(_div( 2. * (_pow( unkR[314] , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[313] = 1. ;
else unkR[313] = 0. ;
//[E-67]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[25] = _div( unkR[284] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( unkR[313] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[25] = unkR[284] ;
}
//[E-68]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[56] = MATH__max(unkR[57], unkR[318]) ;
}
else 
{
unkR[56] = unkR[57] ;
}
//[E-69]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[27]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[26],_div( _div( unkR[310] * LPRES__FGAMMA(&unkR[27]) * unkR[286] , _sqrt(unkR[284] * LPRES__R(&unkR[27]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[27]) - 1) * _pow( unkR[313] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[27]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[27]) + 1) , (2 * (LPRES__gamma(&unkR[27]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[313],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[26],unkR[310] * unkR[312] * _sqrt(2. * LPRES__rho(&unkR[27]) * (unkR[286] - unkR[56]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-70]  PRIVATE_EQT
unkR[324] = _div( unkR[273] , unkR[57],"CombCha.f_O.p_c") ;
//[E-71]  PRIVATE_EQT
 if(m_branchZone[3]==0)
	unkR[323] = _sqrt(_div( 2. * (_pow( unkR[324] , (_div( (LPRES__gamma(&unkR[60]) - 1.) , LPRES__gamma(&unkR[60]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[323] = 1. ;
else unkR[323] = 0. ;
//[E-72]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[58] = _div( unkR[272] , (1. + (LPRES__gamma(&unkR[60]) - 1.)/2. * _pow( unkR[323] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[58] = unkR[272] ;
}
//[E-73]  PRIVATE_EQT
unkR[15] = _div( (LPRES__cp(&unkR[119]) * unkR[58] + _div( dyn[2] , unkR[8],"CombCha.OF_st") * LPRES__cp(&unkR[90]) * unkR[25]) , ((1. + _div( dyn[2] , unkR[8],"CombCha.OF_st")) * unkR[23]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-74]  PRIVATE_EQT
unkR[13] = _div( (_div( unkR[24] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[23] * (unkR[15] - 298.15)) , LPRES__cp(&unkR[148]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-75]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[1] = evalNormResidueInternal(1,_div( (unkR[20] + dyn[1]) , unkR[177],"ThrustMonitor.g.W") * LPRES__cp(&unkR[148]) * (dyn[5] - unkR[13]) + _div( unkR[19] , unkR[177],"ThrustMonitor.g.W") * unkR[88] * (dyn[5] - unkR[58]) + _div( unkR[18] , unkR[177],"ThrustMonitor.g.W") * unkR[55] * (dyn[5] - unkR[25]),0);
//[E-76]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[89] = MATH__max(unkR[57], unkR[328]) ;
}
else 
{
unkR[89] = unkR[57] ;
}
//[E-77]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[60]) == 2 ) 
{
res[2] = evalNormResidueInternal(2,unkR[59],_div( _div( unkR[320] * LPRES__FGAMMA(&unkR[60]) * unkR[273] , _sqrt(unkR[272] * LPRES__R(&unkR[60]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[60]) - 1) * _pow( unkR[323] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[60]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[60]) + 1) , (2 * (LPRES__gamma(&unkR[60]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[323],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[2] = evalNormResidueInternal(2,unkR[59],unkR[320] * unkR[322] * _sqrt(2. * LPRES__rho(&unkR[60]) * (unkR[273] - unkR[89]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-78]  PRIVATE_EQT
unkR[21] = _div( _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-79]  PRIVATE_EQT
unkR[9] = _div( 4. * LPRES__gamma(&unkR[178]) , (9. * LPRES__gamma(&unkR[178]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-80]  PRIVATE_EQT
unkR[12] = dyn[5] * _div( (1. + _pow( unkR[9] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-81]  PRIVATE_EQT
unkR[213] = 1.184e-07 * _pow( LPRES__M(&unkR[178]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-82]  PRIVATE_EQT
unkR[209] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[213] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[178]) , _pow( unkR[9] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[57] , unkR[21],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-83]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[3] = evalNormResidueInternal(3,unkR[207],unkR[209] * (unkR[12] - unkR[208]) * unkR[5]);
//[E-84]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[178]) , _sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[178]) + 1) , (2 * (LPRES__gamma(&unkR[178]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
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
res[5] = evalNormResidueInternal(5,unkR[352],_div( unkR[59] , (unkR[346] * unkR[348] * LPRES__rho(&unkR[60])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)"));
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
void TRABAJO__RL10_offdesign_regulator::fcn1(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign_regulator& m= *TRABAJO__RL10_offdesign_regulator::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	dcopy(*n,&m.res[0],residues);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void TRABAJO__RL10_offdesign_regulator::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[7];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign_regulator::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void TRABAJO__RL10_offdesign_regulator::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-97]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[178]) , (_pow( (_div( dyn[7] , unkR[57],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[178]) * (1. - _pow( (_div( dyn[7] , unkR[57],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[178]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void TRABAJO__RL10_offdesign_regulator::fcn2(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign_regulator& m= *TRABAJO__RL10_offdesign_regulator::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[7],x);
	dcopy(*n,&m.res[7],residues);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void TRABAJO__RL10_offdesign_regulator::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign_regulator::fcn2, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void TRABAJO__RL10_offdesign_regulator::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-102]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[57],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[178]) + 1)/2 , (LPRES__gamma(&unkR[178]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void TRABAJO__RL10_offdesign_regulator::fcn3(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign_regulator& m= *TRABAJO__RL10_offdesign_regulator::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	dcopy(*n,&m.res[8],residues);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void TRABAJO__RL10_offdesign_regulator::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign_regulator::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}

int TRABAJO__RL10_offdesign_regulator::sparseGetEquiv( int nvars,int v[] )
{
	return -1;
}

/* Main residues function for this model */
void TRABAJO__RL10_offdesign_regulator::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[60]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[238]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[238]), &unkR[27]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_O 
LPRES__fluid_func(&unkR[60], &unkR[119]);
//[E-6]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_F 
LPRES__fluid_func(&unkR[27], &unkR[90]);
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
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[325] = _pow( ((LPRES__gamma(&unkR[60]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[60]) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
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
unkR[274] = cabs(unkR[59]) ;
//[E-100]  PRIVATE_EQT
unkR[218] = unkR[271] + unkR[274] ;
//[E-101]  PRIVATE_EQT
unkR[210] = unkR[21] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-103]  PRIVATE_EQT
unkR[367] = _div( dyn[5] , (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-104]  PRIVATE_EQT
unkR[370] = dyn[8] * _sqrt(LPRES__gamma(&unkR[178]) * LPRES__R(&unkR[178]) * unkR[367],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-105]  PRIVATE_EQT
unkR[369] = _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-106]  PRIVATE_EQT
unkR[368] = LPRES__ISA_Pressure(unkR[333]) ;
//[E-107]  PRIVATE_EQT
unkR[217] = unkR[177] * unkR[370] + unkR[2] * (unkR[369] - unkR[368]) ;
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
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[321] = _div( _sqrt(unkR[272] * LPRES__R(&unkR[60]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[59] , (LPRES__FGAMMA(&unkR[60]) * unkR[273]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[321] = 0. ;
}
//[E-115]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[329] = unkR[323] * _sqrt(LPRES__gamma(&unkR[60]) * LPRES__R(&unkR[60]) * unkR[58],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[329] = _div( unkR[59] , (LPRES__rho(&unkR[60]) * unkR[320] * unkR[322]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-116]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[326] = 0. ;
}
else 
{
unkR[326] = _div( LPRES__rho(&unkR[60]) * unkR[329] * unkR[322] * _sqrt(4. * unkR[320]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[60]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-117]  PRIVATE_EQT
unkR[335] = _div( (unkR[267] - unkR[293]) , (9.80665 * LPRES__rho(&unkR[238])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-118]  PRIVATE_EQT
unkR[347] = _div( (unkR[273] - unkR[300]) , (9.80665 * LPRES__rho(&unkR[60])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-119]  PRIVATE_EQT
unkR[219] = unkR[217] ;
//[E-120]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[220] = unkR[271] + unkR[274] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void TRABAJO__RL10_offdesign_regulator::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[238])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",59,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[238])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[60])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[178])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[369] , unkR[368],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",895,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[27])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void TRABAJO__RL10_offdesign_regulator::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[1]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[2]= unkI[0] - 1;
    ev[3]= unkR[278];
    ev[4]= LPRES__State(&unkR[27]) - 2;
    ev[5]= unkR[314] - unkR[315];
    ev[6]= LPRES__State(&unkR[27]) - 2;
    ev[7]= unkR[314] - unkR[315];
    ev[8]= LPRES__State(&unkR[60]) - 2;
    ev[9]= unkR[324] - unkR[325];
    ev[10]= LPRES__State(&unkR[60]) - 2;
    ev[11]= unkR[324] - unkR[325];
}

/* Evaluation of when conditions*/
void TRABAJO__RL10_offdesign_regulator::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ;
     w[1] = cont[1] ;
}

/* Generation WHEN conditions*/
void TRABAJO__RL10_offdesign_regulator::executeWhen(double *_time,  int index )
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
void TRABAJO__RL10_offdesign_regulator::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* TRABAJO__RL10_offdesign_regulator::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void TRABAJO__RL10_offdesign_regulator::initDelays()
{
}


bool TRABAJO__RL10_offdesign_regulator::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_TRABAJO__RL10_offdesign_regulator = 84984;
static const unsigned int s_gst_chunkSize_TRABAJO__RL10_offdesign_regulator = 2000;
static const char *s_gst_chunkedStr_TRABAJO__RL10_offdesign_regulator[] = 
{
"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"
};
*size = s_gst_size_TRABAJO__RL10_offdesign_regulator;
*chunkSize = s_gst_chunkSize_TRABAJO__RL10_offdesign_regulator;
*chunkedStr = s_gst_chunkedStr_TRABAJO__RL10_offdesign_regulator;
return true;
}



bool TRABAJO__RL10_offdesign_regulator::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_TRABAJO__RL10_offdesign_regulator = 460;
static const unsigned int s_gsi_chunkSize_TRABAJO__RL10_offdesign_regulator = 2000;
static const char *s_gsi_chunkedStr_TRABAJO__RL10_offdesign_regulator[] = 
{
"CQAAAEEAAAAAAAAABwAAAAcAAAAHAAAABwAAAAcAAAAHAAAABwAAAAgAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_TRABAJO__RL10_offdesign_regulator;
*chunkSize = s_gsi_chunkSize_TRABAJO__RL10_offdesign_regulator;
*chunkedStr = s_gsi_chunkedStr_TRABAJO__RL10_offdesign_regulator;
return true;
}



bool TRABAJO__RL10_offdesign_regulator::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP void* create_TRABAJO__RL10_offdesign_regulator(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ep = 0;
	try
	{
		INTEG_simula *tmp = new TRABAJO__RL10_offdesign_regulator(name,dirInstall);
		ep = (void *)tmp->createThinModel(t,(void(*)())create_TRABAJO__RL10_offdesign_regulator);
	}
	catch(...)
	{
	}
	return ep;
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_TRABAJO__RL10_offdesign_regulator(INTEG_simula *obj,const char *name=NULL)
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
	sprintf(partitionName,"%s","regulator");
	sprintf(symbolTableFilename,"%s","TRABAJO.+r+l10_offdesign.regulator");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


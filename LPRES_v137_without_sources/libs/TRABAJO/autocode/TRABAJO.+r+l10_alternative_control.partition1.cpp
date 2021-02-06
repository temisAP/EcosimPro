//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef TRABAJO__RL10_alternative_control_partition1_CPP
#define TRABAJO__RL10_alternative_control_partition1_CPP

#include "TRABAJO.+r+l10_alternative_control.partition1.h"

TRABAJO__RL10_alternative_control_partition1* TRABAJO__RL10_alternative_control_partition1::s_current= NULL;

TRABAJO__RL10_alternative_control_partition1::TRABAJO__RL10_alternative_control_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoComponentName = "RL10_alternative_control";
m_infoPartitionName = "partition1";
m_infoModelName = "TRABAJO__RL10_alternative_control_partition1";
m_infoModelFileName = "TRABAJO.+r+l10_alternative_control.partition1";
m_infoModelFileNameExtra = "+r+l10_alternative_control.partition1";
m_perfFlag = false;
m_infoComponentDate = "06/02/2021 23:33:09.404000";
m_infoPartitionDate = "06/02/2021 23:45:20.000000";
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
n_dyn=8;
dyn= new double[8] ;
static double tmp_dynInit[8]={ 1, 1, 1, 1, 1, 1, 100, 100 } ;
dynInit= new double[8];
dcopy(8,dynInit,tmp_dynInit);


n_der=0;
der= new double[8] ;
static double tmp_derInit[8]={ 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[8];
dcopy(8,derInit,tmp_derInit);


res= new double[8] ;
ldr= new double[8] ;
boxDyn= new double[8] ;
boxDer= new double[8] ;

n_unkR=392;
unkR= new double[392] ;
static double tmp_unkRInit[392]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 3300, 0, 
		0, 2.7, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 1, 1, 1, 
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
		0, 0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 0, 0, 1, 1, 1, 0, 0.000677279675, 
		0, 0, 850, 7358000, 0.573907002, 0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 0, 350, 4282000, 
		0.6508, 0, 0.03027, 0, 0.05393, 0.194281146, 0, 3219188.99, 1500, 0.1, 1, 1200000, 1, 1, 1, 1, 
		0, 0, 0, 0, 0.000513113762, 0.1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 
		0, 0.05, 1.8, 0, 0.7, 0.715229315, 38172.635, 0 } ;
unkRInit= new double[392];
dcopy(392,unkRInit,tmp_unkRInit);


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
n_nelg= 50;
n_neld= 0;
m_numBoxes= 3;
m_nNonLinearBoxes= 3;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void TRABAJO__RL10_alternative_control_partition1::initInternalModels()
{
}

void TRABAJO__RL10_alternative_control_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int TRABAJO__RL10_alternative_control_partition1::LPRES__Know_fluid(double fluid[])
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


int TRABAJO__RL10_alternative_control_partition1::LPRES__State(double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__cp(double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__M(double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__R(double fluid[])
{
	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",262,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double TRABAJO__RL10_alternative_control_partition1::LPRES__cv(double fluid[])
{
	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double TRABAJO__RL10_alternative_control_partition1::LPRES__gamma(double fluid[])
{
	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double TRABAJO__RL10_alternative_control_partition1::MATH__min(const double & x,const double & y)
{
	if( x < y ) {
	return x ;
	}
	return y ;
}


double TRABAJO__RL10_alternative_control_partition1::LPRES__rho(double fluid[])
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


void TRABAJO__RL10_alternative_control_partition1::LPRES__fluid_func(double f[],double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::MATH__max(const double & x,const double & y)
{
	if( x > y ) {
	return x ;
	}
	return y ;
}


void TRABAJO__RL10_alternative_control_partition1::LPRES__fluidP(const int & Combustion,double fluid_O[],double fluid_F[],const double & phi,const double & W_O,const double & W_F,const double & W_F_st,const double & M_P,const double & cp_P,double fluid_P[])
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


void TRABAJO__RL10_alternative_control_partition1::LPRES__fluidG(double fluid_P[],const double & W_O,const double & W_IO,const double & W_F,const double & W_IF,const double & W,double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__FGAMMA(double fluid[])
{
	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int TRABAJO__RL10_alternative_control_partition1::LPRES__Vaporisation(double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__cond(double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__visc(double fluid[])
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double TRABAJO__RL10_alternative_control_partition1::LPRES__Geopotential_Altitude(const double & z)
{
	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double TRABAJO__RL10_alternative_control_partition1::LPRES__ISA_Pressure(const double & z)
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

void TRABAJO__RL10_alternative_control_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void TRABAJO__RL10_alternative_control_partition1::initBlocks( double dyn[], double ldr[], double *_time )
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
	unkR[58] = unkR[212] ;
	}
	dyn[4] = unkR[14] ;
	unkR[16] = unkR[17] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[239]), &unkR[28]) ;
	unkR[229] = unkR[230] ;
  // init(Turbine.Turbine,0)
	dyn[5] = unkR[373] ;
	unkR[375] = unkR[376] ;
  // init(Pump_O.Pump,0)
	unkR[349] = unkR[350] ;
  // init(Pump_F.Pump,0)
	dyn[3] = unkR[338] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void TRABAJO__RL10_alternative_control_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-16]  PRIVATE_EQT
unkR[21] = dyn[1] * (1. - unkR[86]) ;
//[E-17]  PRIVATE_EQT
unkR[20] = dyn[1] - unkR[21] ;
//[E-18]  PRIVATE_EQT
unkR[16] = _div( unkR[21] , unkR[7],"CombCha.OF") ;
//[E-19]  PRIVATE_EQT
unkR[27] = _div( unkR[16] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-20]  PRIVATE_EQT
unkR[341] = _div( unkR[27] , (unkR[335] * dyn[3] * LPRES__rho(&unkR[239])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-21]  PRIVATE_EQT
unkR[343] = 1. - _div( (1. - unkR[344]) , unkR[342],"Pump_F.phi_d") * unkR[341] ;
//[E-22]  PRIVATE_EQT
unkR[346] = unkR[343] * _pow( dyn[3] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-23]  PRIVATE_EQT
unkR[268] = unkR[346] * unkR[340] * LPRES__rho(&unkR[239]) + unkR[294] ;
//[E-24]  PRIVATE_EQT
unkR[238] = _div( _div( (unkR[268] - unkR[294]) , LPRES__rho(&unkR[239]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[340],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[239]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[292] ;
//[E-25]  PRIVATE_EQT
unkR[207] = unkR[27] * LPRES__cp(&unkR[28]) * (dyn[2] - unkR[238]) ;
//[E-26]  PRIVATE_EQT
unkR[337] = -(unkR[346] * unkR[27]) ;
//[E-27]  PRIVATE_EQT
unkR[271] = _div( _div( unkR[27] , (unkR[231] * unkR[232] * LPRES__rho(&unkR[239])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-28]  PRIVATE_EQT
unkR[228] = _div( LPRES__rho(&unkR[239]) * unkR[271] * unkR[224] , LPRES__visc(&unkR[239]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-29]  PRIVATE_EQT
unkR[226] = 0.027 * _pow( unkR[228] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[227] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-30]  PRIVATE_EQT
unkR[236] = _div( unkR[226] * LPRES__cond(&unkR[239]) , unkR[224],"CoolingJacket.D_hy") ;
//[E-31]  PRIVATE_EQT
unkR[229] = _div( _div( unkR[207] , unkR[222],"CoolingJacket.A_wet_cooling") , unkR[236],"CoolingJacket.h_l") + unkR[238] ;
//[E-32]  PRIVATE_EQT
unkR[208] = _div( _div( unkR[207] , unkR[5],"CombCha.A_wet") , (_div( unkR[237] , unkR[270],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[229] ;
//[E-33]  PRIVATE_EQT
unkR[234] = LPRES__hdc_fric(unkR[223], unkR[269], unkR[228]) ;
//[E-34]  PRIVATE_EQT
unkR[235] = unkR[268] - _div( unkR[234] * unkR[225] , unkR[223],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[239]) * _pow( unkR[271] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-35]  PRIVATE_EQT
unkR[365] = unkR[235] * unkR[364] ;
//[E-36]  PRIVATE_EQT
unkR[307] = _div( _sqrt(LPRES__gamma(&unkR[28]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[5], 1.) * cos(unkR[381] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[28]) - 1.)/2. * _pow( MATH__min(dyn[5], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[28]) + 1.)/2. , (LPRES__gamma(&unkR[28]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) * unkR[365] * unkR[372] , _sqrt(dyn[2] * LPRES__R(&unkR[28]),"Junction.f_in2.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(Junction.f_in2.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") ;
//[E-37]  PRIVATE_EQT
unkR[332] = unkR[27] - unkR[307] ;
//[E-38]  PRIVATE_EQT
unkR[177] = unkR[20] + unkR[21] + unkR[307] + unkR[332] ;
//[E-39]  PRIVATE_EQT
unkR[19] = unkR[307] + unkR[332] - unkR[16] ;
//[E-40]  PRIVATE_EQT
unkR[362] = unkR[235] * unkR[364] ;
//[E-41]  PRIVATE_EQT
unkR[333] = unkR[362] - unkR[359] ;
//[E-42]  PRIVATE_EQT
unkR[286] = unkR[333] * unkR[331] ;
//[E-43]  PRIVATE_EQT
unkR[309] = _div( unkR[286] , unkR[331],"Junction.TPL") ;
//[E-44]  PRIVATE_EQT
unkR[308] = unkR[309] + unkR[303] ;
//[E-45]  PRIVATE_EQT
unkR[380] = 1. - unkR[383] * (1. - _pow( (_div( unkR[308] , unkR[365],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[28]) - 1.) , LPRES__gamma(&unkR[28]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-46]  PRIVATE_EQT
unkR[306] = unkR[380] * dyn[2] ;
//[E-47]  PRIVATE_EQT
unkR[374] = unkR[307] * LPRES__cp(&unkR[28]) * (dyn[2] - unkR[306]) ;
//[E-48]  PRIVATE_EQT
unkR[391] = _div( unkR[374] , unkR[307],"HeadLoss_Turb.f_in.W") ;
//[E-49]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[281] = unkR[337] + unkR[374] ;
//[E-50]  PRIVATE_EQT
 if(m_branchZone[0]==0)
	unkR[279] = -(_div( unkR[281] , unkR[277],"Gearbox.eta")) ;
else unkR[279] = -(unkR[281] * unkR[277]) ;
//[E-51]  PRIVATE_EQT
unkR[358] = _div( -unkR[279] , dyn[1],"HeadLoss_TO.f_in.W") ;
//[E-52]  PRIVATE_EQT
unkR[274] = unkR[358] * unkR[352] * LPRES__rho(&unkR[60]) + unkR[301] ;
//[E-53]  PRIVATE_EQT
unkR[273] = _div( _div( (unkR[274] - unkR[301]) , LPRES__rho(&unkR[60]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[352],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[60]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[299] ;
//[E-54]  PRIVATE_EQT
unkR[285] = _div( (-(_div( unkR[307] , unkR[27],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[28]) * -unkR[306]) - _div( unkR[332] , unkR[27],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[28]) * -dyn[2]) , (_div( unkR[307] , unkR[27],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[28]) + _div( unkR[332] , unkR[27],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[28])),"HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + Junction.f_in2.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-55]  PRIVATE_EQT
unkR[287] = unkR[286] - unkR[282] ;
//[E-56]  PRIVATE_EQT
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[319] = _div( unkR[287] , unkR[316],"Injector_F.PR_sl") ;
}
else 
{
unkR[319] = 0. ;
}
//[E-57]  PRIVATE_EQT
unkR[18] = _div( unkR[16] , unkR[213],"CombCha.phi") ;
//[E-58]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_P 
LPRES__fluidP(unkI[0], &unkR[119], &unkR[90], unkR[213], unkR[21], unkR[16], unkR[18], unkR[6], unkR[23], &unkR[148]);
//[E-59]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[148], unkR[21], unkR[20], unkR[16], unkR[19], unkR[177], &unkR[178]);
//[E-60]  PRIVATE_EQT
unkR[58] = _div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[4],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-61]  PRIVATE_EQT
unkR[315] = _div( unkR[287] , unkR[58],"CombCha.f_O.p_c") ;
//[E-62]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[314] = _sqrt(_div( 2. * (_pow( unkR[315] , (_div( (LPRES__gamma(&unkR[28]) - 1.) , LPRES__gamma(&unkR[28]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[28]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[314] = 1. ;
else unkR[314] = 0. ;
//[E-63]  PRIVATE_EQT
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[26] = _div( unkR[285] , (1. + (LPRES__gamma(&unkR[28]) - 1.)/2. * _pow( unkR[314] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[26] = unkR[285] ;
}
//[E-64]  PRIVATE_EQT
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[57] = MATH__max(unkR[58], unkR[319]) ;
}
else 
{
unkR[57] = unkR[58] ;
}
//[E-65]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[28]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[27],_div( _div( unkR[311] * LPRES__FGAMMA(&unkR[28]) * unkR[287] , _sqrt(unkR[285] * LPRES__R(&unkR[28]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[28]) - 1) * _pow( unkR[314] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[28]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[28]) + 1) , (2 * (LPRES__gamma(&unkR[28]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[314],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[27],unkR[311] * unkR[313] * _sqrt(2. * LPRES__rho(&unkR[28]) * (unkR[287] - unkR[57]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-66]  PRIVATE_EQT
unkR[325] = _div( unkR[274] , unkR[58],"CombCha.f_O.p_c") ;
//[E-67]  PRIVATE_EQT
 if(m_branchZone[3]==0)
	unkR[324] = _sqrt(_div( 2. * (_pow( unkR[325] , (_div( (LPRES__gamma(&unkR[60]) - 1.) , LPRES__gamma(&unkR[60]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[324] = 1. ;
else unkR[324] = 0. ;
//[E-68]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[59] = _div( unkR[273] , (1. + (LPRES__gamma(&unkR[60]) - 1.)/2. * _pow( unkR[324] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[59] = unkR[273] ;
}
//[E-69]  PRIVATE_EQT
unkR[13] = dyn[4] - _div( (-(_div( unkR[19] , unkR[177],"ThrustMonitor.g.W") * unkR[56] * (dyn[4] - unkR[26])) - _div( unkR[20] , unkR[177],"ThrustMonitor.g.W") * unkR[88] * (dyn[4] - unkR[59])) , (_div( (unkR[21] + unkR[16]) , unkR[177],"ThrustMonitor.g.W") * LPRES__cp(&unkR[148])),"(CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P)") ;
//[E-70]  PRIVATE_EQT
unkR[22] = _div( _sqrt(LPRES__R(&unkR[178]) * dyn[4],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-71]  PRIVATE_EQT
unkR[9] = _div( 4. * LPRES__gamma(&unkR[178]) , (9. * LPRES__gamma(&unkR[178]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-72]  PRIVATE_EQT
unkR[12] = dyn[4] * _div( (1. + _pow( unkR[9] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-73]  PRIVATE_EQT
unkR[214] = 1.184e-07 * _pow( LPRES__M(&unkR[178]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-74]  PRIVATE_EQT
unkR[209] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[214] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[178]) , _pow( unkR[9] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[58] , unkR[22],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-75]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[1] = evalNormResidueInternal(1,unkR[207],unkR[209] * (unkR[12] - unkR[208]) * unkR[5]);
//[E-76]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[2] = evalNormResidueInternal(2,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[178]) , _sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[178]) + 1) , (2 * (LPRES__gamma(&unkR[178]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-77]  PRIVATE_EQT
unkR[24] = _div( (unkR[21] * LPRES__cp(&unkR[119]) + unkR[16] * LPRES__cp(&unkR[90])) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
//[E-78]  PRIVATE_EQT
unkR[15] = _div( (LPRES__cp(&unkR[148]) * (unkR[13] - 298.15) - _div( unkR[25] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)")) , unkR[24],"CombCha.cp_R") + 298.15 ;
//[E-79]  (1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R * CombCha.T_in = LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T
res[3] = evalNormResidueInternal(3,(1 + _div( unkR[213] , unkR[8],"CombCha.OF_st")) * unkR[24] * unkR[15],LPRES__cp(&unkR[119]) * unkR[59] + _div( unkR[213] , unkR[8],"CombCha.OF_st") * LPRES__cp(&unkR[90]) * unkR[26]);
//[E-80]  PRIVATE_EQT
unkR[377] = dyn[5] * _sqrt(_div( LPRES__gamma(&unkR[28]) * LPRES__R(&unkR[28]) * dyn[2] , (1. + (LPRES__gamma(&unkR[28]) - 1.)/2. * _pow( dyn[5] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-81]  PRIVATE_EQT
unkR[378] = unkR[377] * cos(unkR[381] * 3.14159265358979/180.) ;
//[E-82]  PRIVATE_EQT
unkR[280] = _div( dyn[3] , unkR[345],"Pump_F.r_m") ;
//[E-83]  PRIVATE_EQT
unkR[375] = unkR[280] * unkR[389] ;
//[E-84]  PRIVATE_EQT
unkR[387] = _div( unkR[391] , _pow( unkR[375] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-85]  PRIVATE_EQT
unkR[384] = _div( (unkR[387] + 1.) , (tan(unkR[381] * 3.14159265358979/180.) - tan(unkR[382] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-86]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[4] = evalNormResidueInternal(4,unkR[384],_div( unkR[378] , unkR[375],"Turbine.U"));
//[E-87]  PRIVATE_EQT
unkR[278] = _div( unkR[280] , unkR[276],"Gearbox.GR") ;
//[E-88]  PRIVATE_EQT
unkR[349] = unkR[278] * unkR[357] ;
//[E-89]  PRIVATE_EQT
unkR[355] = _div( unkR[358] , _pow( unkR[349] , 2.,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2") ;
//[E-90]  PRIVATE_EQT
unkR[353] = _div( (1. - unkR[355]) , (_div( (1. - unkR[356]) , unkR[354],"Pump_O.phi_d")),"(1 - Pump_O.psi_d) / Pump_O.phi_d") ;
//[E-91]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
res[5] = evalNormResidueInternal(5,unkR[353],_div( dyn[1] , (unkR[347] * unkR[349] * LPRES__rho(&unkR[60])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void TRABAJO__RL10_alternative_control_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_alternative_control_partition1& m= *TRABAJO__RL10_alternative_control_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	dcopy(*n,&m.res[0],residues);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void TRABAJO__RL10_alternative_control_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[6];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_alternative_control_partition1::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void TRABAJO__RL10_alternative_control_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-95]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[178]) , (_pow( (_div( dyn[6] , unkR[58],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[178]) * (1. - _pow( (_div( dyn[6] , unkR[58],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[178]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void TRABAJO__RL10_alternative_control_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_alternative_control_partition1& m= *TRABAJO__RL10_alternative_control_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[6],x);
	dcopy(*n,&m.res[6],residues);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void TRABAJO__RL10_alternative_control_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_alternative_control_partition1::fcn2, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void TRABAJO__RL10_alternative_control_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-100]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[7] = evalNormResidueInternal(7,_div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[4],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[58],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[7] * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1)/2 * _pow( dyn[7] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[178]) + 1)/2 , (LPRES__gamma(&unkR[178]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void TRABAJO__RL10_alternative_control_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_alternative_control_partition1& m= *TRABAJO__RL10_alternative_control_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[7],x);
	dcopy(*n,&m.res[7],residues);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void TRABAJO__RL10_alternative_control_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_alternative_control_partition1::fcn3, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}

int TRABAJO__RL10_alternative_control_partition1::sparseGetEquiv( int nvars,int v[] )
{
	return -1;
}

/* Main residues function for this model */
void TRABAJO__RL10_alternative_control_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[60]);
//[E-2]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[239]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_O 
LPRES__fluid_func(&unkR[60], &unkR[119]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[239]), &unkR[28]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_F 
LPRES__fluid_func(&unkR[28], &unkR[90]);
//[E-6]  PRIVATE_EQT
unkR[213] = _div( unkR[8] , unkR[7],"CombCha.OF") ;
//[E-7]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[11] = unkR[10] ;
else unkR[11] = 0. ;
//[E-8]  PRIVATE_EQT
unkR[301] = unkR[300] - unkR[296] ;
//[E-9]  PRIVATE_EQT
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[316] = _pow( ((LPRES__gamma(&unkR[28]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[28]) , (LPRES__gamma(&unkR[28]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[316] = 0. ;
}
//[E-10]  PRIVATE_EQT
unkR[223] = _div( 1.3 * _pow( (unkR[231] * unkR[232]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[231] + unkR[232]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-11]  PRIVATE_EQT
unkR[224] = _div( 2. * unkR[231] * unkR[232] , (unkR[231] + unkR[232]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-12]  PRIVATE_EQT
unkR[294] = unkR[293] - unkR[289] ;
//[E-13]  PRIVATE_EQT
unkR[3] = unkR[4] * unkR[1] ;
//[E-14]  PRIVATE_EQT
unkR[227] = _div( LPRES__visc(&unkR[239]) * LPRES__cp(&unkR[239]) , LPRES__cond(&unkR[239]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-15]  PRIVATE_EQT
unkR[222] = unkI[2] * 2. * (unkR[231] + unkR[232]) * unkR[225] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,6,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-92]  PRIVATE_EQT
unkR[348] = _div( (unkR[274] - unkR[301]) , (9.80665 * LPRES__rho(&unkR[60])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-93]  PRIVATE_EQT
unkR[336] = _div( (unkR[268] - unkR[294]) , (9.80665 * LPRES__rho(&unkR[239])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-94]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[4] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-96]  PRIVATE_EQT
unkR[275] = cabs(dyn[1]) ;
//[E-97]  PRIVATE_EQT
unkR[272] = cabs(unkR[27]) ;
//[E-98]  PRIVATE_EQT
unkR[219] = unkR[272] + unkR[275] ;
//[E-99]  PRIVATE_EQT
unkR[210] = unkR[22] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-101]  PRIVATE_EQT
unkR[368] = _div( dyn[4] , (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[7] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-102]  PRIVATE_EQT
unkR[371] = dyn[7] * _sqrt(LPRES__gamma(&unkR[178]) * LPRES__R(&unkR[178]) * unkR[368],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-103]  PRIVATE_EQT
unkR[370] = _div( unkR[58] , _pow( (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[7] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-104]  PRIVATE_EQT
unkR[369] = LPRES__ISA_Pressure(unkR[334]) ;
//[E-105]  PRIVATE_EQT
unkR[218] = unkR[177] * unkR[371] + unkR[2] * (unkR[370] - unkR[369]) ;
//[E-106]  PRIVATE_EQT
unkR[216] = _div( unkR[218] , unkR[219],"ControlPanel.W_tot") ;
//[E-107]  PRIVATE_EQT
unkR[215] = _div( unkR[216] , unkR[22],"CombCha.c_star") ;
//[E-108]  PRIVATE_EQT
unkR[217] = unkR[216]/9.80665 ;
//[E-109]  PRIVATE_EQT
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[312] = _div( _sqrt(unkR[285] * LPRES__R(&unkR[28]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[27] , (LPRES__FGAMMA(&unkR[28]) * unkR[287]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[312] = 0. ;
}
//[E-110]  PRIVATE_EQT
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[320] = unkR[314] * _sqrt(LPRES__gamma(&unkR[28]) * LPRES__R(&unkR[28]) * unkR[26],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[320] = _div( unkR[27] , (LPRES__rho(&unkR[28]) * unkR[311] * unkR[313]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-111]  PRIVATE_EQT
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[317] = 0. ;
}
else 
{
unkR[317] = _div( LPRES__rho(&unkR[28]) * unkR[320] * unkR[313] * _sqrt(4. * unkR[311]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[28]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-112]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[326] = _pow( ((LPRES__gamma(&unkR[60]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[60]) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[326] = 0. ;
}
//[E-113]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[329] = _div( unkR[274] , unkR[326],"Injector_O.PR_sl") ;
}
else 
{
unkR[329] = 0. ;
}
//[E-114]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[322] = _div( _sqrt(unkR[273] * LPRES__R(&unkR[60]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * dyn[1] , (LPRES__FGAMMA(&unkR[60]) * unkR[274]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[322] = 0. ;
}
//[E-115]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[89] = MATH__max(unkR[58], unkR[329]) ;
}
else 
{
unkR[89] = unkR[58] ;
}
//[E-116]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[321] = _div( _div( dyn[1] * _div( _pow( (_div( (2. + (LPRES__gamma(&unkR[60]) - 1.) * _pow( unkR[324] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[60]) + 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[60]) + 1.) , (2. * (LPRES__gamma(&unkR[60]) - 1.)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[324],"Injector_O.M_out") * _sqrt(unkR[273] * LPRES__R(&unkR[60]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") , unkR[274],"FlowMeter_O.f_in.pt") , LPRES__FGAMMA(&unkR[60]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid)") ;
}
else 
{
unkR[321] = _div( _div( dyn[1] , _sqrt(2. * LPRES__rho(&unkR[60]) * (unkR[274] - unkR[89]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"),"sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))") , unkR[323],"Injector_O.C_D") ;
}
//[E-117]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[330] = unkR[324] * _sqrt(LPRES__gamma(&unkR[60]) * LPRES__R(&unkR[60]) * unkR[59],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[330] = _div( dyn[1] , (LPRES__rho(&unkR[60]) * unkR[321] * unkR[323]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-118]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[327] = 0. ;
}
else 
{
unkR[327] = _div( LPRES__rho(&unkR[60]) * unkR[330] * unkR[323] * _sqrt(4. * unkR[321]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[60]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-119]  PRIVATE_EQT
unkR[220] = unkR[218] ;
//[E-120]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[221] = unkR[272] + unkR[275] ;

//save last residues
memcpy(this->res,res,8*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void TRABAJO__RL10_alternative_control_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[28])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(1 == LPRES__State(&unkR[60])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[239])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[239])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",59,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[178])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[7] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[370] , unkR[369],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[7] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",895,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void TRABAJO__RL10_alternative_control_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[1]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[2]= unkR[279];
    ev[3]= unkI[0] - 1;
    ev[4]= LPRES__State(&unkR[28]) - 2;
    ev[5]= unkR[315] - unkR[316];
    ev[6]= LPRES__State(&unkR[28]) - 2;
    ev[7]= unkR[315] - unkR[316];
    ev[8]= LPRES__State(&unkR[60]) - 2;
    ev[9]= unkR[325] - unkR[326];
    ev[10]= LPRES__State(&unkR[60]) - 2;
    ev[11]= unkR[325] - unkR[326];
}

/* Evaluation of when conditions*/
void TRABAJO__RL10_alternative_control_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ;
     w[1] = cont[1] ;
}

/* Generation WHEN conditions*/
void TRABAJO__RL10_alternative_control_partition1::executeWhen(double *_time,  int index )
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
void TRABAJO__RL10_alternative_control_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Gearbox.m_out.Power =  ZONE (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta OTHERS -Pump_O.m.Power / Gearbox.eta
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // CombCha.Q_comb_effective =  ZONE (CombCha.Combustion) CombCha.Q_comb OTHERS 0
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* TRABAJO__RL10_alternative_control_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
	"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"Private-info"},{ WHEN,EQ_OP,0,1,"Private-info"},{ ZONE,GT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"CombCha.Combustion"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"}
,{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,GT_EQ_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"}
,{ ZONE,GT_EQ_OP,0,0,"Private-info"}};
	return evs;
};

/* Initialisation of delays */
void TRABAJO__RL10_alternative_control_partition1::initDelays()
{
}


bool TRABAJO__RL10_alternative_control_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_TRABAJO__RL10_alternative_control_partition1 = 83748;
static const unsigned int s_gst_chunkSize_TRABAJO__RL10_alternative_control_partition1 = 2000;
static const char *s_gst_chunkedStr_TRABAJO__RL10_alternative_control_partition1[] = 
{
"AAA4iQAALjUAAEb9AAC1XykFQpBJlb9Mj1KuRVP9cyaj7paJrVM5JFEGnWU+l7JkUbPfJnUSG1X8As+8RQrPeLM1Kc09Gq2w8y/bAtOXgo3CZVOk9qFwsAB60R6uNQNHnLsMMdKZpccYz7ydmIZBSmfAc0xGWb9iKiPmgMqW4rFO5BZB1A57BJ8JpAQOkFUBn6nMn/TfmPBPE2F4AvIN8eGW9bls67KDbflqp8n1Wex4gs55I7F1YIKPzBkSylU8nFRo0qw4bOE66HSFhNIz+MZIPKs/LFGu9VDYHHoNChVxjjpREx5GGnI1HrGiPhwhGPflTGpkkmwzcGAvLNpLsGWfE2Anj5s1o9URHMZraeO30suugrZHIYLNRlHKM9kO3qdstVrV4X0KQyuGVWqPi7K0OtV08G9aYnSlMx7fTboGqUfCuxF3IPB9Vq+DxGrs5zCP3BCBbMCth6kVTmJ4W/plXltQhnhO3PGAIQxlCppsWD4jAvQw//KPbgLIEASM4AJD5iavM/nsYxHD6TIodi9MdO7uFwaxGxuHRLNdjLh+rskCyBKqLnBFUvoqt/9GoCrHQSr8INx2PjiFdfHsxBlgfK3cQd9r3NfIkYG9NuIHdIJDlm2fuX4adpTLizmjjVwU0q/bHkGeiz06ak50CM2xBjGaUSvPfEHQQH9o1lgHWdes6UpS14KVXsY1/D9xcx57be9t8MXFfbJMrhQYNInqvMLys4peX464LZUSh9+4JVMdKzXbbIFwbNuxxTJolyssjPX37HERuyXNPnrgg6U2PdP4qCx1hRxt+abGudUUDx1WT8jwVXnsg9UcTdt9E6zWn/wbIhWH5RGXnVuIb16dTppU7SRUFa7B+rKZXY4JgZaP8KQGCLXBbAuQvXr/J2GjYsXfKg4AbgQ5f1ANKQiRIxkqENKEhzVOJzenyiQO5zc7qtxtHOcRfrLyn8EvEhQukPJwS6GdVqx/qGznnMLIhJ37/4F0f49btv5QrsSC7PljxkKzx3X7GhB1Mg3t737s8ELg8vfbpX1/s8gu4ZHcOcf2pCPMBHdcygufzac6yorV7cNvpdpUxh8nI2r1mwl3vOyqRwTcKPbko7p8+eNrxhn0JOz1oCqoss+Y0m4w06PDZHdKk2ssFzUxMIgoBNn3EoaXQtqop4U+jvgK7sXT9hgSJFFzBpNFaMENR2NNw0vyCB0VIwCVuT58P8QeQFA+LU360KsOEtA/RVn6jLsT7vxkiE25lbtkgfb/hG3jWZq3litb0JYkAs+BAd59ffMn5FezqsMXkopUtMlzp7nrbPShowjaa7odPGmPLtxXWDRHUgSaDOAfdVdqQkFRnG887oicYV5bZ4J5S+prHDvK37KTF3VpNKXhewmHKdlqy5HzJzuvWWnpPSwTUZIQ68Grf1u4qGJR6AXTzBpLwypZSET7oExoriJ9iCmsjL3ak59rAl3OrS324ZBnQSltxmcFP4qoHUzFSY4DkDoCPmzn7blbPBLxCPAqzLKzCIwBAMGIUEa45y7zBnnU497EZAWy++ZpbyzCDWgXBcPrcjSRo4P8kI4Wab0+grqJINFDw88ShPb/fnuuQWMFlXvRgO7y+7zeUZFZDDZBSzhHE7FT7m7Ld0MnGXXlQy2cBvGI7bk0pYtU11mA6hdWHURDT5c/wIX2DgSuWNIK8DBfjEIT7ZzqWoLDwEEdnPTEgpzruvRNU0liN8M/l+UAlR94bBCW0vwOrJvfMIQSu8u+R2IB2CEUfP7eu2SPrhrjmrj7+HD6sXKv7VyOeDmG7iYMLrgJKHztaIGpDIl/cnqBhbTFxa85gHuWpG37T+S9gPtTUouY5+Z+kU25eHGqmhFDcwZpvKrK68a/LFf9ZBLiYVwrqxrDcwI771v/tPvD14YEN64szWgGbwY7oRD/MLkhcREG8xbjKpTzQ4W2WQr+K03rWsoGdOrA5nkpoONYueW/G92PbCYmq2FRTmdYm/KdJiD0FJpaNVH1Bdzs",
"3gyqViLdFlpjfJ6dytiZqRPTUb6tWL97hdaUifQOWJRDn9Dm2cUxeHHVONhAaYkZpKEM7JCTPIblKMPT6U3PeZzEDBeAeIfaHRQ/XyPaL/5WjRTHa89VtEsO5Ru7uBE1BYeHiGUxS+fhc4eRX9qjhz7r1mBsUDtsFm8ahGs8eHATTZLhixugd/6Xf5zv6a/WMeL1KsOLiLO9X5Z3eqilMHXQ3lSOdvUozh82X/y60D14qAdeSBwMFaJeb6IMF2Y4M2T8NvIH/StjrHg1129EVwU6J844V2xCzWAesiYlxh/CN6Z98Q6tW7sGKbDh+qvD/28GO9K0Rhs62jGSmtCkBBqJTvawHoepoiVrQrRYZ5EtfdyZMA6jeg2bug/ejwgCgzY6HJK0G5Y4VkQ1CZ6JFG4ILK1Uzi989LOAix3UH0COeMEWqB7wUzFOC38W5bp3wB1IrxwsJ9Ask588eDtQMl9jny10JJemPGjVD5wFs8YmOtxEbRcGhO90U4+M915Q5G1K0r7RoTSLeyld3CkqVcAc5xajWWBy8kfJYGR3erJmozeeupTUve69q29kkJ0ivujbm38+GMwqr0kY25viQFqiCf1BirQ0YjUpWabsCJ5Y1nDK1/DQGcD1iE7kCjkLfvGMiHWGsFq70aW3QxVGZd12A4Q/ZLYVj1wwQFCcq9N37IUwAE7GK8q3ZFu9VeMI8nMNKI5p+Ja5Ug4o767d/jLRgBExKbQmSWgweoxTV/KZsHtkqatFKvmzb1OmdtuUGsX2D7n+Cd7HBlWIvATzRoSwLWHnu+zW7998nBhG7rQ1+32lfsnMHtSk6r0yRBAxZSkBBemR05JCTRucCmIn6Zg2I0/WiU19T4wlOENwvgE1od3BlxBrrjs38U2M5lMLZ7x8NSYVevRTAbMxNYbN6BRVAQdCWgl7Ccn7Ioq9lHRwoJCm6xVfuQByGhGubPyuqRL1V3xm2hfZM7BVUCEKFSht6j4jElAUhA0jdGAwctAuSbMisxtG5Xqnwlovi4eU7qm2OyV2qbuJ1Sl2xy/fEEhZjeR54SlcjumBRUZuAHmYhQMk4EVsCzZFHPKMjvVWNbixqktqAfBKQb0iYGYow8GzoZYOJZKSpesfoBwbZJE011yTaEhu/og9Ld9cKs99lmo0mPPdxkSASXOB0BEEl1vO9nI9ndOVOEMYdNAoDaG2GVqPvL14DI/TesBiroCnnxfN052Ct3QcWwrC6X2DE2yamE7P0821LfdGF0S38vVupZFxa602UFBqTCbef2TQCLgSyiyuA+zc2axIWxqyCcc/lAZU1LOOPneHshiiVqlIj13jktzr5yTj4W8iTAbQjYOGmhRua4oYusHUg6kHCXPWkc5O/okmCtA9siL4JB5X+WLQEw72MqYMCPZLAQGaLf9zkKlVVeNiJG8S0cj2Oc8SH9aPdQBBsrW+WARPGBPqUYZAZmPU1QwcPuAuv1Zs/pEjIEUn4r6imw/ERN6FGfgOo3UuUF0lX7w14NDAwvQ4OknYMXPYVvSVE3HRAmYFCW7kav15X4o0TFvcQ2ALEpClZUzxyXMzPBtkFifLPQeKQKJmx/+kHHgpovLLYodK6RTuIuWPH4TBHImLHiyepLWlSLS3oWwqr6ABDc+EsvdEmqJUsGK+tcDKtboJQg522IV833RiqSpLIdkryVUZUKk4H3tUeSMIRMiYObL/7aVg0a7gmPBto72QUQsGF5vDks0KKCr9XZJ+YZpReeX4ZDQXCpMnzD+gyFV6BNzsNUS67tsrsj0sIu/VTe3vNc3fGqESvQ++F0JDm2WadH5p6Ho06IIVEQ+VF9iFx+aPZJj4TC/yXoa2UElzqrS49k4xu3mblc8FsQPlm8xB/dzX4XEdYO6pwDqbSN4tz0HRr0lhDclfM0Ir3Oyt9ICbeyLSw/pw9P+A4qPpqMiTVNY9WudNTcXTtI2dglocYgQixY0M9gUjMp8xgavzMXt6H4JDl3eCNa9fPUyoTxss",
"2yS/lrw7SJhAAa2g6tO63H7BEc0WCb1pDbXcOxzcXuRsCp72bxeXqw2HatCHIRuDrkHj97BIRXEkTl1IM5jXzdGMg8Dcbu5T8bAn7j8iHUMnWrLTXtkcyXzJsw9gQsbcfunr0pEfMgI4Dhl42YobIFImxhWFvQ6YsK4e+7FJ19l9a2PqOWg670/ZiXrNEJDjBCfNJVCPkszDPDHPFkZXrzGzHEdgio8TkoZHWCC24oVQXRHuj4SwmOeqkRfEVKvBRJ54HdTJi7vYJyQJDzB6MJORYeXH+8GdL0NQRTtBJ1ENFKGmBM+t12sOerwKPpA/Y7XnITH1HV8gBd1gygltfJf/zYD0ljeovdI/AuZ5J+csmatcFvJuq81Y70LYtp1Zo4gDg6xsyWA1DP89ScZJmaubyERcErAEvNuOFHByTiF6jckuR7lEUW8ECzfPpL6dnXNcraFQH3aY5oSwh4mTk8nIJqrlY8RZUOJs/y6csH2cSRfu9JkwiW8hxUz0ef3wHpnuRer1ZkRBA5SQ3b9MIoJyUnSqncVaz64onJSDEAb4GsuU5YXSW9mZaILhyaZPvvQwk145VHjEufsk7yM8vsqzAZx4hx3nUNJhLu9/22NOcxkn70N4ztxfXpzkwjdzXl38EfC+0bsubaXuB8EVtNVxRQQt5HTcJgtrmq9c0/QwSp1yEsiR/ZprHTPlMdCG72ducuv69uKq2WNZyxoC5v0a9aAbTpJqr9NN43pDJbo5W+/VprdxtcEOzcvAcANt1JEubRNW/+CB/b2rudkHegrxFn/xgXd0/v0XqXi20KtaMLwi7+QDDID82JwpL2QLEMGW7C4+ft/VNBFoaUzscjDmFrZz4fSGQc54KTKqxco6H0DHcUgDgVefEYh+kOz+aC7s62U9AiWkNT+eOCQ+5dQZjjFdhZ4BS/UTQCvcUxrbcfLqDPCIjJAXKaIZEsNiGYMU+pvvsYlzFv9F3969E9on4qCFiexSlPAzK10MHWi9CQvR/8zwSITiTZrmK2dYKiSDcLJaD1r+vZr21eG/FEyMO6bvY/O31UsSifKA2buRqXaZjKt2vJlSwdp6IXG3jAgLhI4GDeY42P1/NfR60V/iODc7xN0Quf3EwHacsaQqAgiuL1yXZvdsrtTuOvE+PEQfrqkaj3upeDOJTHa7+O4ON5ArXGgkmMBGGSZiVOVIg/X/f9yLqNDUhVawEzRAQAVARM9FnwUgh6crCNKttnS8vYltZmDDCFKKRl+js9XIIhS4j01Ln6SGzuFloyN++AUpxr+b8Q3wud0BmDCgBlYm/HZyVoVVdZl6cjQ0gRGHP9bkpllJCWvOLwyGs/bFHSb/fXDWCULijnCXaDoovV0PcwQM9pIMZJHmNGVifJQpMbAMMvw5bYpa1Xr55KgXkfDMzuK3Om4SZG5Ps6Ht9m/1shdYxjEcEARHFTDN5Y53ZOpisHv0bItqFPNYGSoT8qfT8pxaBSwaiUc/O+GnCjEQ8qE+FhuI69RZfACKV0sBB2NFuXH5DMCyp+HJlaivrOVOUAd3SUPemU/xhEplwyQxmX6Mvj2Dk2/gTXb9q+gyZZ/AZclsa4l1Dzm6Avip4TOg01YoS43t7xwJBMaKYk9ZY4wpxNRqwv+0nCIAD0hi93+hS6Yl4BEkIOfBvH4DRojXEHrB4I4QvHTtUoR5KrZAvDHczXtsflrRhScRsapfIwF3XL0w6VC/MyTJAPbehV/FARMRRHIBjYpFihPeSYqG4eER4rrYrvTCztnmMuXzF8jULCIrgPR9b1joz7/+nV9qnPuYnLJA+wXtz6RaZWj7/RVc2KXkFqgdFQk43saesaAo6X6E5F4SRU/Ln6cWN1TKJyP5Qss+Mh4E/p+CkMTctXxZBz0D22PgHc0n7LYJ9YJwz6EJjBQKOY0Mi7rL4e3z0b2bZXuINQ9EMGngZdOyXV1HdkE6+dhgxhCwMQmJNOPU5xbLudTXM5qe4Jw2oFJ9rbr6fS/Bktdo",
"EdhjzZUg8x0qNViMFXoOsFYlDwsljE5gjXMBp74WCem6BjBvB5QluNEYXHH1x9qiNwbDnKwObX+mUkSK9S86drdY3PNfuCV/hVkG9vBBe33PHeCF3gOJRJ5KM4JidlcPgs1V2AsM1LTl+D5kpf/bCxASQtiz3NlGqsPX6JTkWLSqiekkpHBX/+mLh065IS4K/IfTgH1TaOR+oa1eFpMUuTDkrSAO5ekBtRZUwUZBgw430Bl+CBisANMrrl89sltodp2Tt9FUko1qB3MtMZccXtJkyxvgREVuc8eyXk4vVCNlLqEkm57vi3HMcC5UkSin1F7simumrEDDwzQ0VSohKAz11W7cn+U+P/A0k2nqk8LHrHFkCKwJ4SAzFTWbCfczdVGYb2xzIWK1OW26ts9BqbQ7YSUqMVkKXGg2M4MS56XFnORY+cBHNxcliQYo0x89EJtNe7SsIE0qLLX+e0LTFqDI/hcF6drEBHUpweFWdlngrCXYCBkYQcE4rGrxSAllm16gJhFrHXRJlscyCUZW1W6KUNajP+c5/+DKEfqRdFxLKF8th9pCwMGNJWSKN2LWc+1ZtQ1Ns3TcNimAYQDan4iy+FlQRSU7Tk++h3cVtmDRvqv7IAvanEZ5RYcp9o0/14ubTj+8H7s+dbF8gZu1X5pltWJA/oqUCM5lUiXPuuaV5+SFWQeQBVmbysNeoaxEAVJ9TFj40sEJcmrJ1IbiQuXJ479dig+XZjv/wgJ1CAFM+8PfdMZ6rcPBiA1jN1MUQXZnlftPMYvXdFXbQuSZ48w+ChkP2ziMD/qrKUQFpz1ft0rL7sR8BMNAbfhbwdrXeQ6IJpHgIDrBhKYTAv6Evhm7gER/sqae1XtptAzWSYvBiHeBNgm4jXbYVsaia6hZhMgLiQgvytPYG7DeI1jv5cTT6AIBL/UJJO0b2wwYToHpBcftTlyxaWznZA4EX0Im14b7NNAy6okOnrnH9NFFrwA0I5EKOsrWS5HZrVv3G+I9L6F3LcVIfCygVigypxX6yBBPwI6cLdZ6epiK3lNWriGsmTIpjIEdAvNdhbbdAek+4Ngsjhxy4ebj8aRKgqrmHk2qSfrKnyLK/KN1FlJ0ZD/YyOPVQdZJCKZyA4O9cWvNdNWB6kNF1q9bELXwBnBT8Jj6GtszQ8hGbuNNuQXRexAmgajTSFcGwSgMvs+ecgQs03A/fDeWqh6mDKDhJN3EwPpQnksKgCuz9IUHjj3k1vw7V6VHUg95kHksxNGGB+q6jVZJbYdKgE4yHCRWXSBtVKkcAxvtGL6XrVxEGfwCwe6V1GRcClgT9GejRgvTmu78R31F/Ugrarw/zvfREiaiVVBthLPb4wKNtyjobsPnEVCKJdofHpj26xI1B+RpnQGfme7BJekIMtsnyA9NQrRyJl3kuMW7cVWJ/Ug9F55jzh1LYwOYCk+qdBIxGV97vrpCMu3TwUJ8bN7atbDooQdy0P6srfB9kQVW2QhgQS20/m2YfWTuSo029D8yl03wUPENeEbqtOXIjSNqREiPYJEhifnCWVio9hwMWAUt19JitXgRkYwXfnWmzeeE+LpIslgxKXYxsp+Ta0h9MlM1o5vPhx6MBy6FiI6UjIv167YyZmJzgJQB4r/dzay5oN1txi05v0ZD3dgxZMR+DXYH0f5uReXQSxROOSg9t4eIxSNSRpw5PcRoB14xM48AgKRO4/N2fD+oID42Wsw79ow2paQBh3c1VGsjrTHitorZj8MgopqlLc4Dfbs1vltBAFZ53LzJg7Bu7kfcBG2IS8bXDc1y5eQsnHshO9A3ZuVSqardmP28cJ7AARH9/SwWSqhqvJnPf7PR3R3Zi4n3pNo6gIuyg48ziSZDmHjtPfjOxtmZHWX2BDljJwbeOBzxSZRV3JlX+CWuh2qmIdFDCwhqbPNqFTTq92bVG1bEBTnlQrciQ9e7RS9JXCXdYWKvDmwW9sKhbOFZ4qxSLy4s+Nu8HAc/vS8QkgBFM1l76w46",
"SUz/LNjGoHWWl+hOadYKoOx3QEPs/kEIvjyWe5hQd905I+iswIxmRTibSgh4+SPAeIH8YKeDFjYQhUHrQG04eVWfIjwHamQS2+w6kitLFr8Es/NinZBw+sj2PVTX3phOl/05VFY9U266RsC2CI9fOwlOKwxWf8dIxgAAgev5BLXZA+7THfRTsv8LljkW8K9ah1EqpB6lLM1rsRtnfYAKZuQmKFwxd9+1ZQfB2SPWk3+cphlgmc+qd3Nx1VqccLwOrZ7wodH7pPjD2CdCgPF1E2EuGQ2qY8xWL6V+jemUMBqJxw2rvnHI+8du6ThPGg/67RK8GQvONjePEB2e0fPNQZcDTItqUG5v7Gd5Udb14SgSgwaXHF+HE8shp5WFEY4dwIjhNiiuqkXCKpXSydAVlG3TJXoBiTStZdZEnntGRmCBblM8CtxK7HvF9w2fJrOh9P4b3NoX5lhZtjy+RRMNx5S/r1DRCzeksT4WA2Z5H6hi3XX4dy6fwDTmtm9RJ5ssekglECPUCUvD1lDjjpXIfC9Xl3+ZzLD0QOqkX7LT+85RRLYKIbwrl5pBy4CsG+jD4WdihcANo7HARM7TmRRRgeMhesRTOToCK5YCHFtQaIyyuzaB1oWa81BjEO4h0IzwFmzbhLTS1GWqUv2ge5lzbC266/CUHcOs1W4mteKfOWh8cULCLYfd0wuYVnnOINTuL52sf9drsX6y7VZvz5eBT6cKj2QXgdXKQXZ5fcfvUvT4QaVQCgHJi8t0NqRAqCpxZr8THZak+WPz3Xyqeukw7AwRcYgADpS3Sw633gL8OMC9u5Asq7aGrJV3oKahZrN52Qk5G1HADfLqMsKYRjl/XqAkVdzUtcggFEPU4vHQy1BbvHFUpsmfbaaBy5OPFVQkFkb5jfIzIsAnw01GKUKAvqNNj+q9X6p01r2q1cmZ1620dz/8F0nSQGGuzMu905hXMHfDwQGEuV0o8FGFNV/r/HzFlDKmAlPEeNcX9Lxbmg8oOcN7ULWSq3Ypw0nvwbs1XFDf1za2DY3YpkR+7HtjotzrOpLVg0b7wI0GlO6d7wnkIWty4Idq512aXA2BUe8cGS1xMWMPt16mqzCLVP3pmg2Q1apODAdKmZHwYocEBVp3LSWTebfmB55bH6JEJcjQ6OalWzk9oxsC1yjPJRWH2mvs9sTNITHcxmjYyzmi82ISHfI3xwNfe1+ilWXoM4oxoB7IyvdLJaKtLIo4fPjPWS3+SZkfCag/5G+ldFjb75xRTO3I0kWfvoXrYobCvl4trLJ/+x7gJS7P8suFe0WlySfh8VuLGhFjKHwIwSZJmA9VRzCWQBHUifKEDwXcrdIzSClsVrpCQxtZwz5mPlrEHg5TNgKdXzNO+W4cJq8VIqSmhl88VKF3NOhE1MTb0QwOk2v/s+8LN4gQeZ3GC8K7kZEP7gGSLNd1DQuAIqXE+cN3AUU44pbiU692i9/y9AECvGeydSGkYSSH8tQQAFIZYNmpC9vA/csdHI+41CdoWPpXH9h8r4jCmm5wMGODBQ6Ld+oRvvc+5fqGFjUix+Geq84t5IXneLIf+IhJ/YuIpEbASwBk6Aj5Ki/qOWYkz0rhuakB2CBn/2zha52+0jqJTJxe8xBwHlsF0G0GWLUdhwCwwilJCro8MmPPSBO7Lr1tAOCZe8XMaAPvJ2qWWHq/NHD0U/ypQs9amihk1rHlGk0oPeMAnefzV9oG3Sd5CN64U4jvaH1BisgyIZVFdKUdqXKBfL+O77RFu2u3dod2GSWU209UMXGoWpFXrgXmnm6gVk+xyUFIry4vdQp2eoljegosFlV+Rgg8ttrmWbzpQ9vha+1yD1r6RM/+TSdxUFaEvJshYbB07pETMF6eYduppEL9qCEPi1KKztPQ0moSXz9/m6ujWgHL8sGAkshNet5Sl04K0BHvaOEm2m9gq+O90u2PSKTETlu7eNI8ag8gKSm/U7E4sOrVSuRd4EZo35MRZruNzjqU7r0ZmuN3",
"Ie139c0/mIYdUKDp/TqP8sVWk4IMTOewBFx4hhTLmiKRUcqqIHYCr0ZjUqkorxr+EyecR0iNRanHzu+kd4FUAi6Ebnn2Hkh34yKdEquAyH3NVYWDDyR6wXhT87g4/NnD2sJjuYmFuquDY3KBb/SONhIBhqo57quCFYcuA7J6FdDHIcCzw2wyXaBULeGbvH2slekna/eD/XSToszUvChfsr2b9D9fyGSDpJoWFYeMtw8AcB0RcToCJLCu0ZAHBabzAJ9HIAMComoqOQeRD99lWR59ejvXao6T8YzqEMWIu/VomGAvBgHmEm8YhTICWCYlIJT4KcWLbGPtLSev6jBnojOKcaPAb1F8/vrl+FK1yifCwhn8gMiMGl/RteB8PO2ADAstGaWbiSHhlIvQb4dHR70U/qg72GZqN1FeSht0x6rx+VVsRI8aFj2/7FgdqSURqiPplXwaVQme7w80P1VFkVzZUE+PMXEtaGCp/MM1+K/YsqtqbndcIXKD+nSH5hKvxGmk+xfVglLmEZQkj34ZrTCbkqJPmVwYw7wRdJrok39sV52Foz9DFMeVVv4w0PKtN4CIrMDYhF88TankW5iBmFuHgZ65XF9b1sDSelGphKJM8MZo/VuMeH0WVOAwN1XOl8ENqPKcOkxVtlHPrWhDCS6VQrHO7HT1IyiJH6pQub/yzvlVKNpEFQqGWFujW2r1065DAz9CZGvDOVuHOMHMUPKzxdE3KjBVPJ7xbWreqNuILZee7c4Xd7pk5b4yQ1x9E3c/R4IPB57tHz3KJlBlrKzswfl0o25wJPjAHvvqiCaL7CPimdqx5vmiEG2bVR7RC2bvSJHbcKQIZAIRwkbgeD+qwjojBflqBubix5tTjZeULDZbytlrPaA0+F6Z/OTPU5YfqtdO/Z2fvZtlXwD5iFp5bBWxV7vbD56rDfCSevGCoF1mw7hLt8g9a3U/qs51w4+cAZMJIwNR1iqb+F9uogOLwIXOfvSOTaKEVV74wiuJv3FJrE1Zjb9Ux6GquuxlQ0e5pNYgYwnizfb9UIsuiRRFZcCkdWZS7SbjMYzvWbG4hUIXTk0GV/9E5vjNqwFfrrc4Otz/aowf/VT9wF4/6b9+B05vl3uvsa1NkRdzTMmB8q8EcizMKw53nbGHx70DFjym1ALzfRCA6Pie9HbqbOUPahM7FAO7/V8sSX+WV+qeaegqgMK2d3eoXbYY/va5044/5+d4+0DXrtAIk6rSrs916+p1mlf/j71z+P6SHD8DvC4gnhFAUDlGxsdrhQgqcCzqvoLvUno5nWn9o6X81p+4qQqRWnIHYqf6sI6nhfbh9UDsZADKV2uNDe2zJ2+hONp6k3Xw49G7jSXtRLDUtOg08+4KZD+VHNjNNfrWFdzEJYCCZQlMRz8VYIFJ1LkWiHjt920Hga3WbZgdWpzt8wmrU8CI9XguyP1dWzSm4MtS/XZTdhnIgZk8cwJF4ZvXgswCGjZ5uha5Voev8pi4ykaqjnVeeDB0PVBoWbkOBt2M40frvmit5g3AiNpthi0/tz9ErxtkFIgfMou7UWMZ4cftJ4BwhB4X2IXKiG+BA6byWl+d5+PpWZctrthzZVTijwQ3cx6d4hYFaOurQXkc9gZFDnHmJaMnsM+ZE1HwXw8HFGgRR/7yBm4d+IYzAmCVsdBsxgqezKEJ0TUptDlcPjfInOhSJZmH0wQt25DhMt12Sy/Rl2CafZD//bMHPERzYMn9LKf7GVtXS1WL6S1dubRs+Hwz7f8GdZ68RiWg1KCs6tNq5t/JxAY+LNU6gGzQaPRuSZNaWsyZu7o0qWrqcqyEp/VW1dEyvAYBjP9x4s8cIdFo1pv2XvZcqQId5moJYLZj2M02343A89i6Cs0hRchF3hQIx0jBt1fDz7GO3KLZ+ApcPvT5XTqBfUTlMgmi1BsbptUIFTKkJNhdDoEEnb2Na/0bVx4YMS0/oVK/Y5hkbtUbZ0wZm62HLdf7+qVGbDk3J2ccAKpb4d7Q",
"o6C5LYh9MJ0Xb4t8V2VpDOJ97UT3YNmJ2UfyfP1oPUfvXc5rjbi+qWVYxVlSRaCmNekyu9AzmJ5VNlp1mKhmfUXkAny4sy4mb97aCO4fvypLrUXB7NmoKq7l4m0N0nFX/grSbnbu5rI5JUsftn3ktAgQnWoayAGNO6SNd4cEJAV9fEJcsxs/abhvsxoAOWgMT9RtUuBYqbk8+dFHtPkp6rnN1yTY1Ec6MV2QNergBw457cn/1RTE26ULuLz6nG4C8iXZJslcig55nkEs8Kx1+rblQhywLFuQsYOP7Tgwi4BYQ2yNHKS+GbJWXavlUIxYUsf9SHxMOMw7z16GNMKeyH0uXa02QUpoAw3uaKX/MxQpRY6nhPuvSUxsbxgY3zTrCeobsHggBzOOUyHQ3Qea8abIwXS2NC1onzSJcZRN/lsFixg7uHR/ci0Gj5YBVcwYqXoHxUNhuW9PWV4rvbkV22E1Nnw/rPDvwDfHCLfthzAsihsJSif14NfEGgJTDHL6HB4yznYpcRv41+73tLtOdLfKSfaNvzaw1pfWKvmU6PSzkaJKrfaCiH9KqS0EGn5rcwZ+wabG9EyIPTFxXfjde7QD1E67rQWjOSDGaXUnQ+1+Osv+O0Dwf3vcsqGCS5cjwuwjZqaTHOn9O5lODmknLmO+0uAb1qLA+JiMqzSMhvzMHRlkhUOGluzjT/agro8F1xGggSEJlNeAcwO6qi1/py0qav9b8NiBWQF1i+00Ql41h7KbRteeF0NwgJKzJDZxiL8uYtWqzxmA8ujQgV/cS3NB0p+E5S8/F0KwG0OCSthSx70IQ9UMaQB6RD+aFrVbrlGgBXmXnaWSmMbtk77EzWhQEFWU0QsoeY6ZsNEmgZoDsBw6gQyNJgQqCyeqyJ490JG4vKm/AVYGHNe3jjmFRYX8knRywOckpPm+dKrWxjZMcvW5ICDxDTMmQ7QhlXcv1QnKO3JGHiaKnuiohfunBrplnk7txfybuH+ATI1lKDH98M0ZHMaj0+IT7pSPaqH2GRM/ZFgyS9yaHZspM15xfPpYZF1BpaGBP4Wf56rlgJN49Y93eNfQRwqq9CggH0EfCTOhzF20zwJKfCAtLeck6UDUh4ugva5BpnqApLXzbFCVRryMrdyUzM0aj1KMqCnCkeXezXbjQ6N8nKmp+ZHp9OSij3arIWoMhSFS4sjomEKlAqHDmA2Xbr7fPaI4HAhWFOpUSk+qmnxDy9JIuo0ckj+a50gPAsabvvoenNdixGTgdw/faTMB6DLL++UgdbXPN3+atrsC+vTR9tBpzK4COipef14qaP5yFvW5r3OcO6mdTswsFOjlqy1VMHQzmivroEKQlhJzz06yKwFyji5T1YYX8J26CLalWCGSfZ7sU9wLEzPBF1mBn8T0ccUB1dxZTXAFLHfUSwf7mSomvOTW8+KBqsOm7GEU51DCi64uc+zKkEbecasouJd29Glxv6XuM3O1T4NxuavjkdQTQvvQ4HoNdfjenBSIfbyTU7S8DjXalVJ6kOp6p/Xz8MsIObXsd2iyk69XPh1J/34ehkiuFegCJQYLA9taXi3eMmtO2D0cxD9kWjunVUlII2ht6A8bfCvndGfg05CTq0CfwFUL0M7xKiWbsgIYIOIxb/eSOjaSmp2J0mzmd9htEmV/o5/kqUMa+Sw+g15x5A3jlK7pF1Raxa9RF2Bry+dRQscrQPzU3zoi3psAeaFjwpYKfQA0k5DPyEuyf47nQoPwfGfFebLR3ImmOJqYMFR5XoF+Wn8lmUdkhvRVe6kJqsXXXHGvpHscDfAjQmY8MvO5et3ggMhlFNOFwd/6Yy5gBXTgkoese4AAU3Po/OMuz44RQoilIwmfP3zntgoEhvxJpIN/Sr/bcmap2fRp9vEoJyV5IIv4zyay267VtXCn+hRyGK1ksITgnVQbIef2G0vlZvn75GfYXHFUgDjjPYanK9HIx9SEDs4r3nmZBqeFvKA8LkgD+5mHL5g6C/jo8lGn",
"I1BTWQpUW3vh4x1JjXbMhOOMBzBh+nQeaA8CraDT1ZGXWEiVqqPKokz6uK0y+MFWfHK3+c+2kGRDDPaJSHLxi8WWii2D8WJdWELx8aJOqy71WVim8gOv1DpIsGbMqWtei+K6Gn2edh7bp1o6necPd7izxKMFfWPtjkbqsdUGcRUqM2yp5aK2TGS653WKSQpxfJF6hBbL1P/XPL4JAantkBnePKfHQbkMbOaZaiR+HrYG7IyjxUM3Y+7kcUkwarkG3PgI1XnL1dp6+smdaQD49cgj6amtKMzN5ur6/rDfid9eOKLCoNt97H2Xcxy+6nbLLq800yySqnPSr5AzjHLJ1QEDp6dGHYZSRB6YH/bAz1UMaVsUYhi4Mzdq4ybmofREKdDhwSAWvMjKearQTQ5uPAaOCQPLFE0O8GgJsxh25oqS4JM3ojufQj3LmMHtV685xIqF2fo1UtIvLpF7GX0u2bAvJX560MI6K7JeNAaJCtdnCJ/8SIUR6sSDftz4MP40Z9iHH6vS3ZPdqE5ZuqGfguQm5XaKKvyJz2CTHq2QJcEvFQDwEW580QcSjndINU2kBFlgcXhGpJGfkkbcn0r/G4qRHH/dX2eSTpDzTWCQFD1udgZCDwfjR7nUWaw7EEcGEAGK3yQdDT3T1IVt3vuhbWfatTzK/Jok/yXBNPYGgjoa5GtJqhhT+69gVArrWocU95mmUaF0RRN9Fo/BDY4fm6v0ced2ocAykOAtHeRC1Zige68QQrTHUSM6yeALWJ522gGU7UXZVbj6uN/pNcZBqCx5ROkpSsE5wQLiwKlhW3olWj/6CWj71Cn0mZGcL6RLTzdu+R0fViTOLTTrWIlCGhFyQMJO994kbsfVrJ+rHUGSYEaCCemI1Qh29GwsXFC/3qN0QT1CmgzjmYaME7lbqO6dqupOqhC1t2+S06JIlxObMhogKEDPFZwY5t3ffbh/ETomIG4jGfLesnyj6GLHYxs8ZUghBdy1oIngSL0f8zOmUzYdsFN7btAKfRTrD/2PkIg9Xd87RjP912xsRjCbBFqXBuFaNLPpJeDe+0aUwN2lil5RoODR03ypkXhdDYGfarEQKtFXYRJQx8rsSR5Hnex/k6Hh3rwH8ajXTojp29TkdQLaFDzFNkBT0MvRyPrbCf6LNp7j3rCrLsSLApo3Ul+NRMQggUFWgEmLtTikmqZVjQgiKg5mVg0bl08RMf3tspxi808y4CYLWy1SQao3WwUL0leGMwh16uvj5CDuWTsWoySCdQYKp9DKWgockNL3N/EXTSg3cfWM+VwgHwXnpx9qBNrHdLdPe+NxgS0w1JaQgrS4uj4Eva7GOp4XlEbqGPZQQHMUcstamGzQuO6KPBEDEBFY94DjF/2n4MPseNHRxbn1vtg0SXjVzEZB9PlkPuTGLirjbOjOHSsjFJiIGAINWtFm9xRXx+WB/N88N3K3pnLYMMzZgBS5ACqMWSwRXaKuNjwWPG6DBFl+cFsqLxdZ6upm4Iap6g4X7xqXMNX3yNR544HNy0LvvNxEjL2mEJnDELoN0t1IXlnCVhrCOKxugx5HeHULqMRup1viYEQ2nGNsa3QUQHTsJ3vZfMbkyE8N4iRdGI0UDFytgcxTx9ZSaEIqiWH9xxIRdWlVqbTZTdQL+bSnquL1da2N4ZOnjHgSp3jdJ49mlGWZxTSjAXtVNHyTk7V8pdbx0Vtl8fXLFTR9KPXYDrqi4HC1z8Ic3X1hanLWLqnH7N9wrLNzOeNOAKqxFk0i/eI594R47dWhBe69wis//iEw1vwI8nJ5iDsP67LlieBDWxMQKtLg+Tn2MEJPl5gJmWPpJ1naFqpSeRBfNNAhO5IE6ILLQ/oa/krLAHHeoaeUDSj4/BamZPlWpr7551xPoVCVsL17pQB//SFltlrqpUdZSdcCuZhdt2eiEnDvw11efJjvMx49vo+EgM3jD+Vd0RSz/WHDg5wFpc+S+IN0ZI+1Q+rhu+/WoiqMHZVyqh/ZT7Ov",
"H9jPI/DojwlTH//T6HmaK6YPVqSz+2YVqT0gUGRyLTLUtbb6TZK+0Ss+bF6qWD8h1OstH0aeMRCYM1TrWCfEvL51GQ4sQLBiNHFJYm6Zr01jr7uu+KASZ+OJ60xHjZJUCYg2zKJyE+h8pkHOOV7o6BgGaCYnE2uLx9vujFWUteMwNUbYcwWR1yzZ3t7uvqg6PdciVW06BQG25Ofd6aLN2LGHP8GowH53QjOJ910cIj+dFaZp3ft8byXhVu9T36RxgzRP+fNwgMhd7xIz6hKZYBhVbi5E+Hd8Y9edSk+8lR8V/jVn8glimX/H+X9eaWlq173XdBYEX4ApospMG1u0VAcFtIBEGIUH7oUzgONztswFu8ixZwxyXTeda5AqIAPizs/Et02mML4Z2r0b+AEpnbv5kCg4b5SNRj8/7VIbM6bznb/oIHc6MXgpnuD/94hLql1z39NuM9uhaYXjt87iR+3mx+po5k5MwqQ+KpQ/hGQA/jL/QJehvRoaIWloyvL3g7tMKR3LcbLKby8TcyxODTB6l7oXA1u3+XztQmHzbcFwZ34v2OdE2wkqWPXar1Pzo2I+9ixZKw0HLO8W7F0avi46nExyS50vIh7lzxkKE9LNGjOURib/9GXqnAEjgMkcHdQOqfDTqtdmb9DwlSdiR8DbYr9yhk++505h39OnqlUGiei0WL8dD/ikmH5EW86cX0yb1PT5p/NFAbgJ2XOqKzBYqFihbNoq9jLyyTiS2IEevTJMjkyTICuw2Tzl+SK/tu+dI+AHFa+WxTRWUdWdmLnuwiweqPRgZNED/j/uBLHh/yNUemInDY77sADeeyWx3dDLbpW8RWvtt03A8t3CmUvD2nU3XLN81hCOY3LPD2EmAi3eWFdDwPxedKPB+r08Xp79MPx/N3C1Cy79mpWzsOg0tSq3+hx/IUKtF7My9GpDBg5N7JHuSXfrvprSHwdvPrW+p/1yB3a6+LEMd9Ea3D4WsdKy3RkyXjCdVSkO5uKHCkQzwFROSD8loTuRVROBkmbeJiEFBvvCCUPqs/88eNbICosqHaoNvAG1qq7bTQGZR65oqCI+JHA0OlGMg5zm5v5kRz+S8nMcaskZyoq8E+SW5Zf7Hb7nfhF5XXQ/2YfFaQWFOa8163Sb7zRBy9avBiAhnAuTdXfX0ZMtoEOgaYOy71X1K0QumLdGbYfG614JwZwKpqRIelzP3A4ybKthY0PObNrXFGzvvMuJ20/kcd+EKzee+jxMBYRAQ5Lhkf3NhPtKNBw2ZvvygMNZVle0RPXGd5LppoxXOQ0+LPMr/elVjj5PGc7jv2tr5HKypYPGQPG1pD74BBpWa0ceA/ayeUpgQWUQozHi5o98ksY30v8lD2UUiBD1BUxNDop3SN6+C28Ylthn3zmSRVocRRQ9EwM/5WA25/Bu5RxzQmhr6vZPzQhF9/2e/CFghWjGDQQ4teojVn8F/W+6fc4Uu0zS9g1eRSTeYcnmsYY082Fvrvwr3suEHgtkJ3NHjoY0XCSWwSiTdQrkC/FYK8+mfhcA+hQPLBwTFmCYWcZaKZuScQvwQvmRWmrOSYhFTQ38bYaSugv/otMIHgxCRQxNEqjNLXzCko5Po+E+2cz0wfGGl1WFHQQssF6Qfj4hZV9RJ4WrS5PXwz3UVQEOfddUiADDC6mb22vN7R9xS29eYEg3ChdTWHI1ZHHkgtlEc/2uALnj+aoCR7KhomM07wjnXR0N6QNfE+s/zk8DfUwsmmgHVKf8cyCMtYuF7TIwgInCilqJdpHiRHklUcnW+gwKqk4Fu6wcJnrW/1z56aJCux12FE+aQxEMmBOx1uQwUQ+w52g5gsLSSHSBRIQQHgBJ9zAaEjOyIhkxb6vfgjCqxM+v/67yaLCnmwuxMmk2P1cm7cqju0d2MWDz/fan759twpEIU7c7KovcSiKdJrPqmQWIjBuiDrWilKrfsGlwS5UGQgs3+s62DRqTQMXDjrW8asl+ufAAi8IwutV3HNhC",
"Up701aklevSIslvy4hai36/o2iYvbDRmdIcE2lRFIk84QO6oz6gXpFXFVdwHK39lysgozd7/9NG9Mbwzj4XtTGAm9EFo77nvgw4h6gNIS1Tox1/zPuPPd+Q6b+YnsOcpgdjqZbux8F4ZJ7qLeunG35AzwkgnM3CSbJHPKg8yVsZ8MN6U6UzsXDXECcW9Z5HTH/AKSzhIsdvb/SJ/RkS13h0agbDf8rxYH511RWawqWappAarp76MnR30FCtOgLgAX2rzUE5zq9rbjyCfbaxAQdOd8zJZH3F3ot1kCOBzrzNcOASkZ+9F7uMTw24e3Kom5M4rBXbdyym6N1LCg9Hl6JWh1kFb5OtRFfIwgdcIql6JlSUaod4FxzJH1i/8xbscu9N9mEQQplCKSbT+1FU39UbjZCG7Lvgjhu+mfSjOiD8eoDDnpA6eJbbsmh+a1Ltg87VvslcHflTGOSid0nJrgHcSBRD+nvbfGDNBSDt4dLCCEtfndxgrfcKrEQat/Qg5HrpAQZqVpnlHiXcZg1wu00wrYMRYYqNcC+MsiqGYZ5QQ3NMk2xipkRKAOeNxnV4T5kCgQdjoB0I7NRrFgsO0XWRqdnHmpPBquKbnh96nAlUV83v8kHLp5zDxCx2Nnq8EzX4ib6O3B/fG37GA+My996ZcPznxm8mKNdQGdCdxlxvSgebgfXRfGKGLdGQAfhRS4u4n7mvnzVyWL22pWG8dIGYoXohDTcuswD1Isz0bc36rZ3rEOvSpeRgd93fNAfNxNwQ9LKeuzP0SoVhVfJz5PTw3XKwoUhpKSnojFALErMbMUsAFSM7cI/90WXV4xGxejjc8B9HTlkfEYPoAIeadP1OjaKGtfUpjgXjTjzxPkYhKDMTkhLdrdlePh6DUdTxLY5MX9+0oLVULLb6+C3JS5v9UIpstJPDV56yE9LKKQOUXTM0NM61B1f20SQsDp0lOVPq3jPasmdTc0SiHA+3/MckBdYAS2SQqwf7PXI/0AGzetxUrx9HTaDYytGBbaG6bkTbCnOqg2RWk76UABV5P4ma5XeB+rOBJ0CpcpwE9dM6r8prtghH25YQAqOI+RoDjsIz+u04rEN8E8ZfEpaugWGGbXvKtgkp3Eh4vslm4wDGNruNoiGA6OO3lZ4v70moHAoNiuyFhX7OvJIL8k38oU6dWLzTiZNXMrTIOJ9OlL1wNFhILg9xBnmKctoYafv2NzTW2TnttBPZomWSjX7ISdflE8/Fg/FGjwAZwLz+xK0OwwSmO8RrbwSKQXSLaxbMncMK3w/zo/fwT/N2RSwCyDP7s37qOBVLVaCqwmMrGtoTo8vURnUpzW4NDmD+gxXsNOXBA1F2bUgKkBDnxaXqHe/DdOMgucFH+SOi1rnE6uyvI19/k0G3uCXz/mvZddQmoqoX0kkEGoc26GV3Uf6nAMCeJ5My64wv4xAA70Zcw7uzy37JoXoiHe00eeX/eNCHcymNvwxm8BaPHHlNvEIvB3MYeOvWpjgUld/+xqgds+GnYygdyM11arXAG9yBkyEirYA+aFwz4vKZLkK5fxSBa1wbWh45MqBaR4a/DF5lEnXGvoOeH08YHwo2TMEnQkmm+cDxPEPdDniraSo/yecmhIdVKRDR6KPIdVb2uOWK3TWkOwRU/SULxBqrzmfWRpWjJds9GGvpfm7qL3Yr86FEd+kHoFX/XLkjmgcIvtVLfMe1uEGmEUIxIl/JnbonD40RboB9mta1o6ZMotJgmV7+1cPOjA+As6hAfTWJkvzFC6P2RehbdXLIxXsarDZEL/sRApY1qJAWGhUUy37I6EKRP2dQIjkx68Yfc5HVODun7Q1SmjYAAgvdcVnWEqcybTtsCEV6OmV/dFShDnddhFJhUkmfhauJ5L9yDudxTsfbR9XFHz43mk4ZPryPYYneUnGZf6SaEo6pPROUbFKmlAjuFMaCvldadxDasDVsJwiwAchaz/3KErAMuP6NpqCCWmhKe1gyKhJueC9SGWhlD",
"xyxcK+/Jk090/9mWPcjYO5xrbaUw0MQ4f7ZBQ4anhKe8HXkz5wwca+x6tRBNnLXEDKP+U6b+3my21MPhbCO5D9KWkqd183SODMmuLzDWrCK2lUZsoE9aUZDrtyacEUMoOsKTwlrYw8rXvZ1wR6CQNMdtxdj6ccqUCHhHJxge7G+05VB11/HImEbU/E0sL9FFVz04fbAX7StS8NunqtwfaPmAcMt2p1s+jKjYOoezNckVJ0b0p3/p6axZpUTUcQEe8KavNPQeuCTmyQcTcaiZynMWF0xVkqZ7HB0wYFWcSOKWFu4tvRmE83g06VsQiIeQC7UiRZOOJTng+0Ym76nGowOgB1F1D46cOFa/3J59DmZoGNMaRyAm8IB/TbiWWujMwYv7pPg+w1b4IO+5T5vgI23dxHpRW3iVVYssiSQGYywAgPHH01+HLg2ycy3EiBmsR3nG04fiJlvqmceb/Y1WCs3wAW9H/wCR60gf35Drr9fkqvv2+9DqJ7LXidsojFYECikr8uCMqG0fG6pIrBrYaE8wy332ul22lg8d67ESAoRa+MgJbIF4eTLkVXFEG9zUvkTrFaObUadclmkNTMyWedIA3fGUXertaRYkphQpq729SiHncyhAt/3PckM77d1hzrCtakBofHDNB6er47LzSEt2K/pO+3V/2hrgrxVFWe2+HcgcCPEo3JO6d4X/8VSVkYtwy7kq7ZAZzwhXJGDQh2/293vS6vhTmD9PVRBFJmulnpd15nXpQg1wehfLYI/QtgGXrWNe3rWGip56QjHSF0NBZyPwiLiqpeHFAjTDoBL0bEewabmytH0GiHI/GRC28dxZlsBnCg9zgQLve7lDJ7RcB4CkK58na6UfhbDK57luq3ZhZQxH5nsWM4vVL7fcK2F5Y0ZzKvnnvlrUmC+KMRp25YOapzYgDj+3Yfae4edyBuduJDs0WDvuCHHtHLW+ApiaWN1lOHaMYfklgbpjpulyFAaZLFHvJGLuKpjK/jeJZT6KzOWrhi+x6YZpWTsOFx7zpVelMqjk0FDaFT8MmhYbj1vv6eZt/Uoci4m0vVLNF8yqfuGBY0uFVfG1pSMUqdJ7tx+BGCVwbdrQuepTaLgiOHmUwxeOX4yd1RSfrbl+SaoniBCKEyoXPUGF7uTPncbVotOkLHIlW8Pl12hzFly3FalinqxQYiQsanyn7GF+Ayh5zUuYFOrVAPD/rdlbiP/JFRn4o2NqO0ftExpN6OUMUujwZBueODvv8nA0yKtdmzM1Vgr7GNYWl0/fN7sgXbgqmESPk9sldYuP0OgH5DMslEsJd/7kfQPaq6y8fF0g6VMQwRH9sXKanaE/85ked5DSOtUvZXReInAC+9QPuB+jIV99+NuUhEqq+5Go9hK4yxRwWAi9c+5Vg5M/2wN754GmeVbPNdRp79DJDBFL04ZxRwESYef+dMUXNxz9/pV1LNQ+xYG8/0bDjeXSJfJqyskNQw0yj9vNIzHkt6e8uGRrxKwyd0wogQ5Q7VAKUuCsvpXO+0lzhKsIREG0V2NnmRzN/q8aHW40jCvQeKFKEylgiXM/1CKv+PIZCrfx/0HE71qv1GJp1oa4ZvX2mDmLiSPJUvTTxOnUi3w0hcYojbJ975rLHHRUyh3VceFIzSIPpab0sdiUjg+BIDyNd5bmHse6VJJ1PPEGbPw/6S2LNX5Xj8kSpfiE0VKvgNghb0WcBy5ypbR6Sp0mh8gO8CuebOQE29/YKV9IF13yAiSAXgi2n3saAT6znp53WM8Rum6XFXMTDEFCxsORFnvnXlc7S43ZAFAUHw+YQVu4gngKOUEptC9kwhSeCY8D4iP2dPKhvDsSr+jDZJL5K14rspiFdCaBycOwcfq5OQ2NaTmUFD6+voB73QRMUBl/NKo4HYE7jz+a7L1VOzxMKkA6DkP56J6cr28bGBBvJtTBhd2jzILD4NpAvP+HBVMlvoqCnmHC6zPunc1/LhaK00H1Ui53vmHtYXXQrrGu4Ozc",
"sfamo3NmFfj4JhWcXLby4OreWnaoYZdahjmpFvT8MGU9ErobeT8F0C9Wpf6jTBxqnpOdglLTUluDYPE1Cm3SRhTpEhxYyNpi3Z22vp4EzilUnYgvmw/6V7PWZXFFFpC1nPRGQgqh82MBLL+DTVjySN2moPI4DJppmv++PTAaHJu6DZE3KQM6xc4IfQEFg20nz/KRvxGJGwbJ9YBe6VwWW29Oa3YBtpKHe5l1Oe211NxxAAZ33fbsNitC3qX1j1bb5Vvx6Bf5jkQC3otVpCHdvI5LmDEgQedYNWx8fYwSoAAfNgv8CmK/i/v20TJjMVpTTwBJY6A7OaQiMwZ248Oj+aS42RggBxlvVYc8/QNPde5kAJX7IyuJ30HeKnBudVIyZMbPlMYFThp8UxeT4EaIj1ikWZ2QtvBGtAqytcBDZEo7d47UeAks+YG0CGPXMBM1xue9fP1RWBbgzHqVi7WGcJALOfrGJtEop6BJVPpYV93s6prfVpGQGttXcEwjaZP0MBWdp65Ngw76fQoQa6vJkDkeBXnZeiTRDcXBB7aorkfdo/dAL5QGEGUDv7eSisRWO4sQJlKHtZ8ogMdEPsZyUEJ83lB++pNr4IqoxDP5p2c0caSTuIZdDtpfiNRke9LQBwyBHYhvpYXpRbE7c2MQo2Mz981sY8PkOLY6vYUaGUcKi7B5tueFD5pe4P3VIiCfPG+DwyCeoYM6auUEfVPti6+IwfHCMr52GtrKkOxryKkK/nyRUZXTbXQJ0E/obcGDr3uU4bGIkFasTQ+QcW8Lb17L4gkLEct3JlWwaAl4YTR6Qnw2i7W9QQmxS6jrAz1OuK3Un+oylADp80ZXr9TkE4MDgbaWTXd4BQ0FsxWPufW4Rbtugp/8guhwaVlSKim2onlBjtmeNBWwgQejkK6PXhIHaJu3cwFp5x+gbQ0fluHIS/gdH0OKW5Vb7YOzDQLhHRgx9taCflRJ+nW5cGxC4Rd2gPAuONAUH9kjUhY8KOecFQXEf77RZOI9hG99ZmRy0a1eC/r1A67bgomJNkykn2BYWPi3LsDGXja6BEEZBOfGSVKdLnXu3VxQRBL5u5Xa7N8Zdy4kfFrM11On1D2L/JUGdTaYHotIEwVttJzofXfZZ6ARJZkpiXFVV1GESE0AuNu/iD8iYTE2YcBnjgFi/Tz9B9/xLNyJsbxrH5RVCm7U0apZZ4egJBOqE64FOil6w/jEYOU65JS/QZOhnCNZMiLxX+pqhjA6NVDVBgtsEWd+STtQHR1uEEeMkU4whtFWmN+WdaMdExnDF6DIXbKlqcXKlKtUDivPf5Dnt0IWgdFv6rbl+xrZhxAk4bOUWzZ16D6V09qZ1npsI2faNtbHn0EB7HG68OklQZkCMpUL/Mt6Q3Eq0Ls6V72SPp+pHVCp2QyZdqJudKnDvYO8pPmpm9cFiqz1KVMYR8YQMI7AjHW0cl9NOs6zjk/Z7I87cyo4a3bJIh4G/sRlIdiKGXdhER1m/zILVjyICPrnRxad5n3lJUX39TmVTWjRcUaWavO7+iIu8tXQQURNsLtPe/9/bPAdm/tKZMduXk39pTm6HcfcYqeZfzsbWQMl5bKyX8c0MPZ30P0axsB+vhT7y8RAdUd6iYFS1J1x3o4cCuWuBmkQkxFsNvcOUvrNrTlPSPt0TjWwrVd4vk2mG5ck5WXD4PO51Y0eBXoZs6/KbuG/4s6Us0BNxyklK0mRj7bpmE+4lVJyEAZcGwHURUuoqQyhnNhLlk8/rBSYPDFSRkQ47CEkFYrlcDDMy0EK1fL9rMkBb2nmrmvRwDWLD2bgwBYXk+4bsD87D2hOS4EMq9Er3z40B+S/aWkT0wEhVWomP8q8lIOEMpiYttcNXVBhrhF+KxHVwql5ds0PLb6oZwjEojxG+QPPq755UQh143BcKPHPMmh+lkydfHMAolrM1duV7SsBACVp14n/yBFLV5sAEduSNH2b7yPR+EsRyhH9xjuHgesgH1BB1kUumYvh",
"5EPYokTz0XQzdvmG5mGQEGHF8tvTiNQYww9W8k/jXt1m+i91COx6NiZ6+XBJImreZVjK4TeC+z/v9I9CAh5ZHD60my/UX8BYiNy+oh5QrF4WMXKBpLR5n8LxuDP/AdbY4FtVrQj3hJiJoUVPED7dW3ZhqMvvB54PL4ZVxlVUJSoIcGzxHOoLddv7vMtORcLRTp1eGZ3Mido+2pTd9FBfvtnDm2tz8iDEXoozxekDNYF+Jnc9VV+6t0Zcr+Z/xLz4d0WDV4FygeQm/P7W/m4WO8Qu/vA4qjeZvakl15RoF1CzRzS7nb3JP69R7vrqWpOkeMghqjoL7GH3w5eMLa4YlUoGpfUZKINPo5l3oWASALu6cPKWCIYWdyTIPYbJdw7XlWgdi32jJdwPg8lzSkbC8+tx5xycuWfNRJl5srEX2le3sO0YB2WYqKWCmFqRDmWC0Oiih2vbL79wJcwSiVETSDalww8Xqf5I4GB7Y+y739FRLDkZBEJX5OvPJCvF9EGCI77CaDI5IjuoMV9CmtH5ZhEgV9eUB3eAUhiHyrY8aO4nayVUtcZu5O/M1nGmYEcEx5Q+EBkfQ89v7UCYL4E+UZ5usyHiItqODzyAW4Xe22IkKAxCo56Jxq5PHZgQZf3P863NE5MX78vvCcc32zSI8EOhWBp5TC6kJILZSFGe4kyNYUP7BkRGnKAgrNu2v3N0nASkUGpigppIG131xCIiYYr00p+h6tHmgzc0EWqJICvypPAmXJqhcKmj8Xmdvdc6m2Q7NPMsU1aUvMmqT/8hWcXh8lXYpQs2wRBQknyLK5O9CGqA8IkEdrMXeDL0zJa7C4Sd6GrIxdQfDHX9CEb5pdQpJL7YrXPS+3/VxsTc8MXvobJ/G5LZnqdGlGLwydAJD1DgRCQDQhZ/ZFf58umGyG7Nl/cNXn0Z8rablSsntwxJ7EsBhfxkz051V1bqIXR09Y08vbYRx1iIysSreTvC9PUQ8CE8m/B55XIK5voPaqiHSgq4crgK4HDc/CjFOAaVoIrB9YsY4x7uKZTSTeSL0/yqeyTnhqcd6po4lSIY1Sb0HcT1usdo0DmBCSgVRTLF6zQ3r3Y3DlXfxKrR+GtHtIV5TXou6pxbJDNgv1jcTxfHMGoeUEEpVRf0Xjb3aaoU5RgYzMeY2mYESUfoTaoU/xsmXkqPX9ILav79gVM5UopLmQNbLhc1Jq3whVFosrOtf0qSTwMQFvqf4AH7mW9E6b2ucep2REsjxos+7Cu4QRoV27LmRnZRYitLw02G8KfBIm+hVAi8blngzmdKcRs89pl+lNFbPF7/fdtwoGI0nN8LlinitXVuseUxizYY/FDyOhxQea3V2I+JkAHKij3HPn1zTgDpBrPrWafALM80OJPwDwx8hC5f9Tvt2m8QQ+XL6CGx4OhoC0atsyL/XkJ5L5djMfdzVj3OSotccFMsrhnIxS/pj7ONPNGjQHXN/mvwIluCHLuDNPKGiJvGUKI+jAs8S2ywVlpTJkP/T/bpa7jAt2bx+qZi6gwY1VPRzpshQudsTh8O7Mxpzl/SKdsSuNcwGDVoqoSVwdzH3kWBouC0kD3sFlMC19lwlQeS4qXjLTE4EIH42hXwEywHVLnG2k3oPW2ij4yX13aWJrj5uBkC/8wzpAYR1EqtQKmQkgYLsFghEXf2Qv719PcT78qE/41SVnkA1AGoIGuGKtXf3C4vRgkXtSeuB0ZOPU5kMembRdjsQEUnqQ26cOJ918sVDvHdyQXxirDxGTF4e9md8UhlzIlpv9EKPEPXGi7KAAsaZmdFEjkeb/OuuQWGLHB3zMprwnN+GKmD7AL4CGeyL4VhFW7p+8kbzUflCbjrkpZ8K7sbaJmnR/SCRc6+k/8ZrkYl/vOUkaBx/8iUewac2iGnypgJ/C6wtDGwMTbHrFFbvGJLq9MJuk4keM2vKsP8y1HwNhPpCBdX+XIAtdrLMXxFSsRrh5gS6kcbedQS1jYvTBLOCGxz96E3L9rK",
"SUPZ3vibNPgQB3C/KJDnrz4rd9/WOF94/DG+1pnK9c2cvswKSfoMdMxEgU/qZ0w9xtgsqjGeNltGnXlK/eGOn9fbsBDJc2jq30c4f5hf9cplvXviYiv2ACPPlShbrPvk6pbvDEu0C7pxuNMKOuXVyVnGpnuXrP+SoGkMu1dtSCvfzPAccoNmKdINCWchU7rFHGJux+vgSdGcBGc7Uee7Jfxli0kJQhqbL7kjPGj/dRNdRRnjjm+NO7gL42iG031mfe0qSlcH+zZ8w+ypEaMSVQf+CrZwwD2+70wpFJAt2yP0fimxWn70fLDQlS8u0O3p7X7wBwAt4Aj25bINXbVOjg9tONcrMRRZ1eGFhq3Fn2e0+wGVAHHhWs3IFWcjShecxLC7/f49fqwJi6nKYcLVxRGSZYXPiv7jb8RzPscXnNHzHkbXro23zeGImJjdFeMX2A2w1NnDUk604SF/qxubsYx0zr3Dzyg0hcEbJQSUKl0Ad9LHfpiycnzw2UoksmunFLEE04Xbcq4A/zoyp148Ho4eiuTlV2rolKipDwjBG8CklzQzYKUAucAWi7nn5kRoX1wnAy/K0Y0KrFXNRbH39uFCbCHTQ8cnFRVvketipQro9TwFWS9rMHJ7eyC37VFNdCnMY6k8I2L/UQGFDJ1H2hcqRWniK5PH94GO2Ahnc/zBTvuWh4qdAswaBy4NPeMjN+wTLLd/8cBNLcr78opbqvhs6IMEe9yaY6JrWdrVUuGg57rfL9p0CvARkncCQDgDj9JKHvF0Z8/fPkfHEyg5Ci1zCdbxGfh8hw32NRxrd1FQvLu2Xp7jT+EHU9014OVRZ1EUmoUIuGD/WBoxSSl7LvzBcWfw4fMaA9Pn4pJ9OO7gIjeSlMGRZd1lgWyajHAyQWPcCuAWInfG/vUniJBF0jc5fzHnxp5gwXAn48t+HVs5n2/IPl5u4eNI1+DyIUlHgJMkgnFgFr5+KVh0O8JElA1Qym+pBXSyrjN1GW+JAHDDP0XkOEX/1LdY8NEWU0dMEMRHnGVf6zZGQEktZbxG1ZJyir3fnLPPIKAHSzYP6D1wnr5d8SqUra/dpdWDC8w7yqz3TjuorGNDDGjS5Vro4hbEHh3hNHzKwjd1408hGPnLe5/MFtoHrODE+whb3nnUwfNr5Ln7Z7ah3uX9VVaXB01ak/QjaEyYCqCK5iCimCic/BU5GT7FbT7raNhjlswOsDuBgQmwWUs5OE35ie1rBzXMCxKc1r0qZN4g0ma5VH8jQ0RmVpLG7JrXlTEQXnWYomjHZOKD/TJkPgPHDw3jxpOa0P2iqdgNKvMJ8KomfgaiEE97Qga0nElto9FUaaP/bqgW/gcZgHAQJo2eBN0DQ6kRxYa+FzeO5430YNdPH9lWR9lKgIv+3I14HCkDHMm58z9GM/SWQ8vEh/z91V2yh2mdNaTtmPZKfz/5TdKkPZsYrfuJwoxCv3vTcB0AFqUF5v0OI0sySXSF2DKNah65Yi7o0xLoNhzCnSNxho5Ehr4OeYdyekoN6cwQJ3EEhXuPStdxbcGyDHOfUpaF22Ued3tFIt5N2kaS1uPkOw9ZprflMdQ3z+cUlM3jeVok8TUoMa2u+YF5pInJl0ZnZz7ecINh80CGfb3Fm/yxbUKwU0p5l4ItU7AhrTus9Xf3jFS33oWQe1CAQfukiY4ikvhoyP8sDkGSxoL8DW4YQdmx3Bi6OXh1f2qtImwa1rI56CDRtm5CJ5LyrYCVoFZvF2paY3qFsmHzb/jQ1uMWFJu8EIJeGtxaXghxSJPzDUc/A44dw0NE9LBYDZ1jFMCSIRvjdnYZFWLkRpZ87RPgffb9F/WSYpPfM5mElf+mUCyMC/pT4vVmiuPomGoeGyPftMIWBjNcCVObxCscTZqraYD+fRcKih7FbXazu/eVYsIzKsMPtjrLb5O7uO5hNkc7vDq6e/PfS6zIrNeFOh0vXsU9ATWoZG/GXSJZYHRgwpSTtD6YP8ZCyPOtKDoT2aru",
"6+QSWXzatl4opY/EfX7oTaavnIcJcvWuoMr9h6SYhPCgpsuPKvIk8Ku23RDe6rzxC6pp4TcIbJ69eLod3CXN88lHbgHquImcFFvCvdU8MruakcH6voN4bqqSfxDTkqaJxUQ7NURhLIrmAr7xvqoMwa/iqVU63vUvmt8CUVAPqZffWdxRyvACE+0ecPJ5bDMnn5SEUvQpAhYligtbsEcJSlibfabiZcaFHt5e4ChHpoSsBwOgTN8VMw/Gp98IYOyEiWdghE6AKV9wh/RchdZExLkWbLXdKk6Q8sCAkOpP8BFCympzSuIiaCM9jrA8zp6M91fq6WYUdWplN819Q/cqnk4RmR0pERtcUnnpPAhr89AopmYpHEuvhZDFGwo7gLR3GXfg2LbDZjy0POXbNXcba4Gd8p5lrhstThlJMrRpY4eO496RDdOIrD/15YvFQgdfdjH+Wo/quI+g6Iql/6cJgyutpahSFp+P9VpkC/bRYY9pyAySNur/KfJ3CxI2Uuxl2DWlojGIYbkksHEIscD8cSs0vTSXZwI40Cw4fdmnEFsduJSkhJoaNEgGJG6i7nyRao/P8SX9JY5fmBLfGlMb+Wj2P1Qt9tJMEbTmHJoYSbAiBXRHV07AfGgjYx/JDqXLsGt3AUSP1T/vQhlLCfjYBXKARlszswN95N3gWCRNfdLV6PmM2tBL1dYZES68yEpMeOt58IuCZpzQnPWucqHtmFFQd3m9zWeB/yk1SNgGbihTugQjychX8OROiaGpFUuYvPcldqzTKOFULBlS0hwKWvA8vo/N9M+906cjhwgCJPB2g+MB1ArCe36NH1M542XHA6nV+VTl8Gq4qkCmako8lGHTx6LEHSQK7DUUpFDLASxs3vbRZ0CsiThgBXO5iDo/q1pWB7i8TG2wyvYcGv1WysyTtZ6IsxIJkLDfxXiN6S124dddXeeBJjqvsffz40rCDf4D33nNlKQv6ahVLgjjo++ndYEQDXnXUEvy68wEIYLLU0NbTJF0DtjgynkKCl/RKCVa1I9bR71yuE3vqDKbUeUmDLxdsEFDnp5yf222QPBB+TDuZMPQcHziHDlqdi9BxBklRVq39mH7yQIxtvFCBn1ori8MgGn1hgzzPv/TMxd7BKJG2wbl1Un5r5SU6oCpLY2NqkGroyVYoiXmM6FVFRijGtOF3cIJvmeTSu/qYCei96Ygupsy2MpherMD8U0YCizstRWfgrmT6aBoReaBcrs99TyYIubtu7IMTy03LFolMHb4VgC28hJcvQykHY+oIB8phbJYNvbImOYMFX6hJ9YGr2tpBDMEGZI748kTuzqVTSZt7Z6JRSpbQRg0OoL39Vxrg8aZC0tWteZd3Lk6I/SNco2IS2CpLXbSk2IcGBssVgcPdF4Zt/2jjPL+8dWYIwn+AoO0j4Dj3ankEk3Y7mbF60S7YfT4ACptCItrWlJdZ75zQDOy0kmle6KweQeIoGj8jYRCpe3F7ew8jOOpK+rZDfEc7SsijnN6cMvn/L/hAECdH4pW4zG8S+Lr0B1Fe1qRiFBOLh87kNcPyi42o+EW1cq07dBM4W2eUqJuWhCIiaWmXXlgrl8RMvtruk0IlZaEl5vOvTv7IsJZ1mu9TbIR8NJAKRdKM1SpB9FwAgg8iGj2i76CxS5vy5iauXsqW3nKTtwXnWdhgdN/5/iOvI+8ue8W+Rs0FwpFnDRkZaDnpi6iVlGxeAMDhh3dRT+Ni2s/eVHTEcNnXI4LFLgQ7fgBi+rKXkgFZxSd8nrsq8Ezc8wnRJjL6/u7h5KKo9GWBqyKLPtaycj8bZCscVUrIHzvw/DbH1bOEPA5JFVS6Wj3o5kl4F1zjVn9n11H31UV4BKlrUtHqysNT3JzHyjHB3rc5gaoGpYJRVTrg3JggHQVILnUT39F6cCpZmf6eHyRiPMcJCz8K5yQkrab+dyzl5H26VzaH8bNxPtMofoEjoiS8fBdjsVqgknDVsFWEhjUSAV0tjKJ2k2VUShB",
"buH3OJUXcJj6e/LfzbfMjDAUAQrUoI5RSf7x0Z2GwvjZ0+8r9gleVxwPTqTTMnmtRhHddR+zfr/6Pqzpreiza9U0VHPAyDNMRVWK8RyX1UsjhGH2v5sCrrmkOliVacc8tPci18WJyWor+wqT7l7VKC3Gs+gfzeOWc8c9VA0h/QcXWWyjYJJPw4rnuC21p7tSZziNyMKDMgGJweW23d/OPLPBuODD192BMPkVdfKuRS1Q4MSlXah8pMfDQryB3OD6uqTlJbB736BjRnMBXmORVu9KybsPyAr2hON+JcYVrXHAeMWF69FB7Yp5lKBN2+Qdm+LU2NdLvN7HcroSrFmrl6nP9fBEq8mrSFsnfp8TXB38KeGZjZTeiwdK3RrPOlOMnMUlLmgZwjDc+k7Ao0Fx7uwwJLH7ofYTzjkEHAq3TMbsCDhe4y7pXKOE6JZYJoO5tFEaF3VgrdwURy5dNTi7ZerzBVh+OaENoQNcHxdt1EMCkwpqF6AsPfIvYGM0z+1UzWnGzoRGtPX/DDteQ8XpmuCIuWRKAfLbKiHu5zL4iCBdT867uzKI+subRYbqFWxl+QcepIrndSyXgOfsorTBS9aj9VDi0baFXDzbTvmzfsOdfE0ZEVa3m8p/kku/XN20JLif141k5toI0uKP/a/ShJjWxf5riXBQFqFZQ5mzMU/sLxmbQ+6MrBybTnjDL+Co4I08k/T5V2cuUE602248HjNuLv6mrHhyXSIj2XnPx/XJskCDviX120gXjFC5p2/av2SdyhKXO4fZKyLawmocWwrYACzKo1vJkbwqAoRWrY0gJB3ILN02RGey6DVzfiEJsM9Qd5e6zyPJaEBjavlgb9zfoej6HUaDv3bsmdeWjQZluWn1F+NPfoKDIpoWuegZqCbL8ksNYB+AHQxo5ObA12AI2lzSbKFSV4H6oaEaUJXQ3AP+bFH24syyU+RfN55Zv+IGgF3qRzGzGff1e1eZUoqzo0nBKR3nZ/gDNB884uGhOlldVzoOmHiRwYTXhigK6knrJwH6hM87Awfl9szlPTcarl4dAbEPur2foABGppFOYGfwzjQr5gHZSIG4vir0oCcJvNtTCWSZ5DFjpqLo7t47l2SeGdp6sOyhyh1LR38NDS5I1c0Fgi8tbw2CKzFl2JIEtnOYS4NVtl3b8nZRRt7Vbp48edE4wBdaUHZt+BSEOHR3gri8L9c/CptKdwVwjl1D/unENwgWl1hH6NesPQ9ge1AG2ku2RprSsxMWHonEsld3WyWMC2JYwnS/UVhsqZ6Zy4Qeq7BPrRH4iHwrzRym3S8zWWQ/kY9+EEwYStd/0r8bsiKoPHOyuIKowBry5M0PFqK28ZGZcNmvl96GUQBgY5BfEQ1h/g2q20UVP1aujdO8bMlbwcEIylwaw2e9zEVrYfYcxm22fY5FZV+K1/p6Kvrjrqy1a13W/hw93SB8w4wwjrJjJ0BxqJU2njSHw61dqtITk5hLYYsvsIxGXoSHzc9TdIG3DNx9+IRUf2ribjN2o6WT7ooETrHyJOzSVn67M4QdXUYtZ518fJyDJT3Rx1sLLM7illud6O9c5Y6EM7dl065rpVd8zHiyvRMy3nOqf0abLERCRUX9R6uj80eeIRhgfOjT0+cFuzssFsVRZ2qFIuMOF/eDfL8xYPnYzSoT6HO0zYC7xL3PtZlJJbFqERWhCUQgEyKr88SD1H0h3XyjXvTTWYCZCsm7bHS+mLERGqF8HhydEgahVI6TAoCMcVaDFJR5xSTer4d1wnuuWHj9mZIQypRX4MY7Ny3UAcQluixgPh4pM0xvPursF8ht3iXyzi+8ToV5is2tdwzo/hUNYK2s6leVoNMJYZwjF/mrn8WiD4dKwJe22U0EGOhu5t7fpwKL+/ATsZ2eLzYtFDPquQBw9npiCXCgq4VTtyilOZz+xArc4g9xWKTZ5xnaJEeAQmMgD/ATWLHz/PFZqiM68mEr16ZKItfwzfykVlKreSAwyeoeAL14",
"1EvVhKhR7nj4QAAUyycTtQiDHxVjRDhlPRAo1HG34x5GuBaCXeZfCWPyAuJp1rmRKPSuwUbCaEpFOQvY0sfX5HAGWsDsOsXOms/oY3xdr+l9/bl8xlcqE97PhVqYQceEPqBsRMXuNStn3ye6SX6H/2G+6i6soraAwzSzfqSdRGfZyOqpcdObOd3041F1xTTkF+9HR6mcsQF1MRuF4PDSFBXLZ6AenJahZnn8tW8kgxe8dI9Or5Pyqdu2Pvr+QjtAaGORZ+JMqagQ4HKpDSivtsI8YipiscTA/Pm5cc+OXfmycOol75WikHslaifZ+NCg6ZuAY/Ix1cPIsUjXtNC4NAv4NzdIJKlSIqW6AcNrCghNMxg8pgx6UOEg8nut3Okbkzmx7sizNQtefgKt48DO1trUYprIz7fITKJ9g7Mx39Vi4B2BfE/GY2q45oxnQ5+b3iEfCf7aJZQDFgBzMzhgqgc16zDv1MqCykMqAx+9FcPX06hEF4zcuH1vx0ylrNesuchwDqn/phH1RKfrI8/+1IV5G39clfVEp11dA/8I+G8DWDLBOOOyjB4FrRZfi5rzc5KG7E1CP6yavgl/Wb+ba9fjmFckXtW0N8s+a4u/HkJUVouBDAxVFrpXBzo6dkQw9QE5deLxKJwMgDD5MNqZHg6r3XmREmTudZB8q7rautyNuloWzkRBoZFw6VnI6HfpbXQ+VBc1B0W1fxoF1Pq2QMUJoArxRewF+/gNuzUyYwx6h9HpQ0HkUqo67kJSxYLsuqq6K/dgZ+d5acWohi42kwb72UdSWpCgMNQ1Ie5CTVPqQUugPRocdk9sU9/olHH3oPE8hVGeLcObuJm2ZRg69+ZiAR/7arwbwA8OwA8OHwBoeSCIxesPUF6/VRV5ewC2KOogQP7pfPEzAuRg2LBNV/Im3dj4y+y9oCPAImR5BpT7C7+zMtod1QQ5Yl50E3FMZjUPgQHc81FjuMW/Il5bN098u/wouP+Mmt4PyHhGGRob1HIdeZnjR+/4FKpVYwpOt6joYvwAM4u7l3sfKuEdsK34kwvM6ZzEZTwTUhNdNTyolVB+9zoevwIFfP1B3hODHyWr41Y4mmXyjXpOIya5iS2MiiFnyrKO9zmAsrJvdCCRqKTNjrm0v8Zot9/DI8APqzyzWT89lmP6Uv9e1nuU5/IHfy9XHUHaWoLfeFpRtOiymtcA8er59SIUgn7YWSEosPSJXrYCKTWGnlVymGkBFp7OvaZrsjJ1CYDUtvJuEC1zQ/sxS0QsPBz7WoO2mrhL5KOPQqDHDLfQJZMnstlm8SAZTts6crQP0MicJjOliLscmAZ2xotQDSSAh4Mw1FZ1dkv4tEqU6URhMP7zsa2ybgV1e/sy9PDTWLhzD8jJksgkQ2FyNdekyM4qJGRCeD3vP+k0yBR22Sde959eRh2USgwZa5MI0elKn7evg+kTOAtwHMIaDMN9+RbsCaww+4dg3T3qjgcoExO2OjFzFABAy791FwjAxWroEzRjtMSq1afPRkPU+grcbg0Op4bgh6LIWd4Pu5UyQFM7g1dI7fDqXtTTxSD1l9vd8PLs0q4jKh5Yu60it+mKuhiUhJP5AUp7SdVvMbOXNut7v8VliP93bSnQOtSwfxlYF9tG0/ii/xK9c9vBn9GADla9kvAitSq8WbP7km5XZUDFu44bOlJhMg1EeySeZpWlGDI9FwyZpAHyW7LFEw/L78ZEUBGJOTzEwMhgTLuTIswVKZa2Rzolix0TCNK25zLiwbQktprlxyGw93UoBKVX+A35p6N4Y2ggDFBy2QeIR6iC6tzLOlZVrEG8n0ALlSf8JREEY6/sl8oEEbd1vTp6QVuJbHPX/1e9+uStywken1aY13QKk4hiQldSjRAP8s+xyNtFeUhyMw0NpJS7IV/KthUOCKDvhu3x1KBzROmhyuk/hU+73orUJOv2rekGr/i0cydEgrV6h9kYuFYfSxczFBIzSn7nezy0PAL98/5PiRWpa+h9",
"9ShnYn3mFI2IJ9Fn7mWu7j5Lo/5fhvoxZcjjrqESChIcMokxFarUNRLIm3T5XqH0YleWuvSBXwwtvoHZsV8+25Mn4nYOzzVrto+7tZsb3fvEQAXdmFnBS32ThLclgQ8S2g77vgXT3CbaNvZMpxIiJzt/gCo+dwCE5Wsxw6MxTPKxQHkdZAm7qwDEmG5cT9vJPj3n0p/OTDMfNSLCmjRl11GtGVEGPbt7rL+9+JkxbgmUW+fiXXCtt6HQ5hNLVzOQ0xglvsTZ+uAdkuPQ6xIEF7u6so9ydkeNIXjGEWady8i2VjD/jCH/MJMoVKatLibOyFFEZv+8pSERwyNcs/oaZV7/J41INzKHyEPV04zMxXOfEKKLZ3SeZfqi+xnxrWIaX4i3JJJs53ZrsgRCYteZChpdhoPaq83aFNBkSsEl1lEeaOWupZh6I3NV+5TTfZ0A/BwH361/EMWCvf05aimajZc2T+KQr4QrYWF+MxcLX6FRm+W/kL3PbIla4ssB9JfBp+wCn+VIjjHDJlX6HGjpAl1dpby2tTaUsWDRhstGEfqXjFIh3siAlr6EDoV7XtvvpTo9GoYc0GjMbMUSMKcsg/s0sd2jul0L58bJsV33AGj6RSAGC0SaBn7YLlw8fT34SRQla9A0rrJnCtPZn0s9E5kNxHJnZGeaAV4M18P3lqyQExIyr2oYynO+UvQbevXTv9cRngVbzPFlMNcSsPqSF/rJXibmNLhi+3UFHDiCGSk50Azee2Hulk9rRBzZU+AG6CvHCBhpKTa3LTQLRogr/cKgNNo6HKXABcQaSDv8c2rBlSGylASLQ9uP8JGXkvVeoxXKAPmB3q58UoDMU+QMxMJd22kNITreQGUm7F22xAIfCeRAzs+KX5jkJQZ1/ZecsL7XAnrNYv//ynnvejv3fG1Mvh43z2+Aj8IYGUyLfjuf3vhsNM2Tc2cRTZ7M6QCp/IgrVfYGbuLgshjM6EELUucjqwAzWoAl74AF4jNoEztlRIu2ht1p5XRRoYBNzwPMQb4/Fjakglw8naN7Q90oWu54EjdPZlfiGEHUEnoZ+Yl3zpm0UJnBq5zUQy/0PXZAMAXXL2sNOdzszlNL8Ir6XDvutQr/aNyU+jLLqEaFmQ69qMLv1pOfnbCBCPbIUoSTTsKjhyaFqKOe5uhRwgN2dWl2tQGo09pNdaTFhbpWE8mFvQVFsKrHRqrS4cOce95+jJJelVS03uhAKEzKlcGkTtEu1avr/jPkiu1SuM4XNiBVBEBlQ78FMyej1DD9mIRV3sKtwXU/biXzZUVUHTPusUsJije9X0xOZGYwHwhh2JTR7gtsEgLHpZCfK0RzMTJ48BYpctf/zz7OL0plf2xfVM0e54kBo4BkGG1d4dwM4wY8wv6Yfg/8hoqOu/c3S4SYxheew1JJhMJFz43Ey22A3RcQ9IiHBpAULKIFH47kklGqOR44+Hyyt7BNfM46biaBNdMO6g/LhUbWCEiptFqr9O1j8hTxX8tkG43PJTPgmQnokFB6b+k3mwDdd7ehH8gMz05/W1kiQD6pF0/6KROjKFzc0Evbrs745wRBkh66hr2PSHVIv4HLGkbVh90ubEeTAtOmYkJU3u7x8sZRwdFBQlaUqW1oQ2We55tbWz/fTDjeX4nFzYvMUA6/msN3EDPMMtBfy7RgSyQlgYLpt0JzXs+X3txCiCA2HCb474/XgQA+Ue2fNuvwDNKlblNbboMIr6pXmhu+pH0uFd3dnkCslPSC+SEA2jhNqELj3yfOVpL4nWSHtRakJySjXpmKbBQ2iPyz7N245jENhIkOG3ucIaGlqjF1zv583Z2Kx2oVJgnraSBfgfaeHlrxJ/qUvqhPNY4GDPUbAGuBbKdVC1Zj792EHd9vi2nGsD3gGGOef0aPpgx0MZywJX46BoItdemeM5A/TEAb2EkmsuqfbE8RxMr3e15yVD30rZQnLzmo1JhevJUgpy6Qfq/QCEjofMRHnhOCrW+yGAJ1Pwwl",
"ZSlzNsstGLK4H0YxcmBuqj6tg94ba0sWcKC2c/tlQjOwUi+nYK/VAIjcbimt/BNg93aEf/XYmGMx7SoHmqK9lKoXNR8n/HzRbxGrc0DMVulAsBwichiOweb8im3ST6gSNv3w9lmGbUADq2cQ1NI1enUCVfTcb+IhcHIRfpiliQE0wSbkBUxosWmBvgYec5bSVndUANg188bdxZIIthVYGrH/mqN/zs2d/Z/w178EAKURIpjygTGN3cVmrutpef/Qwlp2QI4wmhnqmBgq6XXOsDakFWTVYMxpeDoAhb+0XQcm6uc/9NpgHKhMuJwt/NHexBRRRAoEQDgKGcxExRezKje5HQ/gNumm/+v5kN+OI+8IUX1MLYTCkrBauv71O8jdzAdh1YPkt29mACS9u4xK8q21pry4SsLd24QEEqp8FQOVP2ELnmxdR6b+UR2viZDr+VLDk1xgP/iO9COQeuXQddxn/grLO12RSzA33xV2zuzx+/zxXjUNWQtDAbtr0BqMfM/qZUz4owcLFysFD/h8OicLdqugJNwi0Lvv8aM41KJJW84YPNGF5x64rcq+6iNxYLtzlX8sSsWZ4TRbexiANvB/jL53unZPOKXKqQfZvm8H4nqL1b8D+PXvAI9uds0e08MdZ1SxvJP7+tpkROXdNfu+V1QPYSdD9rcFL2COE87epr8oMajA1NJmH5O78dcdMLE/WcIh8n7osf68eS0rZKfHLyXymDjEM36T9D5RKSkwIGfsouj7Ti73+7ZcUbq2WMMeTVC1Ze07f/lU6tt+lOtIyGHuEjw+zqtFqwrlMXDXnC+5zSW/0adqJPrdb+HrrZQ0xBgj+B0PjtAhVheFzHaBByyjLGAdcJjq2gZ4fZ7fcP8PU626RS19+7KnYQdaEXOjoTHNuF7CoNKFaxbxgZ6bvT1Tx+3OVJaaOX5KUaFQeCSC3wu0evr0loNyD7fMJvPWwH9oYXL875TmRXKetfbC4wshMa/2Mzak9YhAHshu+8uelltX+bn2utt2qo6Z/6fAcNoqYg35ZYEdAgiAB2zUujpH1IdfsqhxxlySjrDKG4DaYCPKzGUH3ijFvz+Z8FlUZ9VmUioVW/JitTrnA42+a7tfzlfvOyrK/k/SzmAPBIqTE4fBqwi/TlF/MDufPMVngmE+YAi0Rj3CIsHXXUGuL4fJ8a5jZAZpWqAe8nGmZhBmbPmCq4ijVLwSdrey0+49upTy4BBx06Ed4qaf3Etn5lwNAMIO+WdCOVd42dBcSDFoK6BEc16sKH0JlF4gpw2vOSoM6lLcU6qSs2jXSCoOkHJWGHWIm/ONCRC//fK6wUZ9Umdid/Y4AtrCLviKlXU7R37Zoszt1flnOpyUsvpYWMPiV2iok2NM74bunWsHikKunZ+ZdF21650XeYJ49tT5B7BeQAODHQsNF+NCTDX6EjVpTes1ZvWn/LObQIf7hKW6+RuJ/9/O4QE8JUcLQY4js+39Gxkfr1B7AH1TiNmQF0E17dr2uQKCz72fRogreJ3eNViwDonTEgtpgqgTa0R2y2z1WfN0ExZil5c78fa6Ymt/KdrrguIKEK7+sEk9oxCItJxCo9jBrEwHcKPGjRD2JzFmPSkDZq2p/Lz33+VuGcKU5Bn0kHdMz3ei00IE1Ym4B4pMQNhzBuCSQSgQTlCVPkhJ7QI/bd9+KwqekEZnKPfT5VrIpqyL8zi42rZOKxaXswmL7MaQTb8GymW0xlfyt0Kfy9Ho6hEuiUXMNkjvZGnuj7Pykk6mabMdsrqkybC2S6q59WOBKBhmgPFxsU5/6zzYWseNHmjuymcq8V4HaktP3qUuLDWTjyPV1NLQG3V/5/9cMxg8hC6c/aWJap0HtVbqJQfM4lpk+lKjtbEAaL+Y22S271n2ZkVcAhq2t54og7E999VLvTSr6Oq+EnAGpITzH8iv5+QLYViPCKdTwCj6o9lBDONfgUIHrQGk8HQN1srXArzxTSVvb/+gQxRQmG5TmdBPsJoD",
"Bu+fwWiUlx6aDINRwS4gx45e0KZh6sKbyeCpR0pR94frX0WFscUwMOB4lq6oa7AxeDc/G4E0MdyJQ6BF+QcGZQ+3V1m4s9xgEYkxtqTEcxz2vxU2+l0gre2V7xd8jz253Ryriesenrdo9I/LT1DDFgTLguvimGlUWcVr2uuR46LXEz9FxalWrMJCG+MpiQ0n6yzTvzSRHuYFpWSjJlat7QhVsxoX3RmWv3uNULpS2ZV4jm19IJRMcAe9C5UmNFPvO6Ek8SebToLpxl+IqN9704RzunDDnDT9Wb1lHBjESfpS9B82lL0J3q9ubGm3dPV/PmHdDwXqsRONHg+aMeSOmMj+tDDl8S9LNQbkVEYwTSO45H7mI2V+Y+rJ4kUYFRPemugFLllq3nN9am3rJI34Oy3vkQNSJtuBIs6IrZe/TqbAr/zZErRdmlss+MhxicKJQW3s2Zia3jf+xChwfM90VnobTuE9FtK+Q2T4+9PTPp2/AY7NefSWFWWK1DANTZmr7qndNoBZOb5UHTFkmOb3IFkoMcHfmP1vAN9ckHYloUKBrBjPbW0W8yKUdaGj5C7pTZ30b1MFn/3MuSQHecGYakU6A0a3/zs9C9irinVoiOFkRZ+muL2abqjkG/Zz/X/3m01/vaYa9nbHpXtX4yfLD+CamaIHGQppEXYoPJIDZGq8XPVlUjZ2YkuSsw+MhrR8qTEqkEWZjoubecHrQDYvzjcfU9zm27eo1nCCIlSVR2CGiQO4hAiFuJjC3aDxlvCQA3Rlbq8LCpTexej6ejEmTBjyNntLnwR2JtvGPuk16Mq0fEwvs+cECplqe+Giwi9rpS64m372Q4+FRFaqZCr8UgAwrDyy/VO8TURYNa7PTjo3hnNrQCzm+xzqA/zIsC5BmFXy1kBsG5RNoUbhVYUuhNbNXVr55pMIUQiI6v0JXOi8Sz6hPUlf3Mt/4iBUkZ2vSTdjDDkEBqdqK9TFZfxQHhCPaCK1GddEEnyAHlBKLOsXPOkf/OOTC7j+rCrADnK4rsHxQWWiGjX4cmm5xdreckZjswhS2JU2l/Au/xx2TEbfXjrYuiE0zRgdmqdOJooR+l9JCQ767AydQFiMYVES0h0d9OqwCZa/iUfT+hv4LnJR0dG7nrfFTS3RKt5XZH3bP5vQ7LeqhYeqR22YvOicOWenwSOxjgI4nvqwkLxRok9409TYYXCgEmEeAEsBo73X4wnY2McoCJJ81qrA28H1IinAXZVe63L5Ls7xhdSlPElKagxdzwrvHLuL9jYwNkH3Fkw1p/vQ1ZUAmcF+60dPq8A01y1aiGjJBqL9ofV8VJhHI0KcUWXB1J/1unuQWcL5EsTG8q+WU1kzX1HNwhaj0RNuAqlOWx9Ym5kS37EuuY9jmgxqML8u09BAq+E5jU/bIuy83+47cgtVbPy0FifSxWMwgy7/ytb8+UPSY1uDHUCtYx5PWvra8gMjjCxB5C3m/ZvBr/jPj/hBuPca8MAN4HjGo2TIpjnf6SsQZ4I+h1CNt9sza0qp92JMViYii8VVH5eRim8UXqseZ+nYeSkkamtbyGZ1xqRv1qlGwseh5sBiOZfNgX5ExY3I/wr+9gTCAgrXnA2rMMkwYhGg897aj1VYUXrrjRDW6kbmYflbTMUacjUQAhzKNGfRQFt8BROmg/dA5eBchcELGzkUdd51F8rQYnJuzWqYAIawHwaEdDlrINCJoM3sG8ZV105uuihxyvzKyOxtX8bVveoQhL2/tkkSJhcJAPjI+Z6aQnxwp0OQzouHRdVGIXHMvcHtLP2UjCqA87cAU+1i8SK9lSkrKjBUJdbH/N4z/qP+VAL8SzoRkCLoPTPwFeLp3c5sQlvHiAUZyZtm9iJ7hLgWDxDZza7Ae/IXxzK1MH2hx3b52frSakiF4qSdh4m2e4CgbTJyOKRl+49+XVtZI7lB/4Bto37VyhBqCjFb6C1j/npy5iMQj9aJKKy8KFQOvgSS5iO7wCnQE9xNFYwGzD4l",
"YCtdjXnzYEjXLYlr8nV/WjXUvxDgxwZoGleBtyRnA+d4GIK8dEMoXqgYT3mjof0eSA9PTWaniek6ZFo/R1XNXO7dMld0jYzlTt30y4JLTwYwkgMnWbu/s28kqldPOmHUVUBvdw8EUweQn49dXHIfyuYv6WdjpsCnuB2+j7D12yO/DoJF9lUvGV1MErq8fm7np2l8blxTsn0xiVyApw/zKkL6zQ9M3ypkNn0z4/M5AYriyzgXHqw0nMK9eCzffiYlCt9hqq6BLNAHyQpGbdM5ZUnM1usDQeGvfobisNRND8L01SEkfw6VjPYTclhEE0NQeUMZz1fMu2VVt75PQWxOLFR3r4vNsBncpvgHjFh2+yHjAOdw/BDrUjRJN9v3d4p0dfp+lHb6xP4He/tLWnUfH7ZakOGpFxU17ahV9bxH9UgrcCkR6eoKiBoeZyCX85DlWkrO8sFqRvg8UHd0MM8+3e5zt0idFkA+EcZXpJUPFXsSSBUW8v5bHlR0hguGyjLkU9iucHRr89GX3F4/5e9/ET5aEFbt686rH0DTv/aFia9TPWhBOleKtwvnm01O0BxXbbp+0RiUBPs5GTGmvZzkQf285CupGaI69vYmKB4i9wO8FzuhBJwHilTLg36S7ea0pN9rhplPKZNHJ3X1VTPWkr3KEmeDxmsvidS38Ugmho18iozi0V+sfmwAEdRxZn53HIcz553oY8+S6zFYENktZIVQ9vOcC0NfpLUFgWnISIGsvheFvuTvRW/neMCnJ6wFfN2OygnTI8GL2XbJkylyaVck9rUneyCQkaHeqeGWY/+kXuORB791+n5PDANvS4yuamNBV5E76XA6c0bfkh4TAF9KV3Cnkd1/7V9y1y/+3Noy2XfOvpIZER/UDyqgA4cg4E89GAAyjuq/MKS2d4Wvztw4poC+23N6HVqlGba0WQQj6zzuKYYRt5ZW/R2Aj07gU/j08DA3nAx65y7bAXvC/k7W2dnmZD5eSfzHkr64SQm9qRUVtYmQ9Td2L8XzNqFLERpTHXSXEHe6mR7j4mP24w1efO5ymqoF4Aefx2ycOJVQZMNJHIGB8VPTHz5TwdK06G4+O4adA/Dvo7jpIdTliIgWwGZagYxM1s+A4ZBQwWsj3T6qsRfUP9/0NxV6GMHxZqnT4Ks5ZztazJg7YJzHCQSDgdIDlYhz6iYnOayTPxJdumbl2jfYvCQNl47IxgbdKUqIY4P4/0sHS04i11k7S8iHmII3f957LOG2iBBhLONyILAvIczu2qnRX3btURfsGdJhQQhqqs2V/MSasgOg4M0nzrKPepKoU2w75oZZQH7OahY6MAvNM3tBLvphMLJRqd1ywInEGTT2MRJPggSkUBYJWrV03mRIegz0wUnLailxdMxQ6J3pTq5i5oWEZl9MbUO5K0p9kYFg/cCuakBm6Ojug3uvW+ak2iZvedIH55U/ipEvjp4qHL8elNasZjOM0xr6V7w54WDHRsFf45L0I+r3ZQdzBY+PKvEaM4Uzi2oBbDdBBmVuEiFMKqaFNJBAV3/weOT4fX2brQph/ywePeyhwgIMC980ejBOBbhWMMngobsJ3SWDT7lObqbrMjGu38RRwDYAxX1gv+vYJw93vFagE69733U+K2hQoJurxCEsknkf9kqNPhN87BFNaHiguWFjyvBowl0RnHsGCjZwzAgy7pmf829TLEsP72bdgYlx7PApDWanUygqvfhRqRB2fTN2wnBX/neZglZHdq5s3Wv79dbIxu9EaC7OfFXyQ9OoNRMnaGYNnugmg1I3FEHig/dOHEF+X9IL8S1/PhowdJotgSO2EgoxR/6ouv6uDEX4gOc/xjSAF6rcs6pmMYGs1XbEzNBFNX8UOv3/qFAv9+QBcnKzFgMdQ2eE3DPf4nELrsMU+o8fdfnOzp3MlcKOzC4BbYQGXWmoj+bUkzVMFkrPkmwN/yHH+fhibzOOMo1KolfyARQzCtXSsA/A2qmn9hGFDnKRmy8tn8GW",
"z5kaPM28jYw1XZT9q2hUJJtyIi3oMgiZ0exnCAjNZ/lEOfPs8jgJNjlSMn1xbpLCbuo0d34f0PHCgmtDHynPRI9ACeVY88YpcGyfv01PiQZ9o+lcNbRZeK8fhC+jnRU4SkBhjGR5wLrybT0mK9++YoclmY9I/ctxhnKtR48pu55NdlkMVBIHe5Xd+EmLHd/BhNXxMu55d+SqSzgedKYGkZ7X+r1o+6m9zdaFj23TYmlqh5FI2RI2HlnvPDPW2GisQvtnFD91Dk8lRofyN4Knu5+btYh+euELaIesmTCDijJHvxj4jK3dk15cHg0SlOAszK++tM8byhTJPP6sU5yutT0EekR+S0bdka8mYcy8Z0sFNZkM8bI1KnAr9K19Ij6eYtCbDWmKvpksiAq3DZWAMnDHzAErazrQriapwvTXnzZU87u5Q6l+CxtUsXB0JqR7hbas73ULNMZbjbZvOkrT2oOlzkQppKPMtO47m2vSdCAQtAi+F8DG0G6BVmw/POkOwyMDGL0sLyPVMSqUDQwJb7nRDfx0eQl8wN4MwJZa+E2MiiLYzaM6BoS08wl8Nj0iTEWx0t9so/zKsYovTbQkxIxD1HEQXOhaxutyKMcW5drUZ/iz10Aug0knvwmkJ/UAN0EWZ64dEqHum4Q+CRaLWK49ajJgnN868gxxX3GSN0hJ7ZsU6kGRp7TkrQxLnPiEQPMqr3bRGWZZ9fAjToDNEGz5DY+HG+nhFTgi9RzizXZm4OTeH26rkKZf+asoi46+nCW4uvH8LdIrWjJPFHg7nIGHza+EZGpfznbuDHlfbjEw11Vy+PD/NqnUgUnV6yAAjHbC+D99rGkyfBqvgTQiZAE/1Phs72QxNhbzZv0WHU3oig0MZyt6xzZ3iBbf7ejXvngpF5C7IHQh/qnNnzRpEbhjljRC7Kxeis8hWx8EKRz6NOCEfkrKFI8ZVdzNr6YgH8e/PheNLSqUsyLul/owTzuH6SqjLuPVEJkcglKPKagPoYLgLy45l8pjD9rRGjtsU5fBbGXAqO31AcNEocku+sHRLuVvSgeSNeo16PIrMa0r3UgCzOs9btsDvAAHzfq3pW9hWRg1+Tz14LvYrkmShcB6zuKw5Mw2NUsWah2pVqHr/jwFWVIRmTVdawLUQF5bVRBY+rQTYNdxvyyQHg1TOQOx7Y0DfnhnemKCi6NIJiIwFgIKGlymURwpCiD7cvLsgfdN8YHGaNiaHGvxBEUPN11qRuOZ47jJsWH3f80OsuGmku7X5CXRzpz1AZInU4uUh1oqA4lrzirK+2IOTJny0WknLpbwt1+Dn5AUgC7uuFIHYTnKK6R77mKRHUaTgTYZf7HmmzZ7FU+CgM0Xrg4BJvzNfqsma59E+2+WZbevMBAPpemoEfPzKgAhLbUlh7a4KuSAv24mJQ9sxWdveOeM2Q7Etz2OQgoQDYXc93XmuRT02EEaG0HrDMgLcIGhSBjgn795evkghfJPxq7heKn06HZO9IJvbHKi+B2+yt2Quk03GebcPsfRpQLxaVWgkza6X4vxkF7qZQQqSueWb1dXblf+yYxhoK0B4kFSCH+y6Kr+CMwutOerMeuyTA1i0SNYZPBy/tLO1/OETBSuNfzm2H4GGr22oaI3tV5D9MGbuUb1clf1JoXz+dOlbH4fH5LEmnOCpYmtaTjEpTSEfBWqA4ueJZBHsRtzYRDkwJUdipCa/FzcFrFELn1Fv7jFz6MTYG64x7ot6bV3RPA3IHPam3kb+Btg6Q+uYQgN8z7KlGU0esudDnQkL44Fx9vo24e53yWI9M8q6+5pGbQq1s7HJ6xVdftItBT+rk/dWmX1x4xsLZbokOAvXqDiGTFFXjgr35rpfR4UAumyFlHPiwCDxVM/QIQDArl3tXEIH+UpfR/entkZMfZv98GvTd1nSp4tmeqB45a0Nas0znFjnEBl297EORLAro7sev2Dmca/wrMrosiG5C27f8HQWEy31hK/1lTStyKaGERTj35U",
"vXIAnQSui+l5yBBZdU6cWfhUq91sH+RHWTX56y8FVZ2sVG/q1H4CRl6l3TNUWWFM/feYuR6ThjA+9H9YgCAkt7NI5aHIEx/YD8nPKWTvGMoAtxcJ4vsP4pY5z47LYcPg5RykzStMGc4YgdJOi+Ya5jvKQ3ZELyg5Sin3wlFyYnDIA+gVuFdq+xJoO9foT8XC9AyuGGnNQES9sMcq8hulV8LkJx7MKbBQvOxkOXGD7RHpu0bqGYlMdgj9zlQfoRwkRFL+lZp+nbSDWg3XUfXQxj+n9xEoDgXn7dJukBCdIMM3fpi+h3XwnPEob0ntwHH7tkXm6vJX9asHcH1nOyIRMq8ANbHHx0qGJdaaG4gT28vqrTWM7YO1j2Xbob0UxhFPFprAoLWfo7p61RYiDiJvhCYhpu2yz4l0E6BDK3SmQQO5zTbUox3KQvxg9TKbn75nPi5NYxdJLdhtWfzmFRJfhssuWTYfmp/wF+ivCiY97XESWJuxx9njZ2D3j/wBDoVEIWKnKoEhrHAXAU0sDFHgcbtTUAFmpSA8KKOMcuP4/Z/J49jk9RBjNBHVw0b3oomjX97Dlqt1bo0rp4S11ONz+TQ4LQSxfFr2jqoUJuExCGyPC1Xv3LsJF7Sv4KLcNaAU1qCfsgXp3O2vw+hf0x0yZWjhQQdNRyU4juJ53vQbSBv/NhgVvjiLx59CvM8jLsky7EK1ti2PWxZc15oRHNXkHbNZzDCe63zycBax4CQhsl66A1rJ4w37xljFsLWbA1gx1NcMQTOY/kh+JP5hHYzV3mMgf4UcMKSbdXf0zQoAEiK6d8dUL4eYNGdlkvehHoDQDsQl2C3e8rYItUizUMrkUHVCR6bXsFsepqPUJ2qdde2N49Q8k8UqeYAhMv7OYO4CkAiBXguEamxaO60Gi+Dq/+enki/KXfLpFD6yJ4l74kT+ZyQSAUqZBVCxOp+svNqhDdlv6p9FODo2OoQeQ6qeAvCs30tMXW58Uesar2uzer8Af60RkOAB2JLkzy2XRC2tlmv/hdZ1r09sChydT0FRUaUjFtO8L9lOiy8ZjuwAF8J4sIQ7kEqoL3ZvQD8WZSFWrPS9D3F5NhS/2CvQ0TvrZ9YhQIAlS4IyGOyMteBFhh2yF6tseL3vYZtaLJDPfyBGII3Hq8+FZbxsaLbbY86D64KexZcza/VJHdd/jEaU3QLdMzyHbG0wpsSHZeYHFns1SR2VHd6Uj1l2nU3reTksyB5XYXymK7xlgnzA32gh7Q7bW3ek6rQxuKJbvD25P3b4x+/crgEX9ePAA0g1HznChmfXfQyWIOAJbROMoMcFqG6M266YdqLUY5o65E+YHInDsfHoRQ9sv3J7yt96A5DJiMC496Jt0LhQtWHuR5b4ejurwqXJXpXpsuKWV8fUZC1gUr81fPeDIktFD3oXDG6HBINHg6w7poDXh1YbicQrouOxTBCLmN1Y53dYWnVp4QoASPJiokKkCikrJJgqhqoitaiMy96fU0fIPYed8eOzYx59rRemCj1ENMQLSxGoR/lsBgS7KhdX/m2t6F/pPLLu5berAIEfE9MHvO+/MvxwfzogFgYJXtS3eilh9rpO0GS0kIesS8xME4vHQODspZqRz5LKxSMeh5tr9aL9/o4pIUwVG/i+N/zFxm+H9aCWnnnkMu683XL8Oj3jolsbRgRyu9/lLhtlPdI1XRmsK3wzifjovusavKEvwY2H9TUJVsNau8GrZIdWSWbiI0hKdXaQO+fHHf8bU+zh6TVc/o4uj7QFanlKUrcKu9UMLoGBfGOUgru8aB1rbvvHcqfToqVocMRGGIoWhT3cTcWKluCvFeQGLwmVIyjMABWG8QNAw+ltE5ZTFudWKxZUMUMj3EwK65L0oqEQvfyReTNph3O5Yr8b/5ERURrhanyrGGxVjvzIk7CNGaq59k2xrnQ3/8mu9DkHLrdRt6bxO8ENOYdqT9HvTDU7eO1b64cC65KRMeuuM1e3a+/qsXwsEYhR",
"UNdRttbnU4JCNl6n6BrqFY5YtNrWzBoj8fps4Ax2ZiiUmwmhXsDn7okthUGUjT7j6OHucaWz+FBq5uynmcUaQkTJaxNS+pyzgtBGCQmepIFFDGsLSqK169IThapf8BlKz1c4VJnK5nJ99lWhE8PWcnyWIJaaeeZecgbf0Xa7pA2IxeT4rMjh+qh7I8ZeRdTwIjepzJeE/PQvI8encMrcrnQ1+gSpOxHjfFRZ+f8RhZ2HW91h1l8RD86Z/OowshMwpcyKK/CD/4Ql99Z0GxueoQJ7GwaG8A3XyQ56+eU/aOER05kTwSJbjkPozhZChhckczWPA39bxsK937JLP1HZGU/tgwOklviJg5M8FmN+mueGtDBedFA8qP4f6AWFdQxZwVOloWfoYYuIEdo48HfW1D4mMDEHqT+Upcc1A43AZlNj9Gp+avNzWBgTFVe8SQxdOpHJe5SCPKhnigCsl2stZ52gGZ2WpVAAMk2C1u9eSghkE54zx4pXS7L3NX8CLpVH1ru5+TeYvVM763AtkEsACc3wiWoyCsRo0Pi/afWBIomUppOtMwoKSCNvkPKRPMM9b4eEXOwZXMROdd9SzlIT3fOEYvY+UVsCBb3Vzhti/STUU0p9tCu227VprrPxN2FBUXJDDAhnmbSnc5LMy0yH9qbCyyVnDdfe8FoKEFVR9t+svOcNF41vqNIz/zLRIXUA4mnMazxi7BGMF7uzNEN1ZRUQz+jZbXqoPHvZns+pBFh++ZExJI9R2siTk8GOALpX1RH0Ta4I3AdelaV6ulnI15MP655K0BoPVvX6taaJxGszq9OYZWwTWQ23eI69cydMK9j3Py0qK+McoDQjnJ4Vn997ANLk5zUf7mtC2b5+Zq/p5G0dje2eXfgZBaaVBndD9nhyLZuvaS7w0Qeag1idYjCBxCtApxWvNpcCK7AHzfWciyA2sXZwlTQEaSEzB95JFjI1avOqPndOVJEm/P21tzXJrcYxM5LHEvbkIiQJLo59eg7EOlerg+SRdKeKQTfY/4K2VH/77oGLtiXm2BGcQUhtCL+Xs/JRAfdqcGrF0Edw3SmIZM0rOPUJXhATDjPSaTwzkdjxHGYkR3evVWwjAmVZVriMtRS1EetQPg23tdvPNUYxwIUI96hDTklRnIy4r0afzKqGS955/64Hxfom1qt2+hqCNefkJ1ZFNZYvNl4Vf246+eb6RO1bLoEPe++pDOEnJ/N6GpeBeZy1x1PIhgrySA/5Z1rdF5eq7iCszTfJb8+s6fXZ927pieV3Vn5NYbQA8oZcexPoAVTpt6UoaVs2HsOWrWiLxF11fqz9mQtG41Pz9nLAjzYoCWZmos+IIxNxy/nsNpz5GWwbaS98H5vjrRqyQtU0qLAGslfN/Rxqmi7fXpHHUlIBeObpNioTx5DCScuAW2UIEo5kE6Nh+LXweQpozXpYT82ENaUMPM9Wm+as/9H3w2MVoV1RCOIxd3rPljeQ4LHCXYYAvZs4qWQu+nKjD++YMBTPgWBKeGtyTwtlyWlhU4+pNTi7qByTeIHbL3C9ErH7J8VOaiToDfTP+BclmfjEawPGwoXQ1ULDgx2/yat6H0KzVHeXJKKdAY5reXieGeYSJ/SPwc4bM4qiUiff3XcuEkmdjIJtcmBAF7zrgB/oth0Ck8ySTf+tMdAClvPPDZq9nwfbXnEemmAqsU0PCUnJxsnP/KsiZwxvNxhl0qib5h5y0XyCehw/OESMD26JcYrANItwGXIzlIJ3z9D4LhOhE5NQ9TdwFx/kHFhgO7t2bo7bEBp0M3EDNsJla5UPqepRqQH/Rlk3WjtginzWU6mEelUw9QloiPxh6om2XDpoSNeEtFdeWXiSoL6vKwIUJvECD+Fvprvw56sY14VnJtpay/bno6yQwsUq8ntJfe113orpX9BsMubnQlJ7xAkAG/vESNKqJd/rFWUkkYrw1NqFHe+JIj3qjfo+yLKvUhJ90lMLVyehsw15YArsnYMmGhNeWhNp",
"3of1YGkzdzmBTKOnOv9ekQ/TcUZ1c1J9Qj2t+vtkSwAf3BSjdYiFCxdbRg6pUek1pMKb4UoOQg6UK8M7Q1dl9cfh342xXJ4Rn6FQqPG/yAoE0u/ziDlftQfd7Pqma9pP4evv/CTwsg0SGXNf49pK7a4chDjWm/aYse9ouxgEy1Rxa6MUHAx+2ox6Wr+gt/jMZBjBYdpsJsTbozikUB3sDc/Ci6krKD1/65kLA6YQHLLOWfBX0KFwX0EDEdDrfDXdCcm3Zaoau2EEbkRHUijxkeRH2zU2QjBq0nZJTgA6kU4dvxYJiN0z2lHDohiLjwowR2GdaIAyI5G/rX5XsUVTACsjoBzKvSGcspsU6Tse7p30AGirfr43aIGtO7F8dDp44roCcnIKhwGvx16p88JdNQRvtWeu2UWQn5j1TvxqBIf8pSVWEonnXXKMlPTHfKNoC/K/IGU637wp1I7Z5jHFKkvmYE+7thhuZrKx14wuv2bDFNNqAMXUPOw7xQYo2okMXMSDL+CkvlkpNKRjAqFW4eVjpdqLsPCCZ3abFZONpZxTGUqtnxAUxg/RR3kSV+j52dY+ckENc+xxA5+pDS9Xm4hEnseuZS0HP3ggaq6xriKA/VNyWiKbsZIYj/iJDgHoqSyufBv47v+kNFZV3Ae3oFJ7v/GTRaT189K1mNo48wLMrFU97RCd3jE0llSx+UeJ+8KflSjkTGPKZb1YY1PSggVuwsK38lSURlJAnQqt9a2TtNRciE/y6mXL4Nf6W2woIAjQZHdCyvA/0OK+F1mmtez44C1w59FwwcVC/IvK2MvGFZXbrBiA1V2tsbrSnpT46hapNQvIzdlSoUdVJkKQpxI7X/NRSyXExYLzSeveBSy1TQWTMZxxQrL7JoFI+oXCC42w1HlndKGnyt1xpxr8dMuDol1EH/Mk1/5+Q/4XRo2q3u3ZFjq4m/EDgk9FwZzFuxOidX6Jb6GZGsxtM2I+CbbUa47waO9z2YzcUPvj3IRGVd1FUtS3K+TaD6hbHBc7aX4baO7Dj55WdJ305BHqP3oUsXIdZz4B3KOEhyOw4hpZO67f3Tvgvt32oImJwpGj9ty7fcalWfaHLyDbcDFLD2XthcCvuxdKZd0UCDcPvc/t3P9m0NE9UK/M6FoRt5/CZj7c/0g1EBZQuzu7wGQErcIljVcmf8dypk9EBILk37uLkvHsv1baZOeEZBP/J3yCR5tKUha87MFIQziaLEgtU+oKDidJbigMqI5sT64cfMIr8eW3Rg0j94t7W7L86h6En1INkKFRfg1TktkagKBMtePKEjq2CswQF4jduUIB+TqUNn21nrsga+w6jj9GEiHTKIptngkfk2zvcqYIz9N+Vfkn0UTkwNeSKeST0l0H7Sfg04EODkviRHG1LEK5rmx4BLs15lcTh7JekfETApP33+EsA818X28CbM7K9jCzjZ+yaLYfd0YQ1RXRlEswZp6tgXH+aTzHVftA5Z+KSMZaTPdDXFG6PQOmssuWFPuSYuxKhRu8r7gdZn4W1D3tcYP640S8wElYXp/iZsBLq/4gnRw2kVSFnftFpt42nWLSzxL81AuozU4GlP71jcl8FpLj6vLe5xRQ4sH+EzMZB7iuy9JEsFw+1QT1zN6+cAwidJihqfgVQ6UlZBMsTO3P14Png8UKWPgDUeaZv8/X7KIPhCXZZ/uoBa5qDHttfKb0/hu8vezq86bW5+qDUOp7p1NOauPi4nxOMEMakyqQ03dqfjz5TXv709TMpe0H5zS2ERYooOVvy26tjaOUvVHIpEDPVkcFCmmijAGG5gJKvDtihwA+bls68Hp0aW1mBgv7Eg1L6I5pUQ5rlqz3CZFdy/uBSpDzMoZeLpkvs1rL91oimJuExUtCkq5dGI6fufJCzlQb7pZpokUWdRdgrzWHG3e6Fncwp5qc2u21aVsWL/RlDF8ETs3G2lQKoGsrYwtdUdsofQynduf5PwzjBvS0diRt5iT20S5xiE1DwkdU",
"gRhIWITx2fnHzvIbl8AmjGUZNbRY1xoOwP03MtmGRF37hgP6cFSqtRqbhmduxj1ARzDynJ0ByK85L9I0VCWwq3T5I+t/uMz3K/IiA+JAD9MN26Uk70Pq5ZJRsEJ0VidhYnnDO+yIDQmbR8aqxLWY68eeGojuE5Pf+/YlV19XtYO7xjHB80ugWOC27RYNG44RBu8u0Wdo6Qkbbo38H5UxA3RAsn5u+O+IGBYUtoF3MJGbkoT5G2O15+NK+34o8hEUPTinznHK2OGxiICyabi1bl/I+GoTu2ZCdr3975c+rHl4EvbDuJd/yvFiB3IXgVMlCj0K0ErxwaV0JE+Bg3W8+kIcoEOJBMdbXox+L8Ce/BJAiVxYXHpvndOBhO4Seoygrs/12xb7NAORX9B+W6Llxbq9XlAOqKs8S0ocQtPxsDIeyNFNmPY2VqyRREAwk5F+JoSVaFHXHhyeZDSMpvvjODJTNAJZWUuXEjBZGtbb+b8jT2593BvOwVr5rTZzWRjf1G0d4dd9t1rKczEhF3kcDkerX4pAqnlQ+5aJ2CH3m7anPoAPRUab0au8wXpvX9XVTpNQnaUZL6amab1oKrD6Sl0KOfulLHy7XRAF285TuT7bZXrFFA+LfqjURAiyu697svhFE5POd0NMUiyb4qW5aO2qh4VsftaATMbRx7Bsn1nHetZYYD08lFizp5hcRUzR61X3WD9wL23rFSrz046CASp+2CXNiql5JJ0ffPMxfpnCR5t7baQYc6fKR1cVEiGcPUj4FNzMN2MQKlEe7Mi19yGBixbdvaH84bPbe4xSeYsASAOInlTNvxZXOBLay+6ZM8uy9kqWAfbzY6CMJKNSia0GKYDxgUNNuJPtDzcdN1XGrYMOQ2I/RN4/WTg7gA5n3MIiKCBWpI+GL96zQPoJqtHVoR+u57+nY9juuQ4LvXsjPkmfP0mFfyeUN8aCTBJ8D4D3Lwi3mNc9iRSFsdZSfeRyKob4dUNUAf/JIacKZFD1AJIwB9dAK18Ss4Shq3Rrid4de9zAPIl0lZsWpPSwT9VDVtzwveoRLtjQWTmc+Xmtyr14IsCeLG8EztuUUZo1Me5+DZrqNui+EwrWDBs8MS1PeacGcB9nqF7/slOeE1nBO/PAeeRy1LddgtfLnZASQLWAtHD04PKF8GLq7CFFBcGdYNsUvkfEzpZvnlPSEFjrnZyqHGChT3OxfiTauErhYaTmaXSvXJQd4KYrsGZ3TqtIVCSFLv0pAfcE0iXQawa+SoskK1+ZFeVh1WH0oCTpWPHeAwwIDUKWhea4mapTSlwMkzNMs2MSBeHwMTkWUaHoCfIp6sSRvlEWX5Gb/4VpmNOgsO6YheaPwd+/xrSkcQWwla1rf20cisAx/IUkkEzXbNM6o5eZKTKzroJAtvRIemOFWShI4BbNpMQFysct7WpOaEipcxzh4VDHaevdWGF3Wv0JgNVhquKgQbA86DcXnADZbmp4SVWU7F98EJgrfO5OnylRPPFgjIhusVIrE8VZ1PUzwrSoCeRrk210ezLgj/x6WMKEoijO3iS49YewWIsC8XosrE4XHR5ZGvcjvwhSdh89FPhsqCdvEkIGVBeWWdgr72erIQlFE7PnUyY4fsc87Nbg/SmolI38xp/y6odudPeioLm3Cm4LlaU+f/ophpJylMZH/yYtoCCuwY0pa+sGfi1L1U0nLOgjfU9ZxG5uZrHawgmKyLfgfk9tjpRNeJNzfCcSTqxZw2mPxTtJ8uJ3yhJHKfHYSUOHG31VyQ9UhVlLxps3hwwZK+PeS3fyyaYr0kuRGs7Ky3r3O/6fiPeIikb/SkheDMpFFW8bTrCo8gimPKy0/yiNk7xcmIpDseCliobGfbsBRI6hKluuEKVSqiI9+myUEN1V/+3YuOLiYNaqzeRVPBVOd0OmmhVHkdLbJ2HaSvlHSWaqhQgoBB4LXHafUaGN/bd9uaJVRpkpnAD5f7/4jhV9pQOBZ0H9n5cera2HAiRR4z1J",
"mqAC5JbvzACjWL7JfSIeVCJeKBLDuYbRfM8udm7/RKQo47GM5d2/IX5quUfLEI1udCwj5o8dtGt3ZMoop4m5JIh3lZnh0jVFvdKHt7EJz5nWegd0+VPj/nknHiKmhGFAHiVsfNbHBEcVjqz/20amAz710ATSuymEhzMd1ea3a0AWRMynl6BO7I2IQuZu4AkTHlFMkWfzVDSnY5yIPGYRcWqjmpDQoEWwWXki+TXZrHguG5Zog+tJ9Tj+1BHfPjVMKiUeHwmpwwlW3q2ypUzNHeixxW/d+KGdJcutOeh7v+ycbrTB4KN9DNN7tqvv9D3SSB6Pmhtsj2UX3nD4e2S5IIM83ODiw+Rm24CpcxM3GIBoGMZdPYWQ1GG5zeFTSIxrxCn7z86vvTfKYG4PnuVzvoNWoDes2nG7gPJBSsXcRmv2BhtpBO1OLL0vYUKgmQOawEFkWy3Bb83n9180jMh5q5/4gsn5sKXBlgaRqnohf+iL96iTm/uviGfRim71bQj+rxuyMmxj1eicoQ7091nka/LAaM33zirFozW0/KtyEZL4wMRhmKqiWDitL5q2odJml/Xe25NYZVgZFBYrMYiz7uHxcxTb9yro+WUtBNSta7Ozowh6Zy4upMESBu+2a/ip0QTM93ejU1FRFHlAhsRTNotbhgcyGthcObjNybeHg6w3lheB2BSnrqfzc1g5SlpzUi0f324IidhRmPfafJBVZFzDiUKuHjO7x88XB07EVCBbVfzhhf6MSNIki/Ja3nPkY6M807bKiFLVQNGNdxNlcW8DBjR/xguCq9fSy4ZrYPSeh01nyfNvo6hgLNI7cTADVbKwN12JFqeJ+T6E5E3rCiVx/f7sC783kvGglVTqPQmkF5QRtjVY0WNJcAiMAS4gSMsLWIoT0OzHepfPGkzYxw97F8n9ItevfEcGLpxsCklpVeC9iM/xo0KO0SdPVZ+uqZyLwdurhU8gKiQLC679AFF/M+sJX4wolBLh5zDS890cV5GIrHMU4ewt5Jzdl+C1GUv/Iw3sEAspiDTZtE7wVbyC48DuGQ/sBWsKmwIG+FD7fTfGnAqTCQv4ZQgdwv9lNkXy8wJDCROyBYqr+rXhm1rMR6u8V4JHQaQw6pEecVaAy0eh+Fqhk+v9yxRCKiW1O+QViK5+Q6LyEuBdlmD3UJeT6Ax90XXNXlPwUEmwYLVla/9LJcIG8tRnPmrzkp5phDc5gIYISg1yxq/t7XR5cRnX0z5EyX1iVxyP70/5AxktmSV0AGytYREgEgumC5uXnBrr1/zMfQFGx69UIU4je1pRAbs0GNkIeIdyrN+IruvMPFmApb2FupLl7UmROy83go5v7y9/Z9TSH1sUxBZ3330iyTjLbhueSpXJVAThyxAxne6mTNKCRb1VBQn+6nISRw/l+5IDzxiThAHHYmFSs0zKp+A2pEuXLYS/wXn3C75kUc3ZCy+vMQtGKTrtBSP1ww6nVXYuX2Mt1DqimPF9IVkizmYhCKI9CXfwJpAF3XzeIxDXdD+auIylShv3Wo1qaMsng9FCFxVXncY2ghlBvyY/t3HUMhtC8yT0E3Deh0Pz+cXWJHNlz6j4uVNlAT0m0cnfemA1UwsAc+k3Wt/NBHNcYCcBQjjKHpujQBT0Tqo/jU6Lf3vPvCQqRx/yvDABjIpD6tZnmb0F8XtQU4ezTzdoqVrUGYsc/evYhkI+dys/JoqgME/RgiaJF5vcNDNd55OScLYLG1a6/qVO4HCVpz3Kje7HrqszzPLh0g9o1/J1ziVXsJQ2ih/DTAdw7pXXCJAHxojDUhaCRj9JB1Ue0dne3PHOZNdMFcskZ77cfdkgRhn6TXTDQTRZrbwtMFp8XtD3t7vi4EuveoMzSLZ5rAg+KDJaJV3amJUGhoyTX10np6WUryBB10gC0kbR7ezmt33D+i9FqLfHZGJx4rOtcihuwMoGfNNZk5gOQNKKJ0gHx+7kAZi3pRCrFiN7VDfhE8ik3N4oVfPpNpbp",
"9eqc5/OSHbIN/GZufidWMCmRYK2LIHxQmWE36vOjHqeRMpS35nDF3wFVsvWDgst3vxFadUbBi/z0xNRxQ5I5jBJOw7n507RDA5bJoizguGxFZkWgLrWKIvreQLje81dtzik4sl5RVuBoTxao11ewlgWrYZZPZ3s7inup07Io4jwHvMvtBLn8xuIcl8TxqgkL5cT+tdx2Im0TumAzb9GSp5aFhT16sATTa9W+qgzs6wBfgJZzj/NUfTjKgNKbqg682/Ji2jjxLVDLPXyeZDD/1lLbIVx6E51+s/LGq7n2OmWV/1AKroFHqilrAN1F1ud3IDpxwqznjHBDK8kUQCMDnFqCxN0HqgYAbJ8OHeUHdQWNvhds9JknLvcQmxLDDTSayZhujexnkNJh+cjLEYlRxbmQD9KEx+jx2G19dkGn2ou1HdYdACx2IogmgNs63PmFmtsTBDYVzzV6v1LuLndQDhFIWNltbqBDqLTBvkiRIxgXgn/3FtizR4h2le/CCOWcicgL6WGa2txYBezBkxRypjWSrawEOogbL+8s+v5i5nUeiZbEfSuQI5zfaowMNfY4cxmecLcU3dyOFKVg7ku9VHwPlkDmAUK6HeGGtAsNP0Shwjt8RrIwfgyX0ftdBVi/xblZzRw8Z/a0u3bGaqNSZdCFKiafC6ni9R/jkmS71MVnVclK4d1t/7JkxEp93vFWHOf8nDTqOGaqyv7ScpsxzM/F206KxobYn1KaiVLBKITOPfpZUyHuAhYZs4NFDidi+P64FQ9LM49+EXU6PToRGDpkQ3S7/XVKKEzgeE+l6pjloDdfyMRMIQDEN4EQWM5G5V74ipUwhxX9imVzpShnFHx7Vor1SXBciKBsXrN7XcpIbOAqrPR+DzIDU25VUUF1QyfPmY09VM0RpBy8KJroEKVkPKqS4MBw9hwTXd7o9sIaVPmi/KO2ah65P7LI70S1kmrofj8KbjzO1RmIeR7WWM0fcSB0Z8wQTenG1UUyjbeA7+XcCVAaNtHldiEAhzhtWphfCZF3DK6N/KGRK0GK0zlOGVNoAkFWT/CpPkEgIsVjXyMh4Bpbamq93b24hWmetrU26PztdRjIMCUQZKv/RuyFmrO+E5TNvf0WRR7Lvhrf4vKuXhWBl29NCvWfdCTKhleguysirqadLn0pq5desET5Go0FlgaBtysjDy3pj45mKuAFlw5FhgyetWlX7oubL2+2fpi6kkjDnYZo92ZYWau5IVNz5sr7LUMZs5FJ6FJ5u2w9pCtH09uF++xLkXzzRNNMx9TQMxjD5f9rYLxA+/B8VNBghZfNHFAHoVLdMvT197IXqw0QHuOdFNy9gfg0t55Xwp96Lh/HLIOtSLyvJYfPAzzipe84OcCVuhiONIY1FFdl8zlRE2IwXlt486En6mMP/vb34bKJ9ND2+FDVyIZe4IcKZ5UuCOYhFvRgj3WDv7QZGjmpjn5gs01O1P3fzPXZFrICnEHX3o/XKVHi7XPMfFxzFsMfrTytTLfRcWNassw1QuJpXEeOSysNkt2JacrFLSUpWHHZkXH1ysjOo8TiNLMLTiLG+xaVgeiae1Y0xN0VG3q/qtl4AF/4IBusnzAH+l1fHAewRQoMJYKbe8fLvZy5pg7/wjJ0VoFggLkc30UQa82APwwSDULHGVFRcs+u9ItNLK/drPlnaf9+HicE/g7ecHFDkO2rp6erfNEvDGJ54uzNilYyOmuCm1oxjomcqnkY4YuDUtEGGoEG+diI0pmdj4F2ZUXFLmdVtntoEZZun1Q1+6oLv4HRhgKPM4rCmj63KO7/rEFr91LwxXJqAzjNuqvUZ1SeBzVl6ehwHAz2Y19I7RZ/t/iF9FbfmX2uNnIz1vPoo9iHFLo8clbzDxBBsC/vYXIxyroMJSYk/QXXIRCVCWCbaY1Xt17RQ7F96kEt0Ri2P/0BHuqVvnzF5F+Cg+78vRcB4m8d9Kmaqc6KCPVcDNJ8Ht5wKXvhrvGSA9Q/knxEkVJe",
"cOF4cL9fLCpsoSJ/dOOzN5Vl5pWdo2Sf7p4zJOpemouBvJL8ZI8j5y/edXblPWgsrny23x+VfpAj/395MtlCGI2MVC8epJ4VDkJfXoMzs1ttZBwqrTk4t2OpCzX/mOoN0KrJHBiA7LvyMShjLwr1cMBQv4sQxXqjbnphQX9TgsfAmAsH4RGVZy4QCPSvWZN2VUPD5feVoiCLGu6DXtzfOLUDIUi+8MiIW9SzT1q6zFZndqgKqh5V18G3AFmakG7xrcNbBuNi5/0u3yL9MjxWvMvigIIUG88dcuUePtXQgEKvLSLCzJ7wURSnep0dy5awcALJwrbe6+WsqKv/uPCMecgexzdvjSm8gYYzRjgJ7t/3Kv+RJlCHFr40buOjSqLBxyekwjsN+d+zcGZKou3MLKVI1RHDDP5WyARVToBBNVXzlpt+S7guaAA2i8V80O6Fh720qAtWnUYf/OwEMMMhNgoUVnjMwG4cCXkWNMtT/6uPYMIMnhAZ0TkXL8OPA3rT8ewCwt5Vla5YQ/ZphcyaI7RbVcioPwVi4ql382Rrh7LAtpX/3yE4No1cduqWyl1QQJCAlH3UDQ+3HuYY2BL2q/pjL55bvc0IFl+O/TPM1p9mJrIdgX9rOPBG/+vjulurb5jKM6xJCpuKniQwKBbGIDgjAS1zIiqJ5ajMO7lObT99MX8jtNre+gcvRdeWCxsc0M7gNP1YiU5z3rWQ5OmaYr2BqOBTnZ3+i6UfiRNer+8Vgx8K99qb8OhO/jMMNiFTgEqS2AzA2HFRuOspj8cMpZLF6JceQ1fAkpTrOg7QfE3R7km6RbPvg2DgKy/vrqgE/zokwTSyGtIXui20rSi9VrMdIjx6qkGfw2ImLO3nSnKiU58d1mTwEgtJybiYZdh67gQaCpquVtsdfFiksOS/edaUduh1x2PUaFCJA/XGGcfdTy82BWyZKSI9/Z9CcUYlAGWWptn3H6SUP+e//6oGit+sUXzUk0rWcW3eoABd47zyXXRZvZkulaphIAIw1CBraYz9jksk6kZPAVUpPFFIEGOnf6UFij146CR7HlLgxveA2DjKwRbaIK/AcDBbP+Nh18xORB+BCh9K7aGNtJb8t76GJlqUdg15TsRLf/CppefRCrtHgA8bHfdNfAqH4iGdBcFUTiTVzh7ZGVRTtzk0IJnRZ01VJChvsvtnBCWAclaZFhzBhvA8hOvUzAMwoZnsof7GbqIdGbc/CDWDFN++SqTbF6dalbzRZJ0jOZ1PIUPg3aG4ZKNc3nZ/Rph0zh4vT8xUuVXkxUcsikIpM85RZSO5yBXXu9Y+PXW6m2tMi0c5v2+CqKgcIitReCxs7FotubcyGiNhVokH2nZktEj3aqV3s2AN1dTRKsN878MPQ2gpgktcIIzNb1Du7J9sR/URBXMU0dPin4u3XEQO78oN3aGBPasOyfurjJfi4QKQpuTtEgzIPUkE2MqhvlhYoEtXP52mBa1yahY3lty+OOKC4m+2cAZa5TtvR1OH4+D8jIgUow2p+xdwDX79xAUih1g8q28iPMyr9+w+xPnBhQAp1turkewl2pLy+f2WR4HtPnOEKxU1iF85YT0B3GtAKuGvZuml/6TZP/2iwEzKxAuxbzTw5XlzuwzeV2jEQ7z2cS8kw47KMpzOzgyfN0BTnq9iUhTYqwh874F6qrvg9abSEfHg4JXhpRX+z/N5mgdAqCInF9jK5qonAOF6UBPnN+cK1FGhODOgi15DyKyP+yVfLMooSPPkDwtIf7AA0yp9U/EIFwAQg5Us4qG+Y8dlJBdxitu48wV9CKgzQQ/hy33ieotx9ZE+rq4RMdkEEIF7wiiPBWRy3SUUr4As2a3uvnjf6M4mTrR4T/d1hPyT5M51iPavBnqyG6oNpBtjhKnsiwOELxFrxU/jJCd7WwRl3FHShNneZvGlPQ14DzipdyZhm7i132aklHlcKgmTNnv2+4h25YDnMN2QihULe8KBufeEj0oNqgHlYDB43ps+",
"bffPH89EYhue8cSi4FP7zvsMAxRTJknemJ97RNER4jsujLhnyoysHye0g09aA6TsVfmvd99KkS8dw+vx+vMQSP3gSupuGHXpeHPcyyXvlZATtr/gMSTreQaIdAxljav3mZU1NuNrt7a8hXHp1+wjJ6KW8jqabZjOWrFMqr0BGlJ52r9EmiYf5EhDzA+nhswbug+EHZAG334EwNuH5UDOf782uwB70NTyDn3GKYAZ1sLnUD9b4be25H+pvCeSMjoqY/BmL1KhDEBMD5wlsCTaBsLpxg/xns64uPn+8VicCquWRN99PD2kk9iPk6wW++JAEY8f93vPJ+ngpXkbZXo7PV63bf06eHgFMr604Uy5nVLUVlGLGULL0a/+t/4byfPYdL41gvbu2YEeGKo8y/5n6kyGe5gvriht9CnsydbSbnkCMcuUQYH41b8j8k52estRxp+aI/YWu72IiSdWS5XtOLiypjZrfCfJJjRLxidcwP5NufKYuKRgoR/4MlDQoKGYprKhRiSwppA5NFLAL37Q81rdFuxl2JU6CExnkCWvL9UjBLsAcnYpab9RNzHs7T7N0Gp9LvdM+gSmK1vxxVc7l+xlmlsEY5oRabQbApAnMDL5yd6AGgquhdYpjdSJbD4gp3De9e6hVba9GtTGwePug35DJFqYkUROJADfa12oTJbUhLvE/JelaX+9wJlUO9UH6zDBIkr3sIwmZQXOOZAichhS23UjTRxv0iN0X7vyYpEOUbQohl/aZrqFunsanqb9b4A9vj/YFAPRovQcgpuE8rHz+S14Elhh7NTxA8r5lqAfTQQDcnHsQmcKgQt4hPZC4hvKLljGzfRcVWVHlYZW7MVkqVmSFRbRBkCM0qLdDIGhy8lSh3HDRvlm68iM1I+caGL4g2RJar6mD00L+JooLE3xxh6JZ62XNrFfMPESSUSScwTCHZJQ0X0H3w+1PA1McyxMi9iS6QUKV0ibMjJAah79NFDSpASel2cDGXvWPVl9lcpnMzQcexoPYQEsJM6sRcnlHcexvwZGMIRtuUNOAbJBunVZmt/h3ZtEscUiZtvKAicr1T9YtBPgqbLYKiWiYCztpfucHxT40Ed6I0iCKajSSLrUqEtvLqFXoMfTbnFfVQNoiAYCmZSWlj0rGi645hyhXarMGxxSTh1Yii/v4Y8X0Uc6SMxz4YTtFmm+bGaESuSHQHtL5IqPtRFDZmxic4dD1tV4669ymbjfJEa+ONAhpdqD1WygxPYIeFrIcXPOJMCoPwBGW+fWsAlwCHXkk1cA6g5zBiWBNDh3bPl9u4+XjOOzgs1s5yQh/tjCFh3UP6Vm/xv6Ow+cKQm9lz4KQKi8DU2wbpXI4sltl7HoAUxfo0COypr4aWbUS9jhAYAAAI0LYJZh7JDh3C09jwSCu50ij1oIdYX4X59hIS7okBTY+ecn4on76VptR2MiMEvEGDuAPESuYkkZEfnapFhzkaigKDwgIpzbca6/QR6lscXsdxCbbuSVqMdeGVkU0kX6xMJ4gS/YpoLNssqoEMpNofory6+OMC0lo2GXTAbk/gJfSnN9d3+lYQ1llIELDM0BKtb4chmNgvvf4TFjC9FgBWcyEE1PuDQburLWk0ZLxqqquO3ebl3nffY3A+ZIyLqWy2UkUGzH4bpehvR4LvDeoB991BBsAypjRZahVJehsl5lbrX3xizFNIVCnbc2l/qZJCtercouXqLgow7n0ct+UZ0FB0aH2pWFeK/x0f4BrNHj1rGNHuCyYLaXAy4dRKZ5Ox6KihMGR6ynTXd6dlYkEJScbNyx+4Or8t1HlhaSIVg6S/PxqQhNzDItwIESgtNE7PBhGrB29wnPE4p0GwjkGE9YNdGd9N6YIIBWmcLWJtOIsl2cF4gAgY/VhQJnyDzeKA63Nxu39zrP7GcLEuww5RcIZaN0027/RrbNn1NT3RJlOMpPTVINmKeB255qZUAZAasnjMM0HU3ZfICrxkeQ/4/OHXoUXoY/sTQN",
"j43E2oMkw6BsTSRsgH+dpmAvI8YI/4ELIHGuzjBDjsBKkombgjdl582AXG9XWPopJgUYmlXN+esDgj4eHtJwguOWXrr2gLlWf10eRGVf3EQVMqoz9HGh2ObjdarSMxpP+ZhNbu3mBj55aaBGThz6M1Gpe22g8GAHilAJdj1Ia7twKq/6Mjg6Hzkq8rU4J4wbCYGcyvKUpWKzSv8xsefnkhQaT77Q6dkO8jf5vUpUsBZCnHvrMxC4a+aF1MgQKOzjiC46pMFIv3ZBPfTtL+D+Zepl9GO1yERpSwLM521GOv2tkRFXsSr/my8ZSwd4wmR14Zvwjy8Sl87Wa/snvJJU9ARfL5ScPDOBtVSOi3efozTlOkroByjHcbcFSyYRmvuR1omQfZZvIr06P289fPv/5JMhDX7N0p2zGAln6n81zWZNJyJlOgZV5Dsje2Cw4PPPP+QHCMBfTN0nQM1kQruF76jiGHvQHLRBWpqptB9BJj5b+javKdgCner8hQV2n93fc9NvAAoM8gQJqXYVMg0+elbbi9xNc9sSVb21mqt6gKWnI5+l0Na37c2FAsJRIt8wV5HbEbKPFGYtKdgBDqOA1CYT2bX6B7o/gmmVhW0vmiLe/P/h18X9IIvDUWKiHoyeyzN2zU98Umx9x0iw1lDNontOGqSehxswQHllbAvrOf21juWKROJ3l7BI1MDa5+fspvhh/2MF/sL3dQtLNO87+XLdj9NN7RKwOCVhGPT8xn1i+MZ/rOYQ0Esmkifz8Xrzk8m+j5zE0b4PmesBK3qQ/pex1Q9dpVSem0C/i0jVGoQusmyndpwYLGt68Zd7PKn85QfOhK5KYgC6fcJmNhbsYqyihkCu6G0toqB0Ke2pKMxJQJIyRimq+u3pm2ZuZUsygyyNfaIz0Gy5VNxQ4mlbjHAHbaBdY3oe+kSnejQjTMQ+RCCHoVCpVR8ZV+JcdZsC4RTHEcSAb0Qkmo7CxwSCZHMpSOR7xgGYp/stodyYMEBw2nCBvpKb8Cr5gX6F+sbmKP0/ZDKizyiQMD1f3jt6uz+PPE+2kyp6VrymDkBGmn6H4OklgWuPgQsWiK3+DkUBl/9vhKiMcVTiOxqjSK3K3sE+k/AdK032ULez+wFnZqv4O1eXmGpHsHnD9tc3vaSJJMQvd51EnxyR3iStv+TTiW5TAzCLgmJgGTMIFOGazCtq4+UuOYsrRhP4qlaQ39hRIkYylIMnj+oexvdoLcB+wMFkxwVJ3g2BFHXL4tY4N9NLwmTQ5OReiUMnwForhXcOLIFINHWNAOCfwvC9PDmaGUbd0WwfV3YVbRYImbkionRydarF3sPOQdIA4UgAeRPKsIdSWkxWukXtbjRlbfy9mXt6dbn8J93UlXZvNXzxtGSx1wBXQqKZ6/b1wr82Od/4nDl2Do3iYH6gWUnkd3Z3tFt5t8DL7iTx5Na2XlslrZfZy4FbqFrzTbPaWR5PVWFj3fZqdDiHm3L6pbO+OzaZ6v1EMa/w+CZnjlcpukqPER62LpCvxD4v7q+/wIy053TZMtLzCtCXxS017ZZf3Dsed637J3EGqQP/402YQevrnVfDAnmwnXlhDtardpLvpWJYmzbAWF2nEjBnMHtJgPnTMR9OmBWGNmQwVBIJ6GLhY1fytSz2QfSdXHKxwxiQcy/GhxCVjK6/fHDZnXAs1K+qkEEXWjux3Y7pvdmdBD4RfeFTR75zU2n6Vm4Grik1DAwBkK0zpe75x72SG8rLk5ExiopA8IZgm+JN/TLPII4yZOzsxQARrurKyz42o0NocnCr2Os0H25XyYmM/67CiOWbf3JcbrT9IZ5GEqk4l6nRE4UCNvOyASAkSYe9lN6TBoAsmmAM8I64bTDSud3DTBH9T/VBZkpxzAI/iLAxQ4sIoum4voQn0qL1gwJH6yh10UBbDfZie+uaAP64pr+5jGHVxurQr7MV3mgJAXaTDqlw+rR8/U2Ng7TizV30vSqMOKDVAiAEtDWEFnw5IuK8",
"tTbOPqI2q6n6K5peL0Jst8Sc3gJYl+H5SCz+SL9hk5AZd3Rj5+C2LeUi2OMxC/XNCec8joTt2zBOJOTbzUz6/DYL26f9elCOzWpwV07zebbNpCAyeUeJxyrZaZT+CuT4+SLFOELxJHRyt7O1NgVVAwzXQmS1mlXMDC4N7JTqnsoDe/1hpVfk/xALUcX/QXmhSul94+fqAtBEyTZh/5Tl82az8ThYU2dTQyOZ+2Na0ch6n0DRKzyRhkJ0G4So7eNgU4q+2Gqb2X7xGrULc+ft2zyZzuNxeHoIH0CdFLOD7v1XI8myeUpou6ssT2QxGhHqtjmS1trsbPzGhmdXrJJEYfHlhdmGFmQ5YBcQU+jVyNABpHYPZ8ZO/PleNMh4b2EvSHGQJ8kj7+TBJechTIxTQyozcnQFrlJ5r4k3r1GzisKoL/3EcAdwvRqISD17utgRQVt7dah//qmwiijs7YuC7MaEQXPGJRTtW+4+1+267nhuO4Cqons8hnQok64hme3BgY+n6/vfWLf0H3XZymvpYjDf5bwS1rd62P+sEa7G87BveN6ZlVWPkoHLMJ1//m/6YduKJ/U6JvULQdkkR2FBViGyaM0iuUL6R+VcAnjcRvp/bSa2f03VRhZtwXdbWUY+OaaoO0kxflWyYt3LFdzcOzuufHKWblv0ZF/x8A3EUM+Oim9scjmcVwC9kegyXC5pWR0xhHnvgiiJ9Yj0ZgHOYTw3PZ0s7alQg9/9sESKhsYFBV84rkFHhepcESjK6n3SaWzoO8Yfx9iGUxGy+8JFhtLt5IuYt5hOD0QPap/2LEKRgpGn3uonu4VMQyZ97e2jo53eUjLYDhOaHb3og1sAv4C1ZRZ4tH8C2itN7YlSnRedpDxN+ydy4U/aVlkLcvuc3PVTwFSGBINqEunMJUHnm0kpqY9Gy2vVWzgai0BTvnxgnZeTJxrh/HeVtGFgK+UgchJOI+6gjBf73zrOfGul5HCT6vg66gomixtLZkZ7B4jDP+ghMH9Kaf2H+zMH/wibl1QB4nj+R779Qk/abW+oEln8ZJf9NhHTJqNMMxi1rcQhOwTIBYpC4JT5vfta5jVFt7MWQO25Nbrcp6fXOt61abnPhDMhdd3B5+CHICQ2CtQVnE/Go6HO24YDvRXBBVncJAiPDEsrxpJjK/UWsvqL6cm59wG7qYv2ieFdFrceGOPYEq/bMvojFAa/cqZKsyz2tlqL70uBqhe2PTvJayX/MHiyYsgrDA+TYUg3lhUW4dcvmy2R+X8G7itp6LNNKFAwsE+YwRuBsaccEyG3rT2tEpn9c1d/3ggvf8iuSYJTGeAacAJHej1utznOoh0sgVESjhCmHXy1OGxKQ5uOSzUB6gPPjPKIAVTk7NY3p6CiKWlYO2HMt658S/fdoHjIIaDCJF4RwwomLsU/V6z9NLOMVOEOoKCyMAUaupCcR/XPAEjiEgeYgzhMgYx0FcJI0dPmWFF88gKh2vMt5mdnTPFtKYNZWaJrB+TLI2l3HblSMAU7czvNQ2c43zqzsJeA2OVmvb/JlDp1EHe1wmBsmZqWXjkpInTVkFmJT538og+cAm0blX/meTJ/HWwH+8BFLHkt/FeIUsFo5C7xuNuemsV9PinlIuPcoEYtuyPUfB8aQH+EXbeQdKzOvK8YPmTrpFnWE1mhK4oAiZyG2ggTg7gcB6PcnHz8Yh0NAZy5awZ5ydPbhIcHZQ4YvghVITXX3pJ/8lFnmth7ZVXJD+YebS2c1VNodqGTbYLH5d4s4a1bMF9C1QFF3VJXbWx+tfA13tezaFgJi/wDGl7/85vIoHNAwuWv1cmGdBgkuddoCBHC7EiQWCa4NFBebHZEk1ePgHabV8a/IEkTocH8NP8Dx9OCutEk8zrtlgt7f8oYiS3eBClXXFZ6hty4Gtf9TajyoxH4F/T6JmK/CSXcwB0+uq7JQU7tQv8XRczK/DOk9eMch9E7vXrhFGBHsLCuFolhwUAZg1WyF5y+CKk5NlRC",
"qPD3cL+zhdpZ2N816V9HwNJu08tE56pEw83Gz/qjjtyWNMJY0SZ8v6OMUF1y38QvkMGUZYbmaeE2r7pQlIT1wOPcn14mSsqcvRTD3c9EFNpYmYf4VhiFUCNm0+SnSi7mpbT5n6pCLBpcn3WzNk7eVEs7L8O1zD1kQKVNSZ4G1S2DZcdClTq/2EdTtuRN7KEAhdp9sPB8K2b3dVjrDci8YG74S0EYkj8ijjsIkMq9ltMzHiQxnGQgH/UgT1vNM49xpT1L3OxoH/x6TCXATpqvOMToTQOm/le4i9V0PprAgRt51vcHl8KMpBHluDPwveuyDUHkDBnpWar+2Mpg8Kqyl/qcBilw02lcSblJ3JZqaq6GFJ00LYFdA2Xg4DyT5ypkoVUQY1mpiWq0ibvoexNpyhFK+476B8G2Rt8nFptg+FSRqdXztOC6UkgRTVLnDcU5tBtvjL+L8vFucjsWHwIJDHrSp+b1+d66UBZjT9WTS7k/vT6pW4hdgrxxRdOxaFe78UT4T+EmEHlAj90IDA45XNTGcCuoSEnNDCLXYn6C8QeQh1enkjoh7VkPgL7I479uqSGL0iUK8mL62VNEwkN8gtpO2p19yzMl3Bw9Pf8JmmIUerQb9pwAkqOwbT1cBVUqEFkZtfCnjwFaDUoF4YwiV9RBtQfnfU1RoRErMp5kl9UcfaC05/KSH7PZWve3mL51JaFnVsHq9Ad5kAkXI80CaEJ5XwBEfa7IPUXJ8Bz5MabkvLAMFtVFACGKO20uJ/gAe49+J5nwr2G2anc0+ZIP7QAkBDGcwPsuHSlYeYdJ3uWYo7EJHhxiy2QRuK5UW+mGl0bZ2k31uncAQmJDOKeN8v6ueqHI6utaK119hkMiHgf87ft35jdoJtYfSFd+7zaEhuGOSboRUgSn6wsIznh0B7Y3x+5lGVJKYEqXmuY6oS/LZ+LCPw9vqq79bE0FU8ObyBH0+UrwjrKfXQp1uzvgahUSVMO0L7j0UNKOGvIcqCccKjOISGriiSgqZi+tzCopJ04iWLZguJfSGS87pvUDjKViXz14UZMYHHAz5Jpl0NAiseYz0d+amOMZswMDeFi7NrwMyZ6a05j3NnTLuMiMExA/jq1UqGQuMTPDIFFKryx+flIp1vvBg2c8cM30NdcAHxQdY+SaleAlfGYpcc1k6sZTN4pfmS6qItgXmiXqR6G3OT3TVsYjQ++YcEiv90IOfXlgUlIENrMrM8EP64i9AI2tFk3Z5cJ8Ix6sC/UsCdo/u5Xo99oLjbm4/68QOb1HrWgbkQi/pHbf4bZKdwKPxHsdpvTLlOkeIHSdrOSDcoNnoRmL3X6qjIh0paeaBYy70Lhg3cMyLWvU0bVzH5rZ/bH893rYwBT5QoPMBg6Ui0r6OWFEGc5AJzsYieNmVhsUoeKCYu0E4+ryGjXPZOBGPAnan6YEuAaBljTktEk+w7WUziBD3pUKvUaoqMislM+PS5T4k3jhWLpY9ahllCClBSGhU4w4DwkzhDZh7q9gHFFEv+fIngA0CDZsmcVnt94ExfuseUXSHffNeLd66CHL9UuEzh1GIIi22in+xugLUiTxL8xUnntSf5XwyuuoCwwLwo/6Qwkp6xyk7JDVJpO81hCetb87LgSVKPDWWxRHAa+MxjDrdyjTdR8Tt/scjMinXK32f3GqP7rwuCSf1iTmjyxunG/InPw4MynL49wOksDFMrVvwlWj0EbarQOpZ0vgQ7o3DecqhHaYqJ+B4rr3H1WInX/GGzigD7yAd1wV87SmPjM2KbpRILEC6/mw9m1dL3gwfIj5WkjXHG55xV+UWxnsRyznEs4HcdZIiVKiH8JfAt9AUKx8SRWLhqoZRPpN+/T/KqciFQ7seSjuSGaXJwCADRVw1PKsp/B+jwG3SOnbMo6Kz5rE9FKGrW1a7FjKID8ARb0c9CCdVzY99y0mMZMsU+EKMCObG0O2lDdYmkn/6DsUPjt9DPEzB06GFpgoP/60VnGwWmBUxK5a",
"SCaIJ5ZZO0BLjovNL6rfZjQ5Vyu7xz8Fmr+IhEDvIG+or9JwZmSYnJXioCH/ajI49l77DfYY/BSqHOiPpp9rhwmX1ReQN+6VMyrIfGdqjBa63kmIBWbP/yUzgl4zb8BkSJmcYhcsrW4SDNUFBMlTfmWlgAarxr6iwz+izdNopFhplRIbKkdXCnS0JshLoW04C6lO64Wzs/u7bVB27e2t8+yJhWq5BP5saiZNvW8foeqSkVC2dhsY6KLRI89F4Jna9qDx6lyCN1Gt2Ob295Pa0p9MzedDwJeQsk90MUze7NrfJXPi2fkxka0E4+41vb+AiQZ+fJiLDr30FfksxD3Qx0h4p9WdxMxfY+ongv7whqObDP6kEdJBu5RM/Aze2U3XmdT6bmA/Pd8hHPaqX61sw8ofLSyGGWFgOHcGWwwKcPqxn0vdFZU2aGwxFJtGVd0DkwgNlHmXweB47O6XTnS4cihDzks9qIUKqDmgHTW743uEU2nq2/ZgHgVBL96P5ZyoGIns8uuHkBdyWu8i+wkZDxqe40ab/apDxg7UEzHSyNa03McPn5nSFjNoy5sD/BdAN5CYHp8ItofoeVPWzfHL0ZsHUbdzWXWT0PxRMpqLwzdU4FnICfuC4mbQEK6fz/F+xxIfkuT/MhgTajcK6FQCthvJuWT5FqCeJsUkC+m74joO9DZq1Or7kvHzHEAdPnguFOl55B+68XkTdejYVme9GyGmfs+gnY00kBBMLAlubk/QCCCgTTV0RAZCk0GGf98vLnVfztKBpbGrDr3yEYyHwuC/Rp2tZe1czNElELteVU4+Gs/nnCGJFLV2IfDymEVafm9S77MpxVKyHSM3thyjLB9DF4hZGZmbrKxNZBP1m1Mi9AXTOlni3fwOnP+ZQTBjqDJKqlDNEOt7wrDYYulJdm2iKtiXxW3RozW5rmYY/cvNftd0bIJdpYo+LB+9rVwRuFgUc3MkbBaFhAVG1lwiGkz8djKCbNL5NRT/CgRW/+c8XlaBbsefYRcW/ib73swwxrs2jiIP1PIoP8JYkKYj5OZMGA0rA3KjJvtf3McqrwpZMirjyv8tcGeuaHJBWGaHTFTUA4+OEbJ/E1/8AiaV3VIr/pjyVAYwqMi8FbZTaszFyiX0IqtzMuGeacMrQoUQUxiYvPXCKYcY99cTrI4M2fBqD7ai6Fl01cmgtpMS/1o2H1Hbfd9NZAVaje0WPRo6hQV2BQHpkgcahqx9c1AHZGHnkLJxK4S/gD+3GPFwbNfywJ8iUIcwA8T6DlYlKYmtbKDNsqmnfjMfeQt+vfzoN9tXx9OewQyHO9Utk4uWQF9rnXUJE8ACv8aGkBjnVCHdnVhRg84f2+UMbm3Jhim8eAfgT+K7eZgfQM76eBhnuCx9tAv7hWK11X9XSAOv9AO51J5lu6KtkWMBVRM9IGGL4wJtd3GQ5A8/36xuaIa1YM2kpS7ENf+ZCxxE2jPILU69pC2qxejy7zsldbu4a7d7/XGtVJwwgoalUOf6ZPMvnKenzeUvDm6fn4Q3LOtpuV7KAgw+DrrpBcXEg2AEr9NMH04En7LSTgZJvp2Jf0D/wmMEEwJyzdAh2SMXkearjdp4E9WRFqNTzI6dBzGro/kHyc2zORZG4iUoH0AWLgA6b891jcg2MtiaDG5NinFa25qRyrU60F1NLzCaH+F2YdeU2Shhlv+VB4UYKMt1dOHo3NWstSqXHj/qGzjs+XCf23Vg/0cmjGyTzHK3FykejkRRGMLQAJu3fipumHZvNmA1Kcj9MkdRZbu6Y8HUwlEy0/UazwRqjF67ieI4bGZevvmaV0dYMGsE03vvZTlZCaJeKB+9Ota/QuWY+rmx9wpYa5lD3C3iaR9wtvBMl2iHZVEEEQyOj+AvjjBBQ6TNm0Va2M42hX2m4HbucxuKCp9Wu2VlG9h+IaaxQ4BLd+1SlGjjw9wU0aftT5NOb9VD445iCTmd+PKeb4oIFZ79uRHWAPQs13036VyGqfeyW0fC",
"m0IjqZycfVo98N+rTjY9+8Q3FSK6zTkcX4wNnudX4/XeuObveRkTHzvrz/ej7KfaSRhMfFbBCw4hqUwopvlpQLk5DVrb0os644S+o5U7ek/6GgyKcXld1E6owJsGFac2cYtekXafUPklJB/XD9gGfTos0cUUDVoP6fA8bCaG6ZcZBZPM/YCbvCy16dmGTu6K6IIqsca3LTFvrN0oRy/Sxv86yvvwvtXRhIK88JCLA3JDeW+zuZl6exGrUx2DuSAHe6UjPkjRAQl9/d9JABzYeIhIp+q9qRRYIWtakGiSFstM58o2i9KvwAClxEeE8jv9NTjVQjD9bscla4K2zIpq+Ij6bYW3q7XRg+5thFeFd7o7CCflLwC9bWPtirMgsG5CZC+/569BlLaIzrazH+p2IPaAl6FyXnwII/WcqAZDXUl/64seSDN0csOPH/KZQOfTVhuPn88ysxQy//3wmuQJFX1z23r2HnrVCUof6dYO4QJFOwJh2Qsr22lgjZj9FuI7NEruI/nhZ7mCSKdmuC55tlU6Naml3s8yhQqMg/a3eXg7erYFjvpGToaRL4GDb6lwO4mvhPyA5TO3BpbWWAa/IzjTUEERkzyX0+Yv9v6FSgRWJSmOgbskeEMfMY9DE2FpfDZHae4StZVU4BD4EfMtEpbLtlHvvkXWZ8tu67timETtX7Q0ocMko9Rehh4QYNphpBMxFhnOrBKzrJSyk/H2sKgmlRnmiRG6WPfHP64qCTSalDntLi6Zf+D7v97h2B8kwZBE3Q7EqmX5My/ZLT4m9vwF0IkjuEMQksRsaxBCl/4IfPbXuVTM74Hlj/WuczcrVRTeAtPLlVTbUDlUq9mHsjxt+EGErtHclp7AewHBY3ALjYQq/8K0kyQJjxx5woy08cy69TqUp1+7dOPQxvINP0GLc1EnSVal7kb7eYnvb9h5p4gP15yZJiPihcjFOmWblm9PQiDsQ5XUtuulyU++evsNT/9DLk8/B/gReo8dRVUC2zRNO4NrrxVORKar+x7KvBV2+OGTx14U3jlDIcV0fCIQxqb1Bxu3IwtE5dyzgTAc6ZdW6vGiE4hirgIKl+MKDmDFU6YLAKmwa8BR1PtvRT5ubriaXNmUrmdGMB6Ldhln/yeH5y0k5TaG8MCR2mRXyL5xZ4wXTAjwnBZYLqYQWM2ZcSqczoo/LG18hCx5pEHifrEbZePaBPKPTPwaHDeZ3Wl8yXBxc8SRl8PJxdJt68ct1T90k1GXbCqfVfwr7jKhGmO6I23BrqlZpeYDlnZKpoMfLoAlH8FqriR30vMIX3kQeiCEzCcfNVv1TDyl20mLRPZaIEFRiZi61swbJH1jXBjp3mL51/xPXikUVhpa6rUkV5dO2XeT3X2rRXQsuqwGN1elIBgolwECfk8S0dSOPDAlBbtvAtGKsM6/CfrN1G7WkbGQsazJI8+MVc73L0kFbEOEgcbKZRdQxflX8Glu3X26P8mdcyNCCMXFzbvX8YVjGzvTsRBwGgdjUdQV7khHJRq6qmMAmtzc8oUEy6DgZTJQCq5sm340pwiWqvB1/ij4uwdyVyVxH8jUKv1/Ii5/mKPIkGBP+zPabhp5JQXk/eOqxXPBVstfm9S6h3EkQI54wkNFBW5Sblh8C1VaH2MJENl7T86K8AqKjpmXtc8jokAXFvp4dKqDoUTCWKIMFr4bUfc9VOQNJ1MHa6DtaPqq4FQEd3c9AJlVIuh8QW8ZNqsjra6rCTXDqbr+xv6W8aRmW55OsJcerZGcyiikLWCfRvjP20DcUPe4nNdrMvA86SFkTX9JA5SzWSHzh2l9gG8h0N7hKxjJ4JM/zTJr+wiwlHgpKaOZWN0KTxAjlJQAgyIPj8zN8WDZo4886oiQkpX07ASEeVWECj2VHbC2L6D39LptuSzeZIYbRWM25aoDSDAVRIe+RoI+55qm1TVkD9avHcH7xGqoDQRINWzoTMZPcJ+LaBiTc1dY7Gg8FTbL/jthmMS3H8joTCRZ",
"1j0Jh6nrQx7aA1UDV/QCI4c1ptFAFISlRb3C3Z75xfv6B66gZ8QQUXYhYrwD0H6xWa0oPaN+d7V0fy1Apxt1BSc81KXVHJTwlRD1E+SlJiJKHO6KHcoWWoc4UyUmoTWrgW+NucX6G+MLzbdtRhNeUkMAlooI4lkZWpK/shWoW5lgrfS1zkQ0iqY1CfB9uROVXfA5SIXEEUc76S90LXhYerQ6pVgOD7k8XjxXv7P8ajAM1tALjBP5lgHWKgRMMfd+IP+4ENT5X3W6ZFXKc6RJC84u6P4UZlmP8lweONTCJ4e/dVuDUeTyfG/gqizdRAqqBNANxRXA7u554+Hp2Z9wPhB9dORk5ypQsY35Usmwh+J5efaozA7hGHGd/V7YJOfBioqvJETeyj4uLvDy99EYEofGM1b6GhcMvuSUdbGfHZ68Cj7TX5vu+YJlgDf1j2sQQ6KcsmOLuNFmsjJsvMCPqwGQhvBhpepyDtAB+aRFv+uZqb42m+1Fq5vh/VEvAiPm3T33aYSBZPnVZkkgRVIy979HW5VKSmQbQ8HgA9gvcWpqJnhX/GhmgK5+Co7df3KBoGu8Q6oLtfVb5GSXnNxK4dUDu9rYLAvvn/ZFNeyJmWNDaaprDAUhtSYvpUoVlcLcPLGUTd0qOppqO1NY5qwv5MHyyJloTWzwmz5HwOPGoKt55Ceur+FJr5/p0KbLGrRgafTr4Gokl3FsbjrGYMQXJnyPmgQ112gBHTapP/XPx6DzFodcMZkv7ynu3sAdLBhafeP2sahULCIVH8OQrK+C9Vc7J7FnaXXd3eoz7ZIHdMNMCv7SaHr5m9WmO70MhoZLv2L4PEQA+43Jt9EUQ7FRKz/hoXSKOLfGS5MKNTqPEevXMJig9HlW7y8VmPi+hu+6YzmEszcjMaxtgz6Uo2cq4WqX+2YIinclx5gz53AhZApGnoVwzFn8Q10DM5QRHJ7LpgaN1XH3ahHw7PBNI9AyGeKwoG2TmRKaYJled2Svv1YFOD90b8nMhn0RzIZZqG3/4xI0H1uhWvVXTyXZr5Mo1qHzftb98bNoxOAE3CtFK5QED3KZcnvmSHUgmDkaX09uW5NSzJcgBO3VzHvSn6b7y6vUkPsYVLaPC5u414W9iO3wd56JdP8mHiW3/NXn4fz5Q3DdvsdLN0JfYSWpPvorqVy+Ba+HqZOz3b3xjwD4gLMxJ5IR23+tG/eh9RYWx1MBHVgP8/KDN8XKF5hFu4afNXo4661UOG3jnXcL8IPLdd88M5GtNqdam9EnVbV/D8VdiHrT1dxD15Mb4o9AYlvSVoVASC1itdp6fXm+opwe3NslUpgfUJo4uT388lUDanTZnYnhEMbwT/p20DGsB4vUz+z+1Km0E17NyjjwK0UzfeOcMVwfk8/yfLSzTOJQZD1D1fUSpzOxao+yC+LkADy+cZj213oNmPbVcAPyh7ZC1EACKu5MffTYaceNWGRBlDIDYbqT728SyAK+MD4PaSXGUBIJs5GoinMd50SNlFdsKafbZh7Nao329c7boaGGMU99U8fx61qgN4a6+9nSq8+6T7hHEHm/rVlnYK1JomGxZ6Pr+aefHo1Je8/JseIbjo00JqlLaIVAiOPbj1Rc2XPdiIjDqhjKmDEZqs9JPl5ck/zhk6jwxUakuGI6pIJVbUroSMLk6AFBEX8q25HCjL4pffGJbIoYGJUER+9TSOOla+psnh750dV226iYK/+rp8YodIiyjNzLGb1gynD+wCIU4/ullntDBRk71OTIRXGIn1RO51/ER4o2l/FAz1tatHhojdq+NnzEBu+TNPE46YHBR3U1KMZIkpmGg+mcqkCu5vFwZOLbXbbpJAcH3b/eJRJI5pHDT45n7330q+4W1m6T7T/6mdG3ENjTCQv801Eq7v4N9IxQqquR+iriicQWHD14DrDHSJwegxf+NnNhZvjQ0LfD4DJk5cTTIAUE7U7bnhHsqtFQgM7RV3d3Q4F+3fLM6+HRXus06fkC91sT",
"DWVcD1qL3hG0ssG/NmiNnQb/k7c859r/5o6lcNcCJ5ND//g70uOjE7mjUmUnT6v5Zdxm/JUHrI5d58tQrfYsJkGacf9qjrLpThZPmcvQgoxyx+wTWzK3F0wbAhL3pz5PQBcIIeMzu4LwUp4ee/8MyJ/O36/9tP0Ml3aCnH7uBc4LN/9DkL/xaug6ubdR5phRcBK5mWyyLEb5hQ0QoeMSYEzxodfd6blpbJ9x8mhuvmpEmTlhugYod7iFDWKPurS5s4Kxh8aEusRuUbdvgpdqaUm8U2N92eLDnC7JwYUljcfmFdDqWAdsRKycATutSn3oWRQ2jISIiZXFLD4BlE7BQktzBG+Dh1gUV+5SwQLq1+i0BooYsFd6vteCWyOjhhSxcArgyXa6cgFfdsE1CfEYr1CqLAbnUh0h73fZIRual6mAt2N9Uf72bA1avgfdqp4D9fjoSmVWTt498SNvYSCPrOEH1CEhqM7xU2m1Sx0JI+fcOqiVDmH3/nPee4U4jcv15JNKS2MkTG98FiCBk0//+SM6B73tC2mtzxT9lVNpjmzDdRHE05RdfPPmyyOdZ9t/9umTF83QDWCngJ8qenvT6VmKh6FMGPHRbWnPq7mU9xAn4XU8O3vT0A5GmJZfI86fNXhV6JL+DIB82JlHe5uZSHSQ3VHJbgHBXXcvgwnZ4/ARqwMfdm5QE90QbOZGaDG4xCpUSRussIYjt699WtnU9CeYOJ8t5ZyLDnfrXdXmlWiGfa1FMKXwjOx6LqTC5clJLsR1zoDn/x/GUKWjhAFjDc7EH2m+fmXEFf7HucBoCN59LjdIwUgEYlaFq8KJHAp5zJM3+TAXPnfnNSpQHjW622eeSCVUnq2eNtjXKWEycHMo9+Kg0KHczC1IflpWlX7AV8SXX3r6OYfEB+UMWFesGYM5h8uoE+yCg3RUAfU+tQDufU0Oqd2gJ/Y6XGubF7nvt0v/aBPYd5zkHuvzevIrFz2OHmaMOMljBVDrJ+7gWEPKrjDq8iBWi+DJ2k9PM9ZAPSai7Wb8kv1rt1Ww1nzvc1zvYVP/z3kRFIVuCK8MTv+bqPUEKgJpN6WLWsnQ6G2x9OFJGVcUMUEEKtmIPYaUwyw8i8lKujCqR9cCWYhG8bXR8xe5q6CxIxv+98/+v9mhdDu/lGg4PFf9EfKM/ddgkGEbH++dMBtOkRHsaJpS0tKhFdzWbZnofoLmJ/3BhA9icjEJHBdb+gP6c2aBTfWe5kEcMo0g5HyZbLvveFZmFuNENNdM/n0xiPa6weOLsmMRXuCXPhbwhMdEaUkGuzp27Azdp7u6aP46SsV3gcqy7DMg2nnWPlslhCcGls8jyZPHgIbRAn2EgKMwOBDAKNsLKp18dboFS4bgZpS2tBccj6BAf4BDlJEpj4Rsa2Vm+vNXNrTAOdqD/mFXiZs8pjoRh6AaHdx//939jf/MNToFzeQQzr7KDXqwSRnFwrBQO5IoIifXVBLXUeg1vsRWSQcL0N4YbEvr0hLHZRXJNLLHXgduodSZrB5jNnmnbOdZJrNEwRwnEr6yt3ve45XcXoBJOkrSOvKyT5JG4XKOaGYHRRJXMpuQvapdIVmSf2qRR2SLrwEjuehz44TFIsoF6uoU7tCpwXQlx/c3xhZzazt40rZxJr+ZAzv29Wh7gc5mc8Kz9tHQLpaMAV42MWDcPsh8gMteyi5iUGwe8SCVKKBhLIPWmAA9NZi6aaRITIJUOXTUjhPvONAFTXIqK1tBxObR86PvP4HVqhcvEyZ0NkkVV0s0pC/K/13C8xjtBMY//kMiVs75/MHgQjb/ZElF/V7jonOiwtgP/KO62DMsUG94I7nBhV19RFSr31wwzzX5OWivlTIjJS81Kg/RTCZ4htHRT0LLF57rad3Ngrcv9+PecdR8hBjS/GZDs41mAIDGR5lFS1/4UMgGHJDjvtshFPPIdzR3RTd1mKw1187U2yCi1o9T62026ysxj0KiEP99oT5+Ho9z76v/ub+4trpa",
"k22VjGsFMRI3pfJEWxNBzqMreY4gnajST3HhtTr/HA6m4lNf5/e5Kjlk96Tm8S2Pos1R8/QhLZdjfuaRE0SLtI1SJ3vGP3MaxMBdqsgVhjfaBMVv8KUBLQjTgx+SIuWi83li2YzoQSLb9ubxaajZAUkRfZWX5Up3tKBE4Z1PDU6UbdKXj1fD+owx6klKY06Ly2iEwesubSK96fEKZUZdMaRqhfkfxX4vw5Ny7u8eDdzheJxlOrt2Xt/0Q4xfPg7ZQeZWB8JLI+2UFFGYaym6d/EHYoeNvLcAGxVfm9hDS7FTQqj5N91gGQKwMOwY/rP/iAknrR2KwlAqqu+Qqh0qVVp2CRx/DplKLvY9ANBQdtEr3Vzf9klsfspk//Fk32DlFCxB5mWSScoGX4zFLcbNsQ3GXTAtAoYYYC/MGHZEQPZUAaDmqbb2Jphz2feL/EMFralztJq100xV0islx2wedLH1eea5SCKoPUxrPyMVXrU55X+YllzqpktvfzomfWjk2VOx98fnZzHfvjEGafGCQ8T+tIsTcqVcf0a3fP/+8r78MFFf1MNIaBvPEEuIyq/7/xwv4zXnsUuPTEaJDZTVotAiTGPONeEg/yXpdFXE9E0b271oQLIBumwiTEeSKoAgG6+U8uaFXXuNjLIbanOkwcsbPrpjX+cqPsDUaq05WvHu9ho/12DgblKnbiZ4e77RukrpRkA5TI7HWdqLZ84twKAttxnUHYfIKsVZVlFt/ngoVK0dyp1DHmYTcc6GWzRIVpFkSaXrFpC2KoFdFOml7ev/d+U/ucEA0ETUD5edm7HG6OdAKHDAGFQkvwdA2KD+CUDHfIhV814iOR1M60ZzQD2UPzic9NJF1hEMXGBZwyNzlMxsXrkLxRobH8WjQcr9g2fK2n34M/EJ1WaDB7cf16wl1cW2CGWAqZ9Si+Er52ZrlyRDC/U8/lybs1WMx6Ys57eLNYJHcXZygl3Gdo6f08YUpRXg9AEL6wCuNXtmTPjE6rrF3rFnDeNQ0pIe17ajpLMhYjCOhnZUF5hOZPU1bTyYxf8mEIzt3b4rDGoUQA8BizQQXxQhjENi1Ie0Kmon/6DU2CIssq+hwiEovwCJODMlFVs51SoJHFZ+NR6uMTioVkuto1aeEqtfvcqW5rzQooZgpnYYXqRtUntU3fyj/mE1IJrbzg5AVPpSRyntO4UgnbH0PXNouORGM4O/C9To6j5O+J4WW3GhQTffvypW39Zy7AkvBdUCuuD6uR+f/0m1A3pYB7NduAoUN15J/Y1FUpHIkTF0odhJJ8kiPALGYk5J5UaLVoQOMaUgMXrOOPfYoCcGrlm/VTo5ofydrISPE9hvMUO0gPSqFqsMQmN1N8Wp1bPFbXdfLppP9bFUys+UGla1jzXTHEmqrGiQOc6cp2NzBuxfCXrCn3WrYR0rzr4Vo9BpYlFbZsY47nsFDFSXkHZdGYQbRvdPQvNtMyt5jRmMhxThcUoQ/jDhFlePXHmWKswv1BOSPKD1lrjC0DXMudpapbvbB0ab5uvcCk+/GNDd6P/FQUHOufR9IjwW1FCEeM/9VcAJ3RUfCoXJW6U3qdU26dIa6LabN9G0AInxE7sd0b/nyoHsjwdIn+7AFkW1vqlaBw5FtZnzQIAroMPTpZpWpINxMcJDrRDqOjPasD+F+jQIPJkzCQYW67dyAkf7lgTPuFxXkse5FnhHL7Ay6jcxp6RSAhV4ThJMW/hd8NIsWzkDMXBOAnUNhugOrlANA1OOG0Z03Yk+8K+EkFuFIOnFtDNjM4J8w8XF8wz48d4IxHMG02PFHifPZFyc8s/e73ChkN7giAn3nqB+iox6eCp8b5lf79mfYZ8wjgxvvtJrJioClXxeWGT9C6Pv/0TyN6DRhbanAijO2owmb4znv5BixTxF8mlIrVRJZ2rBQrv+KfFtSBT/t8TpjNNhNpC1NH7fZl6Nbfw4WS5FO/VcN6i4tS6BqO1UlWhUdctOUinJy6eMFTeuE272",
"VKB33qQDcKjKr1+eLygwGFA4YR5WrDXklCShiYRe8fp19Zy7Fmk51PHlmD2ke4Y5PSzYnIAQl3K455DI9880Ux1ZMq67r0c8G/YvV2u99gWlNj+VZnnmBOoh9Y/mKbRW7eXJ/itYMxAjk2gWNVpj9rOZX0Ky/wzQLw2kIDo31RgYwQ9vwzQ4seMmv9ruf5EMHZRIF/AW2JFO1pNlYrxXK2upRXRlXJvnLO63YQM5fDU5jjqR7Yod5TSbQCOjv3kG//riib3hpcpUVf3/m0Xu9VLqJAqDCuzywM6JnBWFOHwLxfSIfmzbKBu3IbSfbnY8cHF+6tnUpqkLHL9WPfIZ1t9OZn2cEldYdTppe6qDj8vNqws+0YcdvbWd1SUWfeBybDkoZhXEOaBKbDiRW4hlWf9l1L/7m4l9b46Q/isRXaAWcnakeulEL57uDHrINnKh1up2+i1TjPh673iItlTY4mrXSKhzDEhOGFvawJ/pXNokRqjmfnoHjiSkG0dWHYrsg0tx+5Hbs1cH3MkklYaU9B+6HrfNcOPAwi6cC7GMzvmVLTwc63C3R6DkjNCbuHVjNJ31X/BbgfzV035kHulLLq82hvNmrGKKi7A4KYlAEiMswZOhyBbyflmi5bAEV5YAqFu4B9UBA7p83djpv0Sr7jLFzRXzWHoxdvi8G9Fcl4pDiXoyRf1KNI63AN7xNV4tvMk3kkpxHut3Y8TR//b5g7Mg77G5nhHHbyo/OLwh2TqrEyel2yWrwj1kjsEkzqsY9B/ckRpt8sXjZx3jIAUiLRU88t8LMpyAevwcWJ5u4yv0dkQ4zr2WW3MwIImdyQiRx8TDZrDiD0KXrXTqlsAPNWiGboECtRpZ7LnUxHSvjT6xyqtONsEMMhr+qkxBjcaiDO5wwDwYl0fk322Z10MJoGjySyDtL0VRhppVbqNcEfvY/blPNuJ83VqTQBoXSqj/YFFegw4e6ujCxjUKe8u+3wC4hPByGNLhDiDHud6O37nLpCMTbiQA4gAYnlPVYeSGvndemK5Q03+OJYNUHcrQCZPck7bmcySpPhzse7kuPwDL2tC/34y5uhRW1gZsdWW33VmsRNmY8VeCmINhbMqKF4E77hMGi3C+QgaKUW0EG/5RWKEJVNTJYFLvXZZGNzWUqDbhXPH9uZnIoDqx/cjmBF4U1871JOjFmGmjuMwdUyTx10cA3wej9x+jZUcQKV2zTLrilZ20zOTk5hbKzelLK1yYlZHucf2c3FZvKROdapbkn6sghWFEWmhqaFSa/gvavmmM4SMvLJv8UhAchuB8qGDszYdlU9KpsTW+iTSZ18siEYXNDfWomWzq2GzqBpJriZIGZgFamfBHGBWNIH0xhfe+sllddIBeETaF571mjvH8X4N0Tq7+yidCD3t6WcEF7GFFDz3p1i65SNETRhwney1dvlZuHtTK24lr5q5rvcqFYbnWYlweaMohuVHvLRwPlMJkm4k5q34PA/xSQI7dL5G+CCTVgGyfKqDUxlCqCsiKOBYfmzzUdtDLu5C6CdB5Qhq5299zLBMau/ycYJ2/PV0EO3FRH8cGg6rZuCgzJ1z69tMiikmQlVcuuweQ+5TKy3jd1SmtSD8cHbE4N/awhs3f74zYxdvqXIanx6ErN++Q0SHtvELINf3L4fvMOuZaYoCQxzGZvS9fZwnwyUBLCOONISNs/wbOex629zVQhTvN5MXs76/dn36Q/f3qKnk+zBtniDjh2o+5MKwrVSu2saGKKQJO5m/V+RjoP/PNPyLDV4OLZwIoZ4rqVnuzd2ftQpgpiszj7TACpgyUpLBXktIrjoDvXhYBh16Z1IGVji8x8/aZ09ZJ6prxJ5AJbBXKIgXU1H7F0uDA46FRdlqWfireiSxs876ldrFhU6M/0XZtnhwnd0SF4cV3kH80/NgYHsBoxym8NVtjIMLiWR+pKTFF84tZkfEaRxq4UIISHaznDl+34dEoiRaOZphzASBe0UhBXEyMfkSczSts",
"uTQB6r/oGbH3lIQ0c6WEMQRY9jU02azrpCIW738VVVJBuJtyKFnyP8DFQsnuXKIF5oPLTV4eRmctsroMkd5uZULMIJdrTOUnkXa4J3ZEENBxzZieFQJcwEparEJVVQ1UeWHv2ISfkusrHFs5gQ0wS8lym/aMw0jtO8Q6OB0C+4VrTAIMhgs3V7/y9fN4HVfNkGiV8A7QnZpvlpSQ6RmLhZ8jQ7cZDzIekjD0Ol3uKMXx7A+yM6deFMY51OoZF6bl6T06yWWCkpy8Y/tdxKrrdd6FT9Sln0peKdvCSddkX2c7RewUmvvBf7mjgXs5CfcZUMCHHlniQ6p1EDxdqyT19qIIaWbwntKUZw1BeUPOt/FynOl3SVwH1NIMWRO6aVXEe2iauWL3LKOVTuzyaY8Dheaio4vxfw7rfiM8YkipcFFX4hwU0WcEHR/+urcGT7meML3EYfna7pYY81jNYYoQdXA4zUwQKXjBicDJ14izALQIRvo0ITSFX0uD/bdGgCNkjyWrIf4rqdsmFPR+4Yz6mRUxOxUpJlprNuKdGUgZPg5aclTA7Kv1aahZLI5sA71DEwPHe9f0vBZFOYSwKKFhJTOltKt0ZjENBN44WCaAAkdqpoEr8kM4ztmS2Su89xY2AkMdp2rc0I6Hi9T+YS7uJvjalIPrXUQ91SaaotE1k4MdHyWTwwjCED6HVFheg/mPG8SZe4SSdz7cgFbBlUa14RNtDjhnfeBnZJGc1AjeXxyRA5jmq6jTMhPkWYdmDT8f0VtEW9x3/LQHw9y7VFIPauLcCZBlmd6QyYX30fn7CBOAOcr9pWLgpSrn37bDlQuO94TXWeiAfio4FgIEmPrWVLOIBFa1QT50sV5gx5tP8GSWmrj+q8QldhNipjlNxzc1sPygc2fi7LcN6mOjFY51wPPE8qmWgPDy3mjNs7Vmifo9MbERcTxpT+8BNIPcu+G3DktvO2n7ZujIHzVR/7tum4D51wjgqsjhc/JNELsy9zu2O6zOC+IThcO2Ba9y0yCvJ1tx1uCPAj7hGnXYasOIUfOgUrseOR/SxVllQnFHpRtE004mOwpLOvZN+nO8FeO29yzv1R1EJ2478ljYJ/IE1vkJG3O2+sjrHRum5JZyF83GOX4TD7TLa6+BJTWQ8vhtbS1SIEsLv7MCv12Xka4/kR1PC6GqeG/4iCZ4FjralM0KKT3nSWGsBNKIY4a9mEsJPuulCe4RgrJHnqxmxyDSIE20RYs9S3Jvzi4X8XsuO0RmolCSQwztGnEZnfAeuicjM/odb4cn87GdFrQARe3eEc7avkYDZGcjdEcuHwA4GEzFvJDt/xG3yj1rPrtd6MNlO/vCVzJCG5ElQXumu2tXFmB3cwu+LozcrfDb22fAoN9f+9SlmFy7L/Y/2k8Lup/KUpycIMUngUvXl+DunK97qRWXXkAqrpdoxbxGo/l87REEFGCMsLIbAsyGrYr1Z3LhEWPv+zjC9MKAAZmNjKwCZ1T2ocdViPJQYX0NuKtv06EnlrQPH7bKBLasytP54hx636U1+z7TBchK2azqnRgQoo703ZAZMCxsZdWHcALq1KRshqGp/T75IIZPUCsWZTu7JNIQfVYw1uvtJ1ud3zTdSh+ewdOl098JKeBDmQLTtDwqCd8/6i69SzMTFtCI7fygsclSE95v8K2+4sQ79L4ZtbHgtEKXPavuZg75j6NlbPMxn2bRxLzkoKH30NbNuahD0KI5qgPsYsB8hMd80IPiP/MOU4/Qk0qE0O5xtASdvzMs/GNzQm5xEird7BMa3vNmcZ2EAu2deUfNl2twk9cUFZaKUZ16KnZ48/4LsIjX88HJMYUhrdCEBHRbYg1UVND+wp0eIOGdTdaezNpb3r4kuEc7r6AGw2QwivtqCqhcev0tYAHzdBNEC3XTRWi7K3sbtf7ZagVRu6LTgtraCJiIc5esG8O3z4sElchvI2E9vbU7MrhZcmzKnv2htmEfO5QcfZq0VW9zRS6ZVgll",
"JJgxNkRek3A6eCKeks9loL2Dk++b9dzrxMm9s1WwacExssgjRK5gkH+zsn/GX4k5zzxJm8NIfmxRnJFO0mpuWHBzE5in+ZROHevHK/zur4r8inCyGvnGcrqf0edmhuEllB21mToSmCui/2UwKLYTKOYvlE6VHRUytfvqgfploewVExTsQ5nor65C8Avf5iEARmC2cIyt10CAPyyFvu4JDcja9lvLi3oHhq9r+DXX5a9e8LFMUWzSkRaM/AoSwzTzbpx7j7aAPGFZXgb8Qd+kZK0dTjH8S/4A4E+nudf+lBBx9QMCBb9ush/GEUWTcracej36jGd5AFeFbJ61g/C/BQpNcHHppUZrKitAyu2u9c/ljU12Dy/2AJJaKudNZtndZuprUrnUxKlBbRxWI1ZEPx6aoKwDRMl0IEOh9PtPmS8gf2gmsBaPiOSA0EszKXE3HfJb9DBufNLM7vPl1/ClkN+HfBqhJ5ydZ9Kjt8+5RXUGq09m4D1IH5gVr+iIjup2Fja375lyStgJQ/Ojvkg3xSM9BtLH5hIxTpMFxV2uKo6DTZA2Z1nCs5Z94Dy0eOv3mYZUgM+9kMrj/Fq0ET2piv9+fCiiz0B+99Y3CtvtYqPnALC8OXoXsNYaSpGNUrezuHx3UVNbE+Zk1BJeQ+9Hr/GMBAPUpownbNxxm6UQxv8N225ACZFGVy6SNCNWQEKGCU2G01VBRLmdAB58c6Cr8cHf5VIQJrkdjxTCkKPOeo1M9NrCRoj4SJPNJyYjo8Pzm1mjNoOuV5wQMxybzOkT7/10FRNYx/kg3GGpixgeV+X95hWzg5p4QFbRc9b8dAN64Xvmn5Yb2l6BsWnyl1lu5Frkd89WScVK9nJyIHD7EuX1NhLMsNc3UxZ2FYwtSBwXPdFyIPRUN/HGFRCmIFTKxWmA2BaGzQKIsorL1KhfhboGR9sf4KVXtfF/O6BNILWoZ6ulVagt7wsc0Ey/pOgTLnwRq2gt75jIpRYD0KgfKmqL1BE3XG5BDQVgiMkxRVcnLMLGOpZZKvyvJJpRQEIVaQn5m0X22nVIkKMvRkDKt3Co4cHqnsiaKbEHvrwiJ5qL8tV/e9GfJ+IM56+pznFVacgxlxRu57MKt6zkYVPfALDBGqAEbF3iucWEprV7pehTK+9DXFx6pJSUCMB3gAUDOsD3UZpqRfSfXxAk/pgCUq1b+t1HbFG/na9QthAlzZO6nZH0/mR+HSEMycAj2r4ed1U6mXRf2K+jwmyHJo7ojsOl/YmOWf9xTI3lNETSbOBi0iinKWqvNnBmpIbvY2+Q1JmXvTsrMigQ2FIyDFhWGUYTD1xL3KxY1iOvO3hFGezYhnItIPsooy6xIFHnuW/ct8fJ1L4ln10GSf/yEflOWJLN6WYJVAedADEzOqmyEK4KhIgbEJ36LMURAD4bvuTIPFievNNfqyX01t5GIloUnMkXRPewn9sX4berIRDygdt8sgF1ZDdkMe6RDuqyya8oqdk7//F8124xUWVrJvw+D5UKzUnxPY0sYNmF8Ov+bRcXf6WbD4/6JCSaa26BPh1TdwTWBWaPKAeTKhyVUDrD1MgQ9hfDB6/xgbQfW3Guw00IdHwIe+AadjKX/8hdpT42q/8ibFymkZIBg5GERVBYXGTBKHQZ1rYh5M5JUJj2FkXPhPDH0hVSxFthFSj7EIQgYbCyVAIssQ0WxtWFEkX/89tzYDR32rfns2NRqlobZ07XOeN6Vxv/nxeYRBLxeKaVQ6XaqWdGBvVw63/KG9QGp2dgw3g51nqJomB/zv+NNXfhLmehQf7evlKo72jWxJBJbtYhHRswYwhv/1bX2wgTHlSwRJdPR8q6bCnOs6QTjaYrGooYTWX45szrnCSC+jgJg4Ejg8fINVCSGCT1+/esEjyIMcfcJWWTMX+/P/YLfGl6fgO/hTtXYukdcT65TxeAFBRO3z7ts1YC8QguW2jDVL2OWcLgxXX8wFg/k1n5icXHXn9Vwr/h304+bogC",
"bJDjnavXmQcAHHGgFprSTNduME9qcC2HGabrZZOokL9ypubrpJ9hjob2J21PaCvPJkHTbJt76vxqFoNj3GZlvoLIYmvx5OKugmpe3QFcnkMNp+LdihmoDnNATppvLvjpxTwdwIDMAOKwMj2w4xqqdRWMGZ5w89iAbxsXQZy1yQt7HtBL8tynhKTMXt/q+gsJax5nf6XkCk3tjTfAZYAhkPK80jBn7MHO3YDjIilR7/66HUY0IaUJauo7LoLKFDb9UgEeimDP1pFooiCnpSU+177WlhNs+Gmi81wWZ3QbVIbB6+SmKed5WWY+6XK2VC3JmRmFac7bPaWJ3lhNCvWAcbw8s/rvWv9kCTpknkl27zlB16R4Twn7uLKARs2hOkHpwgB7V5g7xldAJpfZ2H/JsUqt4blpoclv11/RQdrwk/zzHM+AvtrfOZe2XFSsog7MmHsEOxVt3bRwvz787JmWlBnYAPWaGGKD3X7I0BEs72o7ZVtgtdme8F2OtPq81CUSmVbnEmp/CXbSufYlji7DVerJgbdDT4PxfCHbeZ3DLtQuOlSwfvpyYSKDj4wbW+MQcs1m7c8R3Sv50ILef5HllZxODb7MQaRe57TWgvnJuV0q+g+oETALaytEhmuSfeFiwuIn9svLuGwJunGc+mGNG3TzozsfTy+huHqWgJrswe4fugd6j4DrdPI0X9BxTDg/EqowGglTqAdpT98bKtNdK1sYnAZ6SVgtCqc5WnkZxoZTZDGAMKNoKHg1AteJil3MfFOETTJbpgfbds5wWOkNtL2xWV4iVq0F1k82JUlpdeTE6Zi5/uEX0uQKin66RD2DUSQInyOCHkMYCijpgWGVkPJOO4WtvvnVyFao/PT6zrB67l15XVyNvki7v38O04XpJ8wQxHxKSU0xVQqFczkQeD878X2YJhkW53yJrZQ2PAWRDBcWxs3E8qBqHqU1ZA1weTgm776fzkO7VZaP2DkxRCXDysKfr6pGXnUNzkwb/YXkos4XqjoTM6+FWU+3/7UZdKPVqulVo7QEtQn3bkKvO6HNCStsnRp4cdvT9WI2zsi8l9YVmjtQZjRTo4CXh0b902BsczPvFTkjdDwjWyubaDFDsFikuSFfh43T2/CBNlEqiq2NU67LR2WeKiN5h9T1BVVfKzKPT0enx+CVRRITg1C0zXU4ql1s9negNfDvMpQ9FnfAzSiQtdbOyIWKMUIbtiyk8rCB586g+n/drMQ89IfYyza/kdwiapUunAMcnYcHQByH2WVzsvMQ02W/S0g3tXY8ab99lmkIWttGZWxOKb8P3NfNGCl98JqoP+KmO7B2kgFS84T79WQVczWthvEOT5UW3nqQoG62InSAp/WxLGK6o1lV8YoI384Gr45mZn4Z5Q5UIITkN9Bm6ZJDJPmEGwpWlAPivVZ76/6yO3HuPAb4yWk0LmFooFbrvVlVFSMW4TbDZLi4WEY4L7nAa9jkqVP55MiiE010pSNxDekAVp1EL4R1ky7hWzUohZwtJO+avt0FYFIjhkL0msNLLa0gtAyVoFxgy8kmN+/6mcrY/Q8mIfwqU/Dw708xBQZlWpm1dMgYqmDuISJHwe1NnHiNlfo2of1zv37aEazJgpr4JKJ1gPwDJEReS+ZkJqWGLZZQLhjD5LTOpW2Ls3QJTrMK/+hNtBfWyhx4kBGwVQREYrw5o0WNZUHywasUqS/pCMGaly824Wraw9azC2mGJ3afLh8u0wrsAWemIf6TWZk="
};
*size = s_gst_size_TRABAJO__RL10_alternative_control_partition1;
*chunkSize = s_gst_chunkSize_TRABAJO__RL10_alternative_control_partition1;
*chunkedStr = s_gst_chunkedStr_TRABAJO__RL10_alternative_control_partition1;
return true;
}



bool TRABAJO__RL10_alternative_control_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_TRABAJO__RL10_alternative_control_partition1 = 368;
static const unsigned int s_gsi_chunkSize_TRABAJO__RL10_alternative_control_partition1 = 2000;
static const char *s_gsi_chunkedStr_TRABAJO__RL10_alternative_control_partition1[] = 
{
"CAAAADIAAAAAAAAABgAAAAYAAAAGAAAABgAAAAYAAAAGAAAABwAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
};
*size = s_gsi_size_TRABAJO__RL10_alternative_control_partition1;
*chunkSize = s_gsi_chunkSize_TRABAJO__RL10_alternative_control_partition1;
*chunkedStr = s_gsi_chunkedStr_TRABAJO__RL10_alternative_control_partition1;
return true;
}



bool TRABAJO__RL10_alternative_control_partition1::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP void* create_TRABAJO__RL10_alternative_control_partition1(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ep = 0;
	try
	{
		INTEG_simula *tmp = new TRABAJO__RL10_alternative_control_partition1(name,dirInstall);
		ep = (void *)tmp->createThinModel(t,(void(*)())create_TRABAJO__RL10_alternative_control_partition1);
	}
	catch(...)
	{
	}
	return ep;
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_TRABAJO__RL10_alternative_control_partition1(INTEG_simula *obj,const char *name=NULL)
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
	sprintf(componentName,"%s","RL10_alternative_control");
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","TRABAJO.+r+l10_alternative_control.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


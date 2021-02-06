//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__RL10_offDesign_performance2_CPP
#define LPRES_EXAMPLES__RL10_offDesign_performance2_CPP

#include "LPRES_EXAMPLES.+r+l10_off+design.performance2.h"

LPRES_EXAMPLES__RL10_offDesign_performance2* LPRES_EXAMPLES__RL10_offDesign_performance2::s_current= NULL;

LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES_EXAMPLES__RL10_offDesign_performance2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "RL10_offDesign";
m_infoPartitionName = "performance2";
m_infoModelName = "LPRES_EXAMPLES__RL10_offDesign_performance2";
m_infoModelFileName = "LPRES_EXAMPLES.+r+l10_off+design.performance2";
m_infoModelFileNameExtra = "+r+l10_off+design.performance2";
m_perfFlag = false;
m_infoComponentDate = "19/11/2020 12:32:50.118000";
m_infoPartitionDate = "06/02/2021 01:13:07.513000";
m_programVersion= "EcosimPro V6.0.0";
m_libsVersion= "LPRES V1.3.7 LPRES_EXAMPLES V1.3.6 MATH V3.2.7 ";

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
n_dyn=10;
dyn= new double[10] ;
static double tmp_dynInit[10]={ 1, 1, 1, 10, 1, 1, 1, 1, 100, 100 } ;
dynInit= new double[10];
dcopy(10,dynInit,tmp_dynInit);


n_der=0;
der= new double[10] ;
static double tmp_derInit[10]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[10];
dcopy(10,derInit,tmp_derInit);


res= new double[10] ;
ldr= new double[10] ;
boxDyn= new double[10] ;
boxDer= new double[10] ;

n_unkR=396;
unkR= new double[396] ;
static double tmp_unkRInit[396]={ 56.88798558, 14, 1, 0, 0.05, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 3300, 0, 
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
		1, 0, 0, 3275010, 5000000, 0, 0, 0, 0, 0, 1.475994, 0, 0, 0, 0, 500, 
		0.00100103471, 0.00813274823, 100000, 0, 1, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 
		1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 250000, 1500, 0.1, 1, 1, 1, 1200000, 0.05, 
		0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 0.05, 0, 0.5, 0, 0, 16.3526821, 1, 
		0, 0, 1, 1, 1, 1, 1, 1, 0, 0.01, 0, 0, 850, 7358000, 0.573907002, 0, 
		0.0656, 0, 0.2533, 0.05, 0, 0.01, 0, 0, 850, 4282000, 0.6508, 0, 0.03027, 0, 0.05393, 0.05, 
		0, 100000, 1500, 0.1, 1, 1200000, 124105.6, 1500, 0.1, 1, 1200000, 100000, 1500, 0.1, 1200000, 1, 
		1, 1, 1, 0, 0, 0, 0, 0.005, 0.5, 0, 0, 10000, 0, 0, 5, 0, 
		45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 0.01, 38172.635, 0, 0 } ;
unkRInit= new double[396];
dcopy(396,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=24;
static int tmp_cteIInit[24]={ 1, 4, 1, 8, 1, 1, 1, 1, 1, 6, 6, 6, 4, 4, 4, 4, 
		6, 6, 6, 2, 2, 1, 4, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 82;
n_neld= 0;
m_numBoxes= 3;
m_nNonLinearBoxes= 3;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__RL10_offDesign_performance2::initInternalModels()
{
}

int LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi1;
	int _vi2;
	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[7]) ) {
	_vi2 = setofElem(&typ[7], _vi1) ;
	if( fluid[_vi2-1] != 0 ) {
	fluid_name = _vi2 ;
	}
	_vi1 += 1 ;
	}
	if( fluid[26] != 0 ) {
	fluid_name = 27 ;
	}
	return fluid_name ;
}


int LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi3;
	int _vi4;
	double _vr1;
	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[7]) ) {
	_vi4 = setofElem(&typ[7], _vi3) ;
	_vr1 += _div( fluid[_vi4-1] , Chem_M[_vi3-1],"Chem_M[_vi3]") ;
	_vi3 += 1 ;
	}
	return _div( 1 , (_vr1 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr1 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__R(double fluid[])
{
	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",262,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


void LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi5;
	int _vi6;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[1]) ) {
	_vi6 = setofElem(&typ[1], _vi5) ;
	fluid[_vi5-1] = 0. ;
	_vi5 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::MATH__min(const double & x,const double & y)
{
	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi7;
	int _vi8;
	double _vr2;
	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[7]) ) {
	_vi8 = setofElem(&typ[7], _vi7) ;
	_vr2 += Chem_cp[_vi7-1] * fluid[_vi8-1] ;
	_vi7 += 1 ;
	}
	return _vr2 + fluid[28] * fluid[26] ;
}


void LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__fluid_func(double f[],double fluid[])
{
	int _vi10;
	int _vi9;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[1]) ) {
	_vi10 = setofElem(&typ[1], _vi9) ;
	if( _vi10 == 27 ) {
	fluid[_vi9-1] = 0. ;
		}
	else if( _vi10 == 28) {
	fluid[_vi9-1] = 0. ;

		}
	else if( _vi10 == 29) {
	fluid[_vi9-1] = 0. ;

	}
	else {
	fluid[_vi9-1] = _div( f[_vi9-1] , (1. - f[26]),"1 - f[Comb_prod]") ;
	}
	_vi9 += 1 ;
	}
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::MATH__max(const double & x,const double & y)
{
	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__fluidP(const int & Combustion,double fluid_O[],double fluid_F[],const double & phi,const double & W_O,const double & W_F,const double & W_F_st,const double & M_P,const double & cp_P,double fluid_P[])
{
	int _vi11;
	int _vi12;
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[1]) ) {
	_vi12 = setofElem(&typ[1], _vi11) ;
	if( Combustion ) {
	if( _vi12 == 27 ) {
	fluid_P[_vi11-1] = _div( (fluid_O[_vi11-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi11-1] * MATH__max(phi - 1., 0.) * W_F_st + (1. - MATH__max(1. - phi, 0.)) * (W_O + W_F_st)) , (W_O + W_F),"W_O + W_F") ;
		}
	else if( _vi12 == 28) {
	fluid_P[_vi11-1] = M_P ;

		}
	else if( _vi12 == 29) {
	fluid_P[_vi11-1] = cp_P ;

	}
	else {
	fluid_P[_vi11-1] = _div( (fluid_O[_vi11-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi11-1] * MATH__max(phi - 1., 0.) * W_F_st) , (W_O + W_F),"W_O + W_F") ;
	}
	}
	else {
	if( _vi12 == 27 ) {
	fluid_P[_vi11-1] = 0. ;
		}
	else if( _vi12 == 28) {
	fluid_P[_vi11-1] = 0. ;

		}
	else if( _vi12 == 29) {
	fluid_P[_vi11-1] = 0. ;

	}
	else {
	fluid_P[_vi11-1] = _div( (fluid_O[_vi11-1] * MATH__max(1. - phi, 0.) * W_O + fluid_F[_vi11-1] * MATH__max(phi - 1., 0.) * W_F_st) , (W_O + W_F),"W_O + W_F") ;
	}
	}
	_vi11 += 1 ;
	}
}


void LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__fluidG(double fluid_P[],const double & W_O,const double & W_IO,const double & W_F,const double & W_IF,const double & W,double fluid[])
{
	int _vi13;
	int _vi14;
	_vi13 = 1 ;
	while ( _vi13 <= setofSize(&typ[1]) ) {
	_vi14 = setofElem(&typ[1], _vi13) ;
	if( _vi14 == 27 ) {
	fluid[_vi13-1] = _div( (fluid_P[26] * (W_O + W_F) + W_IO + W_IF) , W,"W") ;
		}
	else if( _vi14 == 28) {
	fluid[_vi13-1] = fluid_P[27] ;

		}
	else if( _vi14 == 29) {
	fluid[_vi13-1] = fluid_P[28] ;

	}
	else {
	fluid[_vi13-1] = _div( fluid_P[_vi13-1] * (W_O + W_F) , W,"W") ;
	}
	_vi13 += 1 ;
	}
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__cv(double fluid[])
{
	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__gamma(double fluid[])
{
	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__FGAMMA(double fluid[])
{
	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__Vaporisation(double fluid[])
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


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__Geopotential_Altitude(const double & z)
{
	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__RL10_offDesign_performance2::LPRES__ISA_Pressure(const double & z)
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

void LPRES_EXAMPLES__RL10_offDesign_performance2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__RL10_offDesign_performance2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CC.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",161,"CC.","CC.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[178]) ;
	unkI[0] = 1 ;
	unkR[213] = 1. ;
	if( 1 ) {
	unkR[57] = unkR[212] ;
	}
	dyn[6] = unkR[14] ;
	dyn[1] = unkR[16] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
  // init(Tank_LH2.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[232]) ;
  // init(Tank_LOX.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[60]) ;
  // init(CJ.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[232]), &unkR[27]) ;
	unkR[222] = unkR[223] ;
  // init(Pump_LH2.Pump,0)
	dyn[5] = unkR[332] ;
  // init(Pump_LOX.Pump,0)
	unkR[343] = unkR[344] ;
  // init(Turbine.Turbine,0)
	dyn[7] = unkR[376] ;
	unkR[378] = unkR[379] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-18]  PRIVATE_EQT
unkR[26] = _div( dyn[1] , (1. - unkR[53]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-19]  PRIVATE_EQT
unkR[264] = _div( _div( unkR[26] , (unkR[224] * unkR[225] * LPRES__rho(&unkR[232])),"CJ.a * CJ.b * LPRES.rho(HeadLoss_2.f_in.fluid)") , unkI[2],"CJ.N") ;
//[E-20]  PRIVATE_EQT
unkR[221] = _div( LPRES__rho(&unkR[232]) * unkR[264] * unkR[217] , LPRES__visc(&unkR[232]),"LPRES.visc(HeadLoss_2.f_in.fluid)") ;
//[E-21]  PRIVATE_EQT
unkR[219] = 0.027 * _pow( unkR[221] , 0.8,"(CJ.Re)**(0.8)" ) * _pow( unkR[220] , 0.33,"(CJ.Pr)**(0.33)" ) ;
//[E-22]  PRIVATE_EQT
unkR[229] = _div( unkR[219] * LPRES__cond(&unkR[232]) , unkR[217],"CJ.D_hy") ;
//[E-23]  PRIVATE_EQT
unkR[227] = LPRES__hdc_fric(unkR[216], unkR[262], unkR[221]) ;
//[E-24]  PRIVATE_EQT
unkR[18] = unkR[26] - dyn[1] ;
//[E-25]  PRIVATE_EQT
unkR[335] = _div( unkR[26] , (unkR[329] * dyn[5] * LPRES__rho(&unkR[232])),"Pump_LH2.A_in * Pump_LH2.U * LPRES.rho(HeadLoss_2.f_in.fluid)") ;
//[E-26]  PRIVATE_EQT
unkR[337] = 1. - _div( (1. - unkR[338]) , unkR[336],"Pump_LH2.phi_d") * unkR[335] ;
//[E-27]  PRIVATE_EQT
unkR[340] = unkR[337] * _pow( dyn[5] , 2.,"(Pump_LH2.U)**(2)" ) ;
//[E-28]  PRIVATE_EQT
unkR[261] = unkR[340] * unkR[334] * LPRES__rho(&unkR[232]) + unkR[294] ;
//[E-29]  PRIVATE_EQT
unkR[228] = unkR[261] - _div( unkR[227] * unkR[218] , unkR[216],"CJ.D_eq") * 0.5 * LPRES__rho(&unkR[232]) * _pow( unkR[264] , 2.,"(CJ.v)**(2)" ) ;
//[E-30]  PRIVATE_EQT
unkR[368] = unkR[228] * unkR[367] ;
//[E-31]  PRIVATE_EQT
unkR[324] = _div( _sqrt(LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_3.f_in.fluid)") * MATH__min(dyn[7], 1.) * cos(unkR[384] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( MATH__min(dyn[7], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[27]) + 1.)/2. , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))" ) * unkR[368] * unkR[375] , _sqrt(dyn[4] * LPRES__R(&unkR[27]),"Junct.f_in2.Tt * LPRES.R(HeadLoss_3.f_in.fluid)"),"sqrt(Junct.f_in2.Tt * LPRES.R(HeadLoss_3.f_in.fluid))") ;
//[E-32]  PRIVATE_EQT
unkR[326] = unkR[26] - unkR[324] ;
//[E-33]  PRIVATE_EQT
unkR[356] = unkR[228] * unkR[367] ;
//[E-34]  PRIVATE_EQT
unkR[327] = unkR[356] - unkR[353] ;
//[E-35]  PRIVATE_EQT
unkR[300] = unkR[327] * unkR[322] ;
//[E-36]  PRIVATE_EQT
unkR[325] = _div( unkR[300] , unkR[322],"Junct.TPL") ;
//[E-37]  PRIVATE_EQT
unkR[361] = unkR[325] + unkR[358] ;
//[E-38]  PRIVATE_EQT
unkR[383] = 1. - unkR[386] * (1. - _pow( (_div( unkR[361] , unkR[368],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_3.f_in.fluid)")),"(Regulator_2.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid))" )) ;
//[E-39]  PRIVATE_EQT
unkR[323] = unkR[383] * dyn[4] ;
//[E-40]  PRIVATE_EQT
unkR[299] = _div( (-(_div( unkR[324] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27]) * -unkR[323]) - _div( unkR[326] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27]) * -dyn[4]) , (_div( unkR[324] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27]) + _div( unkR[326] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27])),"Junct.f_in1.W / HeadLoss_3.f_in.W * LPRES.cp(HeadLoss_3.f_in.fluid) + Junct.f_in2.W / HeadLoss_3.f_in.W * LPRES.cp(HeadLoss_3.f_in.fluid)") ;
//[E-41]  PRIVATE_EQT
unkR[377] = unkR[324] * LPRES__cp(&unkR[27]) * (dyn[4] - unkR[323]) ;
//[E-42]  PRIVATE_EQT
unkR[394] = _div( unkR[377] , unkR[324],"Junct.f_in1.W") ;
//[E-43]  PRIVATE_EQT
unkR[301] = unkR[300] - unkR[296] ;
//[E-44]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[311] = _div( unkR[301] , unkR[308],"Inj_LH2.PR_sl") ;
}
else 
{
unkR[311] = 0. ;
}
//[E-45]  PRIVATE_EQT
unkR[231] = _div( _div( (unkR[261] - unkR[294]) , LPRES__rho(&unkR[232]),"LPRES.rho(HeadLoss_2.f_in.fluid)") * (_div( 1. , unkR[334],"Pump_LH2.eta_d") - 1.) , LPRES__cp(&unkR[232]),"LPRES.cp(HeadLoss_2.f_in.fluid)") + unkR[292] ;
//[E-46]  PRIVATE_EQT
unkR[207] = unkR[26] * LPRES__cp(&unkR[27]) * (dyn[4] - unkR[231]) ;
//[E-47]  PRIVATE_EQT
unkR[222] = _div( _div( unkR[207] , unkR[215],"CJ.A_wet_cooling") , unkR[229],"CJ.h_l") + unkR[231] ;
//[E-48]  PRIVATE_EQT
unkR[208] = _div( _div( unkR[207] , unkR[5],"CC.A_wet") , (_div( unkR[230] , unkR[263],"CJ.t_w")),"CJ.k_w / CJ.t_w") + unkR[222] ;
//[E-49]  PRIVATE_EQT
unkR[331] = -(unkR[340] * unkR[26]) ;
//[E-50]  Gearbox.m_out.Power = Pump_LH2.m.Power + Turbine.m.Power
unkR[281] = unkR[331] + unkR[377] ;
//[E-51]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[279] = -(_div( unkR[281] , unkR[277],"Gearbox.eta")) ;
else unkR[279] = -(unkR[281] * unkR[277]) ;
//[E-52]  PRIVATE_EQT
unkR[20] = unkR[7] * dyn[1] ;
//[E-53]  PRIVATE_EQT
unkR[59] = _div( unkR[20] , (1. - unkR[86]),"1 - CC.f_O.fluid[Comb_prod]") ;
//[E-54]  PRIVATE_EQT
unkR[19] = unkR[59] - unkR[20] ;
//[E-55]  PRIVATE_EQT
unkR[177] = unkR[19] + unkR[20] + unkR[26] ;
//[E-56]  PRIVATE_EQT
unkR[352] = _div( -unkR[279] , unkR[59],"CC.f_O.W") ;
//[E-57]  PRIVATE_EQT
unkR[274] = unkR[352] * unkR[346] * LPRES__rho(&unkR[60]) + unkR[287] ;
//[E-58]  PRIVATE_EQT
unkR[273] = _div( _div( (unkR[274] - unkR[287]) , LPRES__rho(&unkR[60]),"LPRES.rho(CC.f_O.fluid)") * (_div( 1. , unkR[346],"Pump_LOX.eta_d") - 1.) , LPRES__cp(&unkR[60]),"LPRES.cp(CC.f_O.fluid)") + unkR[285] ;
//[E-59]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[58] = _div( unkR[273] , (1. + (LPRES__gamma(&unkR[60]) - 1.)/2. * _pow( dyn[2] , 2.,"(Inj_LOX.M_out)**(2)" )),"1 + (LPRES.gamma(CC.f_O.fluid) - 1) / 2 * Inj_LOX.M_out ** 2") ;
}
else 
{
unkR[58] = unkR[273] ;
}
//[E-60]  PRIVATE_EQT
unkR[23] = _div( (unkR[20] * LPRES__cp(&unkR[119]) + dyn[1] * LPRES__cp(&unkR[90])) , (unkR[20] + dyn[1]),"CC.W_O + CC.W_F") ;
//[E-61]  PRIVATE_EQT
unkR[17] = _div( dyn[1] , unkR[213],"CC.phi") ;
//[E-62]  PRIVATE_EQT %%% (OUT VAR)CC.fluid_P 
LPRES__fluidP(unkI[0], &unkR[119], &unkR[90], unkR[213], unkR[20], dyn[1], unkR[17], unkR[6], unkR[22], &unkR[148]);
//[E-63]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[148], unkR[20], unkR[19], dyn[1], unkR[18], unkR[177], &unkR[178]);
//[E-64]  PRIVATE_EQT
unkR[57] = _div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[6],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CC.A_th") ;
//[E-65]  PRIVATE_EQT
unkR[307] = _div( unkR[301] , unkR[57],"CC.f_O.p_c") ;
//[E-66]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[306] = _sqrt(_div( 2. * (_pow( unkR[307] , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_3.f_in.fluid)")),"(Inj_LH2.PR)**((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1"),"2 * (Inj_LH2.PR ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[306] = 1. ;
else unkR[306] = 0. ;
//[E-67]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[25] = _div( unkR[299] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( unkR[306] , 2.,"(Inj_LH2.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Inj_LH2.M_out ** 2") ;
}
else 
{
unkR[25] = unkR[299] ;
}
//[E-68]  PRIVATE_EQT
unkR[15] = _div( (LPRES__cp(&unkR[119]) * unkR[58] + _div( unkR[213] , unkR[8],"CC.OF_st") * LPRES__cp(&unkR[90]) * unkR[25]) , ((1. + _div( unkR[213] , unkR[8],"CC.OF_st")) * unkR[23]),"(1 + CC.phi / CC.OF_st) * CC.cp_R") ;
//[E-69]  PRIVATE_EQT
unkR[13] = _div( (_div( unkR[24] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CC.OF, CC.OF_st)")),"(1 + CC.OF) / MATH.min(CC.OF, CC.OF_st)") + unkR[23] * (unkR[15] - 298.15)) , LPRES__cp(&unkR[148]),"LPRES.cp(CC.fluid_P)") + 298.15 ;
//[E-70]  (CC.W_O + CC.W_F) / ThrustMonitor.g.W * LPRES.cp(CC.fluid_P) * (ThrustMonitor.g.Tt - CC.T_c) + CC.W_IO / ThrustMonitor.g.W * CC.f_O.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CC.f_O.T) + CC.W_IF / ThrustMonitor.g.W * HeadLoss_3.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CC.f_F.T) = 0
res[0] = evalNormResidueInternal(0,_div( (unkR[20] + dyn[1]) , unkR[177],"ThrustMonitor.g.W") * LPRES__cp(&unkR[148]) * (dyn[6] - unkR[13]) + _div( unkR[19] , unkR[177],"ThrustMonitor.g.W") * unkR[88] * (dyn[6] - unkR[58]) + _div( unkR[18] , unkR[177],"ThrustMonitor.g.W") * unkR[55] * (dyn[6] - unkR[25]),0);
//[E-71]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[56] = MATH__max(unkR[57], unkR[311]) ;
}
else 
{
unkR[56] = unkR[57] ;
}
//[E-72]  HeadLoss_3.f_in.W =  IF (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) Inj_LH2.A * LPRES.FGAMMA(HeadLoss_3.f_in.fluid) * Inj_LH2.f_in.pt / sqrt(HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))) / Inj_LH2.M_out) ELSE Inj_LH2.A * Inj_LH2.C_D * sqrt(2 * LPRES.rho(HeadLoss_3.f_in.fluid) * (Inj_LH2.f_in.pt - CC.f_F.p))
if( LPRES__State(&unkR[27]) == 2 ) 
{
res[1] = evalNormResidueInternal(1,unkR[26],_div( _div( unkR[303] * LPRES__FGAMMA(&unkR[27]) * unkR[301] , _sqrt(unkR[299] * LPRES__R(&unkR[27]),"HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)"),"sqrt(HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[27]) - 1) * _pow( unkR[306] , 2,"(Inj_LH2.M_out)**(2)" )) , (LPRES__gamma(&unkR[27]) + 1),"LPRES.gamma(HeadLoss_3.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[27]) + 1) , (2 * (LPRES__gamma(&unkR[27]) - 1)),"2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)))" ) , unkR[306],"Inj_LH2.M_out")),"((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))) / Inj_LH2.M_out"));
}
else 
{
res[1] = evalNormResidueInternal(1,unkR[26],unkR[303] * unkR[305] * _sqrt(2. * LPRES__rho(&unkR[27]) * (unkR[301] - unkR[56]),"2 * LPRES.rho(HeadLoss_3.f_in.fluid) * (Inj_LH2.f_in.pt - CC.f_F.p)"));
}
//[E-73]  PRIVATE_EQT
unkR[319] = dyn[3] * unkR[57] ;
//[E-74]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[320] = _div( unkR[319] , unkR[316],"Inj_LOX.PR_sl") ;
}
else 
{
unkR[320] = 0. ;
}
//[E-75]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[89] = MATH__max(unkR[57], unkR[320]) ;
}
else 
{
unkR[89] = unkR[57] ;
}
//[E-76]  CC.f_O.W =  IF (LPRES.State(CC.f_O.fluid) == Gas) Inj_LOX.A * LPRES.FGAMMA(CC.f_O.fluid) * Inj_LOX.f_in.pt / sqrt(Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid)) / (((2 + (LPRES.gamma(CC.f_O.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(CC.f_O.fluid) + 1)) ** ((LPRES.gamma(CC.f_O.fluid) + 1) / (2 * (LPRES.gamma(CC.f_O.fluid) - 1))) / Inj_LOX.M_out) ELSE Inj_LOX.A * Inj_LOX.C_D * sqrt(2 * LPRES.rho(CC.f_O.fluid) * (Inj_LOX.f_in.pt - CC.f_O.p))
if( LPRES__State(&unkR[60]) == 2 ) 
{
res[2] = evalNormResidueInternal(2,unkR[59],_div( _div( unkR[313] * LPRES__FGAMMA(&unkR[60]) * unkR[319] , _sqrt(unkR[273] * LPRES__R(&unkR[60]),"Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid)"),"sqrt(Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[60]) - 1) * _pow( dyn[2] , 2,"(Inj_LOX.M_out)**(2)" )) , (LPRES__gamma(&unkR[60]) + 1),"LPRES.gamma(CC.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[60]) + 1) , (2 * (LPRES__gamma(&unkR[60]) - 1)),"2 * (LPRES.gamma(CC.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CC.f_O.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(CC.f_O.fluid) + 1))**((LPRES.gamma(CC.f_O.fluid) + 1) / (2 * (LPRES.gamma(CC.f_O.fluid) - 1)))" ) , dyn[2],"Inj_LOX.M_out")),"((2 + (LPRES.gamma(CC.f_O.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(CC.f_O.fluid) + 1)) ** ((LPRES.gamma(CC.f_O.fluid) + 1) / (2 * (LPRES.gamma(CC.f_O.fluid) - 1))) / Inj_LOX.M_out"));
}
else 
{
res[2] = evalNormResidueInternal(2,unkR[59],unkR[313] * unkR[315] * _sqrt(2. * LPRES__rho(&unkR[60]) * (unkR[319] - unkR[89]),"2 * LPRES.rho(CC.f_O.fluid) * (Inj_LOX.f_in.pt - CC.f_O.p)"));
}
//[E-77]  PRIVATE_EQT
unkR[21] = _div( _sqrt(LPRES__R(&unkR[178]) * dyn[6],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[178]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-78]  PRIVATE_EQT
unkR[9] = _div( 4. * LPRES__gamma(&unkR[178]) , (9. * LPRES__gamma(&unkR[178]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-79]  PRIVATE_EQT
unkR[12] = dyn[6] * _div( (1. + _pow( unkR[9] , 0.33,"(CC.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CC.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[178]) - 1.) * _pow( dyn[0] , 2.,"(CC.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2") ;
//[E-80]  PRIVATE_EQT
unkR[214] = 1.184e-07 * _pow( LPRES__M(&unkR[178]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CC.T_aw)**(0.6)" ) ;
//[E-81]  PRIVATE_EQT
unkR[209] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CC.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CC.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CC.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[214] , 0.2,"(CC.visc_r)**(0.2)" ) * LPRES__cp(&unkR[178]) , _pow( unkR[9] , 0.6,"(CC.Pr_r)**(0.6)" ),"CC.Pr_r ** 0.6") * _pow( (_div( unkR[57] , unkR[21],"CC.c_star")) , 0.8,"(CC.f_O.p_c / CC.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CC.A_r")) , 0.9,"(CC.A_th / CC.A_r)**(0.9)" ) ;
//[E-82]  CJ.h.Q = CC.h_g * (CC.T_aw - CJ.h.T) * CC.A_wet
res[3] = evalNormResidueInternal(3,unkR[207],unkR[209] * (unkR[12] - unkR[208]) * unkR[5]);
//[E-83]  CC.AR_r = 1 / CC.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,unkR[1],_div( _div( 1 , dyn[0],"CC.M_r") * LPRES__FGAMMA(&unkR[178]) , _sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1) * _pow( dyn[0] , 2,"(CC.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[178]) + 1) , (2 * (LPRES__gamma(&unkR[178]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-84]  Inj_LOX.M_out =  ZONE (LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl) sqrt(2 * (Inj_LOX.PR ** ((LPRES.gamma(CC.f_O.fluid) - 1) / LPRES.gamma(CC.f_O.fluid)) - 1) / (LPRES.gamma(CC.f_O.fluid) - 1)) ZONE (LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl) 1 OTHERS 0
 if(m_branchZone[3]==0)
	res[5] = evalNormResidueInternal(5,dyn[2],_sqrt(_div( 2. * (_pow( dyn[3] , (_div( (LPRES__gamma(&unkR[60]) - 1.) , LPRES__gamma(&unkR[60]),"LPRES.gamma(CC.f_O.fluid)")),"(Inj_LOX.PR)**((LPRES.gamma(CC.f_O.fluid) - 1) / LPRES.gamma(CC.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(CC.f_O.fluid) - 1"),"2 * (Inj_LOX.PR ** ((LPRES.gamma(CC.f_O.fluid) - 1) / LPRES.gamma(CC.f_O.fluid)) - 1) / (LPRES.gamma(CC.f_O.fluid) - 1)"));
else  if(m_branchZone[3]==1)
	res[5] = evalNormResidueInternal(5,dyn[2],1);
else res[5] = evalNormResidueInternal(5,dyn[2],0);
//[E-85]  PRIVATE_EQT
unkR[380] = dyn[7] * _sqrt(_div( LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * dyn[4] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( dyn[7] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * Junct.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-86]  PRIVATE_EQT
unkR[381] = unkR[380] * cos(unkR[384] * 3.14159265358979/180.) ;
//[E-87]  PRIVATE_EQT
unkR[280] = _div( dyn[5] , unkR[339],"Pump_LH2.r_m") ;
//[E-88]  PRIVATE_EQT
unkR[278] = _div( unkR[280] , unkR[276],"Gearbox.GR") ;
//[E-89]  PRIVATE_EQT
unkR[343] = unkR[278] * unkR[351] ;
//[E-90]  PRIVATE_EQT
unkR[349] = _div( unkR[352] , _pow( unkR[343] , 2.,"(Pump_LOX.U)**(2)" ),"Pump_LOX.U ** 2") ;
//[E-91]  PRIVATE_EQT
unkR[347] = _div( (1. - unkR[349]) , (_div( (1. - unkR[350]) , unkR[348],"Pump_LOX.phi_d")),"(1 - Pump_LOX.psi_d) / Pump_LOX.phi_d") ;
//[E-92]  Pump_LOX.phi = CC.f_O.W / (Pump_LOX.A_in * Pump_LOX.U * LPRES.rho(CC.f_O.fluid))
res[6] = evalNormResidueInternal(6,unkR[347],_div( unkR[59] , (unkR[341] * unkR[343] * LPRES__rho(&unkR[60])),"Pump_LOX.A_in * Pump_LOX.U * LPRES.rho(CC.f_O.fluid)"));
//[E-93]  PRIVATE_EQT
unkR[378] = unkR[280] * unkR[392] ;
//[E-94]  PRIVATE_EQT
unkR[390] = _div( unkR[394] , _pow( unkR[378] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-95]  PRIVATE_EQT
unkR[387] = _div( (unkR[390] + 1.) , (tan(unkR[384] * 3.14159265358979/180.) - tan(unkR[385] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-96]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[7] = evalNormResidueInternal(7,unkR[387],_div( unkR[381] , unkR[378],"Turbine.U"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__RL10_offDesign_performance2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__RL10_offDesign_performance2& m= *LPRES_EXAMPLES__RL10_offDesign_performance2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	dcopy(*n,&m.res[0],residues);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[8];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__RL10_offDesign_performance2::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-97]  ThrustMonitor.g.A_out / CC.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CC.p_out_ch / CC.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[8] = evalNormResidueInternal(8,_div( unkR[2] , unkR[4],"CC.A_th"),_div( LPRES__FGAMMA(&unkR[178]) , (_pow( (_div( dyn[8] , unkR[57],"CC.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CC.p_out_ch / CC.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[178]) * (1. - _pow( (_div( dyn[8] , unkR[57],"CC.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CC.p_out_ch / CC.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[178]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CC.p_out_ch / CC.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__RL10_offDesign_performance2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__RL10_offDesign_performance2& m= *LPRES_EXAMPLES__RL10_offDesign_performance2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[8],x);
	dcopy(*n,&m.res[8],residues);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__RL10_offDesign_performance2::fcn2, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-102]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CC.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( unkR[177] * _sqrt(LPRES__R(&unkR[178]) * dyn[6],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[57],"CC.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[178]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[178]) + 1)/2 , (LPRES__gamma(&unkR[178]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__RL10_offDesign_performance2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__RL10_offDesign_performance2& m= *LPRES_EXAMPLES__RL10_offDesign_performance2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[9],x);
	dcopy(*n,&m.res[9],residues);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__RL10_offDesign_performance2::fcn3, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}

int LPRES_EXAMPLES__RL10_offDesign_performance2::sparseGetEquiv( int nvars,int v[] )
{
	return -1;
}

/* Main residues function for this model */
void LPRES_EXAMPLES__RL10_offDesign_performance2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  PRIVATE_EQT %%% (OUT VAR)CC.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[60]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_3.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[232]), &unkR[27]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)CC.fluid_O 
LPRES__fluid_func(&unkR[60], &unkR[119]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CC.fluid_F 
LPRES__fluid_func(&unkR[27], &unkR[90]);
//[E-6]  PRIVATE_EQT
unkR[213] = _div( unkR[8] , unkR[7],"CC.OF") ;
//[E-7]  PRIVATE_EQT
 if(m_branchZone[0]==0)
	unkR[11] = unkR[10] ;
else unkR[11] = 0. ;
//[E-8]  PRIVATE_EQT
unkR[287] = unkR[286] - unkR[282] ;
//[E-9]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[316] = _pow( ((LPRES__gamma(&unkR[60]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[60]) , (LPRES__gamma(&unkR[60]) - 1.),"LPRES.gamma(CC.f_O.fluid) - 1")),"((LPRES.gamma(CC.f_O.fluid) + 1) / 2)**(LPRES.gamma(CC.f_O.fluid) / (LPRES.gamma(CC.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[316] = 0. ;
}
//[E-10]  PRIVATE_EQT
unkR[3] = unkR[4] * unkR[1] ;
//[E-11]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_2.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[232]);
//[E-12]  PRIVATE_EQT
unkR[217] = _div( 2. * unkR[224] * unkR[225] , (unkR[224] + unkR[225]),"CJ.a + CJ.b") ;
//[E-13]  PRIVATE_EQT
unkR[220] = _div( LPRES__visc(&unkR[232]) * LPRES__cp(&unkR[232]) , LPRES__cond(&unkR[232]),"LPRES.cond(HeadLoss_2.f_in.fluid)") ;
//[E-14]  PRIVATE_EQT
unkR[294] = unkR[293] - unkR[289] ;
//[E-15]  PRIVATE_EQT
unkR[215] = unkI[2] * 2. * (unkR[224] + unkR[225]) * unkR[218] ;
//[E-16]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[308] = _pow( ((LPRES__gamma(&unkR[27]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[27]) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_3.f_in.fluid) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[308] = 0. ;
}
//[E-17]  PRIVATE_EQT
unkR[216] = _div( 1.3 * _pow( (unkR[224] * unkR[225]) , 0.625,"(CJ.a * CJ.b)**(0.625)" ) , _pow( (unkR[224] + unkR[225]) , 0.25,"(CJ.a + CJ.b)**(0.25)" ),"(CJ.a + CJ.b) ** 0.25") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,8,50);
else fbox1(_time,dyn,ldr,res) ;


if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-98]  PRIVATE_EQT
unkR[272] = cabs(unkR[26]) ;
//[E-99]  PRIVATE_EQT
unkR[275] = cabs(unkR[59]) ;
//[E-100]  PRIVATE_EQT
unkR[269] = unkR[272] + unkR[275] ;
//[E-101]  PRIVATE_EQT
unkR[210] = unkR[21] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-103]  PRIVATE_EQT
unkR[371] = _div( dyn[6] , (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-104]  PRIVATE_EQT
unkR[374] = dyn[9] * _sqrt(LPRES__gamma(&unkR[178]) * LPRES__R(&unkR[178]) * unkR[371],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-105]  PRIVATE_EQT
unkR[373] = _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[178]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[178]) - 1.) , LPRES__gamma(&unkR[178]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-106]  PRIVATE_EQT
unkR[372] = LPRES__ISA_Pressure(unkR[328]) ;
//[E-107]  PRIVATE_EQT
unkR[268] = unkR[177] * unkR[374] + unkR[2] * (unkR[373] - unkR[372]) ;
//[E-108]  PRIVATE_EQT
unkR[266] = _div( unkR[268] , unkR[269],"ControlPanel.W_tot") ;
//[E-109]  PRIVATE_EQT
unkR[265] = _div( unkR[266] , unkR[21],"CC.c_star") ;
//[E-110]  PRIVATE_EQT
unkR[267] = unkR[266]/9.80665 ;
//[E-111]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[304] = _div( _sqrt(unkR[299] * LPRES__R(&unkR[27]),"HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)") * unkR[26] , (LPRES__FGAMMA(&unkR[27]) * unkR[301]),"LPRES.FGAMMA(HeadLoss_3.f_in.fluid) * Inj_LH2.f_in.pt") ;
}
else 
{
unkR[304] = 0. ;
}
//[E-112]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[312] = unkR[306] * _sqrt(LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * unkR[25],"LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * CC.f_F.T") ;
}
else 
{
unkR[312] = _div( unkR[26] , (LPRES__rho(&unkR[27]) * unkR[303] * unkR[305]),"LPRES.rho(HeadLoss_3.f_in.fluid) * Inj_LH2.A * Inj_LH2.C_D") ;
}
//[E-113]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[309] = 0. ;
}
else 
{
unkR[309] = _div( LPRES__rho(&unkR[27]) * unkR[312] * unkR[305] * _sqrt(4. * unkR[303]/3.14159265358979,"4 * Inj_LH2.A / 3.14159265358979") , LPRES__visc(&unkR[27]),"LPRES.visc(HeadLoss_3.f_in.fluid)") ;
}
//[E-114]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[314] = _div( _sqrt(unkR[273] * LPRES__R(&unkR[60]),"Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid)") * unkR[59] , (LPRES__FGAMMA(&unkR[60]) * unkR[319]),"LPRES.FGAMMA(CC.f_O.fluid) * Inj_LOX.f_in.pt") ;
}
else 
{
unkR[314] = 0. ;
}
//[E-115]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[321] = dyn[2] * _sqrt(LPRES__gamma(&unkR[60]) * LPRES__R(&unkR[60]) * unkR[58],"LPRES.gamma(CC.f_O.fluid) * LPRES.R(CC.f_O.fluid) * CC.f_O.T") ;
}
else 
{
unkR[321] = _div( unkR[59] , (LPRES__rho(&unkR[60]) * unkR[313] * unkR[315]),"LPRES.rho(CC.f_O.fluid) * Inj_LOX.A * Inj_LOX.C_D") ;
}
//[E-116]  PRIVATE_EQT
if( LPRES__State(&unkR[60]) == 2 ) 
{
unkR[317] = 0. ;
}
else 
{
unkR[317] = _div( LPRES__rho(&unkR[60]) * unkR[321] * unkR[315] * _sqrt(4. * unkR[313]/3.14159265358979,"4 * Inj_LOX.A / 3.14159265358979") , LPRES__visc(&unkR[60]),"LPRES.visc(CC.f_O.fluid)") ;
}
//[E-117]  PRIVATE_EQT
unkR[330] = _div( (unkR[261] - unkR[294]) , (9.80665 * LPRES__rho(&unkR[232])),"9.80665 * LPRES.rho(HeadLoss_2.f_in.fluid)") ;
//[E-118]  PRIVATE_EQT
unkR[342] = _div( (unkR[274] - unkR[287]) , (9.80665 * LPRES__rho(&unkR[60])),"9.80665 * LPRES.rho(CC.f_O.fluid)") ;
//[E-119]  PRIVATE_EQT
unkR[363] = unkR[274] - unkR[319] ;
//[E-120]  PRIVATE_EQT
unkR[270] = unkR[268] ;
//[E-121]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[271] = unkR[272] + unkR[275] ;
//[E-122]  aux1 = Junct.f_in1.W * sqrt(Junct.f_in2.Tt * LPRES.R(HeadLoss_3.f_in.fluid)) / (Turbine.f_in.pt * Turbine.A_in)
unkR[395] = _div( unkR[324] * _sqrt(dyn[4] * LPRES__R(&unkR[27]),"Junct.f_in2.Tt * LPRES.R(HeadLoss_3.f_in.fluid)") , (unkR[368] * unkR[375]),"Turbine.f_in.pt * Turbine.A_in") ;

//save last residues
memcpy(this->res,res,10*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[232])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",59,"CJ.","Liquid == LPRES.State(HeadLoss_2.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[232])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_LH2.","Liquid == LPRES.State(HeadLoss_2.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[60])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_LOX.","Liquid == LPRES.State(CC.f_O.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[178])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[373] , unkR[372],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",895,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[27])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_3.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[1]= unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115];
    ev[2]= unkI[0] - 1;
    ev[3]= unkR[279];
    ev[4]= LPRES__State(&unkR[27]) - 2;
    ev[5]= unkR[307] - unkR[308];
    ev[6]= LPRES__State(&unkR[27]) - 2;
    ev[7]= unkR[307] - unkR[308];
    ev[8]= LPRES__State(&unkR[60]) - 2;
    ev[9]= dyn[3] - unkR[316];
    ev[10]= LPRES__State(&unkR[60]) - 2;
    ev[11]= dyn[3] - unkR[316];
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ;
     w[1] = cont[1] ;
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__RL10_offDesign_performance2::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__RL10_offDesign_performance2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CC.Q_comb_effective =  ZONE (CC.Combustion) CC.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Gearbox.m_out.Power =  ZONE (Pump_LOX.m.Power > 0) -Pump_LOX.m.Power * Gearbox.eta OTHERS -Pump_LOX.m.Power / Gearbox.eta
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Inj_LH2.M_out =  ZONE (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR < Inj_LH2.PR_sl) sqrt(2 * (Inj_LH2.PR ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR >= Inj_LH2.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Inj_LOX.M_out =  ZONE (LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl) sqrt(2 * (Inj_LOX.PR ** ((LPRES.gamma(CC.f_O.fluid) - 1) / LPRES.gamma(CC.f_O.fluid)) - 1) / (LPRES.gamma(CC.f_O.fluid) - 1)) ZONE (LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__RL10_offDesign_performance2::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
	static const char* zoneTxtTable[] = { "CC.Combustion","OTHERS",
	"Pump_LOX.m.Power > 0","OTHERS",
	"LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR < Inj_LH2.PR_sl","LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR >= Inj_LH2.PR_sl","OTHERS",
	"LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl","LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"Private-info"},{ WHEN,EQ_OP,0,1,"Private-info"},{ ZONE,EQ_OP,0,0,"CC.Combustion"},{ ZONE,GT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"}
,{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,GT_EQ_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"}
,{ ZONE,GT_EQ_OP,0,0,"Private-info"}};
	return evs;
};

/* Initialisation of delays */
void LPRES_EXAMPLES__RL10_offDesign_performance2::initDelays()
{
}


bool LPRES_EXAMPLES__RL10_offDesign_performance2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__RL10_offDesign_performance2 = 85448;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__RL10_offDesign_performance2 = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__RL10_offDesign_performance2[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__RL10_offDesign_performance2;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__RL10_offDesign_performance2;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__RL10_offDesign_performance2;
return true;
}



bool LPRES_EXAMPLES__RL10_offDesign_performance2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__RL10_offDesign_performance2 = 560;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__RL10_offDesign_performance2 = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__RL10_offDesign_performance2[] = 
{
"CgAAAFIAAAAAAAAACAAAAAgAAAAIAAAACAAAAAgAAAAIAAAACAAAAAgAAAAJAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAoAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
};
*size = s_gsi_size_LPRES_EXAMPLES__RL10_offDesign_performance2;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__RL10_offDesign_performance2;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__RL10_offDesign_performance2;
return true;
}



bool LPRES_EXAMPLES__RL10_offDesign_performance2::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP void* create_LPRES_EXAMPLES__RL10_offDesign_performance2(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__RL10_offDesign_performance2(name,dirInstall);
		ep = (void *)tmp->createThinModel(t,(void(*)())create_LPRES_EXAMPLES__RL10_offDesign_performance2);
	}
	catch(...)
	{
	}
	return ep;
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__RL10_offDesign_performance2(INTEG_simula *obj,const char *name=NULL)
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
	sprintf(libraryName,"%s","LPRES_EXAMPLES");
	sprintf(componentName,"%s","RL10_offDesign");
	sprintf(partitionName,"%s","performance2");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+r+l10_off+design.performance2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


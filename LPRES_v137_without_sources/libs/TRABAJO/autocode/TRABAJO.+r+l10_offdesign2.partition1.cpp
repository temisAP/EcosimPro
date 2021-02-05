//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef TRABAJO__RL10_offdesign2_partition1_CPP
#define TRABAJO__RL10_offdesign2_partition1_CPP

#include "TRABAJO.+r+l10_offdesign2.partition1.h"

TRABAJO__RL10_offdesign2_partition1* TRABAJO__RL10_offdesign2_partition1::s_current= NULL;

TRABAJO__RL10_offdesign2_partition1::TRABAJO__RL10_offdesign2_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoComponentName = "RL10_offdesign2";
m_infoPartitionName = "partition1";
m_infoModelName = "TRABAJO__RL10_offdesign2_partition1";
m_infoModelFileName = "TRABAJO.+r+l10_offdesign2.partition1";
m_infoModelFileNameExtra = "+r+l10_offdesign2.partition1";
m_perfFlag = false;
m_infoComponentDate = "05/02/2021 16:33:19.699000";
m_infoPartitionDate = "05/02/2021 16:33:59.213000";
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

n_unkR=396;
unkR= new double[396] ;
static double tmp_unkRInit[396]={ 56.88798558, 14, 1, 0, 0.05, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 3300, 0, 
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
		0, 0, 3275010, 5000000, 0, 0, 0, 0, 0, 1.475994, 0, 0, 0, 0, 500, 0.00100103471, 
		0.00813274823, 100000, 0, 1, 1, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 
		1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 250000, 1500, 0.1, 1, 1, 1, 1200000, 0.05, 
		0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 0.05, 0, 0.5, 0, 10, 0, 0, 
		16.3526821, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0.01, 0, 0, 850, 7358000, 0.573907002, 
		0, 0.0656, 0, 0.2533, 0.05, 0, 0.01, 0, 0, 850, 4282000, 0.6508, 0, 0.03027, 0, 0.05393, 
		0.05, 0, 100000, 1500, 0.1, 1, 1200000, 124105.6, 1500, 0.1, 1, 1200000, 100000, 1500, 0.1, 1200000, 
		1, 1, 1, 1, 0, 0, 0, 0, 0.005, 0.5, 0, 0, 10000, 0, 0, 5, 
		0, 45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 0.01, 38172.635, 0 } ;
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
n_nelg= 65;
n_neld= 0;
m_numBoxes= 3;
m_nNonLinearBoxes= 3;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void TRABAJO__RL10_offdesign2_partition1::initInternalModels()
{
}

void TRABAJO__RL10_offdesign2_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int TRABAJO__RL10_offdesign2_partition1::LPRES__Know_fluid(double fluid[])
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


int TRABAJO__RL10_offdesign2_partition1::LPRES__State(double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__cp(double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__M(double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__R(double fluid[])
{
	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",262,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double TRABAJO__RL10_offdesign2_partition1::LPRES__cv(double fluid[])
{
	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double TRABAJO__RL10_offdesign2_partition1::LPRES__gamma(double fluid[])
{
	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double TRABAJO__RL10_offdesign2_partition1::MATH__min(const double & x,const double & y)
{
	if( x < y ) {
	return x ;
	}
	return y ;
}


double TRABAJO__RL10_offdesign2_partition1::LPRES__rho(double fluid[])
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


void TRABAJO__RL10_offdesign2_partition1::LPRES__fluid_func(double f[],double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::MATH__max(const double & x,const double & y)
{
	if( x > y ) {
	return x ;
	}
	return y ;
}


void TRABAJO__RL10_offdesign2_partition1::LPRES__fluidP(const int & Combustion,double fluid_O[],double fluid_F[],const double & phi,const double & W_O,const double & W_F,const double & W_F_st,const double & M_P,const double & cp_P,double fluid_P[])
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


void TRABAJO__RL10_offdesign2_partition1::LPRES__fluidG(double fluid_P[],const double & W_O,const double & W_IO,const double & W_F,const double & W_IF,const double & W,double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__FGAMMA(double fluid[])
{
	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int TRABAJO__RL10_offdesign2_partition1::LPRES__Vaporisation(double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__cond(double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__visc(double fluid[])
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double TRABAJO__RL10_offdesign2_partition1::LPRES__Geopotential_Altitude(const double & z)
{
	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double TRABAJO__RL10_offdesign2_partition1::LPRES__ISA_Pressure(const double & z)
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

void TRABAJO__RL10_offdesign2_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void TRABAJO__RL10_offdesign2_partition1::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Tank_LOX.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[59]) ;
  // init(Tank_LH2.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[232]) ;
  // init(CC.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",161,"CC.","CC.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

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
  // init(CJ.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[232]), &unkR[27]) ;
	unkR[221] = unkR[222] ;
  // init(Turbine.Turbine,0)
	dyn[6] = unkR[377] ;
	unkR[379] = unkR[380] ;
  // init(Pump_LOX.Pump,0)
	unkR[344] = unkR[345] ;
  // init(Pump_LH2.Pump,0)
	dyn[4] = unkR[333] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void TRABAJO__RL10_offdesign2_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-16]  PRIVATE_EQT
unkR[26] = _div( dyn[1] , (1. - unkR[53]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-17]  PRIVATE_EQT
unkR[336] = _div( unkR[26] , (unkR[330] * dyn[4] * LPRES__rho(&unkR[232])),"Pump_LH2.A_in * Pump_LH2.U * LPRES.rho(HeadLoss_2.f_in.fluid)") ;
//[E-18]  PRIVATE_EQT
unkR[338] = 1. - _div( (1. - unkR[339]) , unkR[337],"Pump_LH2.phi_d") * unkR[336] ;
//[E-19]  PRIVATE_EQT
unkR[341] = unkR[338] * _pow( dyn[4] , 2.,"(Pump_LH2.U)**(2)" ) ;
//[E-20]  PRIVATE_EQT
unkR[261] = unkR[341] * unkR[335] * LPRES__rho(&unkR[232]) + unkR[294] ;
//[E-21]  PRIVATE_EQT
unkR[231] = _div( _div( (unkR[261] - unkR[294]) , LPRES__rho(&unkR[232]),"LPRES.rho(HeadLoss_2.f_in.fluid)") * (_div( 1. , unkR[335],"Pump_LH2.eta_d") - 1.) , LPRES__cp(&unkR[232]),"LPRES.cp(HeadLoss_2.f_in.fluid)") + unkR[292] ;
//[E-22]  PRIVATE_EQT
unkR[332] = -(unkR[341] * unkR[26]) ;
//[E-23]  PRIVATE_EQT
unkR[264] = _div( _div( unkR[26] , (unkR[223] * unkR[224] * LPRES__rho(&unkR[232])),"CJ.a * CJ.b * LPRES.rho(HeadLoss_2.f_in.fluid)") , unkI[2],"CJ.N") ;
//[E-24]  PRIVATE_EQT
unkR[220] = _div( LPRES__rho(&unkR[232]) * unkR[264] * unkR[216] , LPRES__visc(&unkR[232]),"LPRES.visc(HeadLoss_2.f_in.fluid)") ;
//[E-25]  PRIVATE_EQT
unkR[218] = 0.027 * _pow( unkR[220] , 0.8,"(CJ.Re)**(0.8)" ) * _pow( unkR[219] , 0.33,"(CJ.Pr)**(0.33)" ) ;
//[E-26]  PRIVATE_EQT
unkR[229] = _div( unkR[218] * LPRES__cond(&unkR[232]) , unkR[216],"CJ.D_hy") ;
//[E-27]  PRIVATE_EQT
unkR[226] = LPRES__hdc_fric(unkR[215], unkR[262], unkR[220]) ;
//[E-28]  PRIVATE_EQT
unkR[228] = unkR[261] - _div( unkR[226] * unkR[217] , unkR[215],"CJ.D_eq") * 0.5 * LPRES__rho(&unkR[232]) * _pow( unkR[264] , 2.,"(CJ.v)**(2)" ) ;
//[E-29]  PRIVATE_EQT
unkR[369] = unkR[228] * unkR[368] ;
//[E-30]  PRIVATE_EQT
unkR[357] = unkR[228] * unkR[368] ;
//[E-31]  PRIVATE_EQT
unkR[328] = unkR[357] - unkR[354] ;
//[E-32]  PRIVATE_EQT
unkR[300] = unkR[328] * unkR[324] ;
//[E-33]  PRIVATE_EQT
unkR[327] = _div( unkR[300] , unkR[324],"Junct.TPL") ;
//[E-34]  PRIVATE_EQT
unkR[362] = unkR[327] + unkR[359] ;
//[E-35]  PRIVATE_EQT
unkR[384] = 1. - unkR[387] * (1. - _pow( (_div( unkR[362] , unkR[369],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_3.f_in.fluid)")),"(Regulator_2.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid))" )) ;
//[E-36]  PRIVATE_EQT
unkR[301] = unkR[300] - unkR[296] ;
//[E-37]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[311] = _div( unkR[301] , unkR[308],"Inj_LH2.PR_sl") ;
}
else 
{
unkR[311] = 0. ;
}
//[E-38]  PRIVATE_EQT
unkR[326] = unkR[26] - dyn[3] ;
//[E-39]  PRIVATE_EQT
unkR[227] = _div( _pow( (_div( _sqrt(LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_3.f_in.fluid)") * MATH__min(dyn[6], 1.) * cos(unkR[385] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( MATH__min(dyn[6], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[27]) + 1.)/2. , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))" ) * unkR[369] * unkR[376] , unkR[326],"Junct.f_in1.W")) , 2.,"(sqrt(LPRES.gamma(HeadLoss_3.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)) * Turbine.f_in.pt * Turbine.A_in / Junct.f_in1.W)**(2)" ) , LPRES__R(&unkR[27]),"LPRES.R(HeadLoss_3.f_in.fluid)") ;
//[E-40]  PRIVATE_EQT
unkR[325] = unkR[384] * unkR[227] ;
//[E-41]  PRIVATE_EQT
unkR[378] = unkR[326] * LPRES__cp(&unkR[27]) * (unkR[227] - unkR[325]) ;
//[E-42]  PRIVATE_EQT
unkR[395] = _div( unkR[378] , unkR[326],"Junct.f_in1.W") ;
//[E-43]  Gearbox.m_out.Power = Pump_LH2.m.Power + Turbine.m.Power
unkR[281] = unkR[332] + unkR[378] ;
//[E-44]  PRIVATE_EQT
 if(m_branchZone[0]==0)
	unkR[279] = -(_div( unkR[281] , unkR[277],"Gearbox.eta")) ;
else unkR[279] = -(unkR[281] * unkR[277]) ;
//[E-45]  PRIVATE_EQT
unkR[353] = _div( -unkR[279] , dyn[2],"CC.f_O.W") ;
//[E-46]  PRIVATE_EQT
unkR[274] = unkR[353] * unkR[347] * LPRES__rho(&unkR[59]) + unkR[287] ;
//[E-47]  PRIVATE_EQT
unkR[273] = _div( _div( (unkR[274] - unkR[287]) , LPRES__rho(&unkR[59]),"LPRES.rho(CC.f_O.fluid)") * (_div( 1. , unkR[347],"Pump_LOX.eta_d") - 1.) , LPRES__cp(&unkR[59]),"LPRES.cp(CC.f_O.fluid)") + unkR[285] ;
//[E-48]  PRIVATE_EQT
unkR[321] = unkR[274] - unkR[364] ;
//[E-49]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[322] = _div( unkR[321] , unkR[318],"Inj_LOX.PR_sl") ;
}
else 
{
unkR[322] = 0. ;
}
//[E-50]  PRIVATE_EQT
unkR[299] = _div( (-(_div( unkR[326] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27]) * -unkR[325]) - _div( dyn[3] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27]) * -unkR[227]) , (_div( unkR[326] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27]) + _div( dyn[3] , unkR[26],"HeadLoss_3.f_in.W") * LPRES__cp(&unkR[27])),"Junct.f_in1.W / HeadLoss_3.f_in.W * LPRES.cp(HeadLoss_3.f_in.fluid) + Junct.f_in2.W / HeadLoss_3.f_in.W * LPRES.cp(HeadLoss_3.f_in.fluid)") ;
//[E-51]  PRIVATE_EQT
unkR[381] = dyn[6] * _sqrt(_div( LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * unkR[227] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( dyn[6] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * Junct.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-52]  PRIVATE_EQT
unkR[382] = unkR[381] * cos(unkR[385] * 3.14159265358979/180.) ;
//[E-53]  PRIVATE_EQT
unkR[206] = unkR[26] * LPRES__cp(&unkR[27]) * (unkR[227] - unkR[231]) ;
//[E-54]  PRIVATE_EQT
unkR[221] = _div( _div( unkR[206] , unkR[214],"CJ.A_wet_cooling") , unkR[229],"CJ.h_l") + unkR[231] ;
//[E-55]  PRIVATE_EQT
unkR[207] = _div( _div( unkR[206] , unkR[5],"CC.A_wet") , (_div( unkR[230] , unkR[263],"CJ.t_w")),"CJ.k_w / CJ.t_w") + unkR[221] ;
//[E-56]  PRIVATE_EQT
unkR[18] = unkR[326] + dyn[3] - dyn[1] ;
//[E-57]  PRIVATE_EQT
unkR[20] = dyn[2] * (1. - unkR[85]) ;
//[E-58]  PRIVATE_EQT
unkR[19] = dyn[2] - unkR[20] ;
//[E-59]  PRIVATE_EQT
unkR[176] = unkR[19] + unkR[20] + unkR[326] + dyn[3] ;
//[E-60]  PRIVATE_EQT
unkR[7] = _div( unkR[20] , dyn[1],"CC.W_F") ;
//[E-61]  PRIVATE_EQT
unkR[212] = _div( unkR[8] , unkR[7],"CC.OF") ;
//[E-62]  PRIVATE_EQT
unkR[17] = _div( dyn[1] , unkR[212],"CC.phi") ;
//[E-63]  PRIVATE_EQT %%% (OUT VAR)CC.fluid_P 
LPRES__fluidP(unkI[0], &unkR[118], &unkR[89], unkR[212], unkR[20], dyn[1], unkR[17], unkR[6], unkR[22], &unkR[147]);
//[E-64]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[147], unkR[20], unkR[19], dyn[1], unkR[18], unkR[176], &unkR[177]);
//[E-65]  PRIVATE_EQT
unkR[57] = _div( _div( unkR[176] * _sqrt(LPRES__R(&unkR[177]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[177]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CC.A_th") ;
//[E-66]  PRIVATE_EQT
unkR[307] = _div( unkR[301] , unkR[57],"CC.f_O.p_c") ;
//[E-67]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[306] = _sqrt(_div( 2. * (_pow( unkR[307] , (_div( (LPRES__gamma(&unkR[27]) - 1.) , LPRES__gamma(&unkR[27]),"LPRES.gamma(HeadLoss_3.f_in.fluid)")),"(Inj_LH2.PR)**((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1"),"2 * (Inj_LH2.PR ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[306] = 1. ;
else unkR[306] = 0. ;
//[E-68]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[25] = _div( unkR[299] , (1. + (LPRES__gamma(&unkR[27]) - 1.)/2. * _pow( unkR[306] , 2.,"(Inj_LH2.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Inj_LH2.M_out ** 2") ;
}
else 
{
unkR[25] = unkR[299] ;
}
//[E-69]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[56] = MATH__max(unkR[57], unkR[311]) ;
}
else 
{
unkR[56] = unkR[57] ;
}
//[E-70]  HeadLoss_3.f_in.W =  IF (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) Inj_LH2.A * LPRES.FGAMMA(HeadLoss_3.f_in.fluid) * Inj_LH2.f_in.pt / sqrt(HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))) / Inj_LH2.M_out) ELSE Inj_LH2.A * Inj_LH2.C_D * sqrt(2 * LPRES.rho(HeadLoss_3.f_in.fluid) * (Inj_LH2.f_in.pt - CC.f_F.p))
if( LPRES__State(&unkR[27]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[26],_div( _div( unkR[303] * LPRES__FGAMMA(&unkR[27]) * unkR[301] , _sqrt(unkR[299] * LPRES__R(&unkR[27]),"HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)"),"sqrt(HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[27]) - 1) * _pow( unkR[306] , 2,"(Inj_LH2.M_out)**(2)" )) , (LPRES__gamma(&unkR[27]) + 1),"LPRES.gamma(HeadLoss_3.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[27]) + 1) , (2 * (LPRES__gamma(&unkR[27]) - 1)),"2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)))" ) , unkR[306],"Inj_LH2.M_out")),"((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))) / Inj_LH2.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[26],unkR[303] * unkR[305] * _sqrt(2. * LPRES__rho(&unkR[27]) * (unkR[301] - unkR[56]),"2 * LPRES.rho(HeadLoss_3.f_in.fluid) * (Inj_LH2.f_in.pt - CC.f_F.p)"));
}
//[E-71]  PRIVATE_EQT
unkR[317] = _div( unkR[321] , unkR[57],"CC.f_O.p_c") ;
//[E-72]  PRIVATE_EQT
 if(m_branchZone[3]==0)
	unkR[316] = _sqrt(_div( 2. * (_pow( unkR[317] , (_div( (LPRES__gamma(&unkR[59]) - 1.) , LPRES__gamma(&unkR[59]),"LPRES.gamma(CC.f_O.fluid)")),"(Inj_LOX.PR)**((LPRES.gamma(CC.f_O.fluid) - 1) / LPRES.gamma(CC.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[59]) - 1.),"LPRES.gamma(CC.f_O.fluid) - 1"),"2 * (Inj_LOX.PR ** ((LPRES.gamma(CC.f_O.fluid) - 1) / LPRES.gamma(CC.f_O.fluid)) - 1) / (LPRES.gamma(CC.f_O.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[316] = 1. ;
else unkR[316] = 0. ;
//[E-73]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[58] = _div( unkR[273] , (1. + (LPRES__gamma(&unkR[59]) - 1.)/2. * _pow( unkR[316] , 2.,"(Inj_LOX.M_out)**(2)" )),"1 + (LPRES.gamma(CC.f_O.fluid) - 1) / 2 * Inj_LOX.M_out ** 2") ;
}
else 
{
unkR[58] = unkR[273] ;
}
//[E-74]  PRIVATE_EQT
unkR[13] = dyn[5] - _div( (-(_div( unkR[18] , unkR[176],"ThrustMonitor.g.W") * unkR[55] * (dyn[5] - unkR[25])) - _div( unkR[19] , unkR[176],"ThrustMonitor.g.W") * unkR[87] * (dyn[5] - unkR[58])) , (_div( (unkR[20] + dyn[1]) , unkR[176],"ThrustMonitor.g.W") * LPRES__cp(&unkR[147])),"(CC.W_O + CC.W_F) / ThrustMonitor.g.W * LPRES.cp(CC.fluid_P)") ;
//[E-75]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[88] = MATH__max(unkR[57], unkR[322]) ;
}
else 
{
unkR[88] = unkR[57] ;
}
//[E-76]  CC.f_O.W =  IF (LPRES.State(CC.f_O.fluid) == Gas) Inj_LOX.A * LPRES.FGAMMA(CC.f_O.fluid) * Inj_LOX.f_in.pt / sqrt(Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid)) / (((2 + (LPRES.gamma(CC.f_O.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(CC.f_O.fluid) + 1)) ** ((LPRES.gamma(CC.f_O.fluid) + 1) / (2 * (LPRES.gamma(CC.f_O.fluid) - 1))) / Inj_LOX.M_out) ELSE Inj_LOX.A * Inj_LOX.C_D * sqrt(2 * LPRES.rho(CC.f_O.fluid) * (Inj_LOX.f_in.pt - CC.f_O.p))
if( LPRES__State(&unkR[59]) == 2 ) 
{
res[1] = evalNormResidueInternal(1,dyn[2],_div( _div( unkR[313] * LPRES__FGAMMA(&unkR[59]) * unkR[321] , _sqrt(unkR[273] * LPRES__R(&unkR[59]),"Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid)"),"sqrt(Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[59]) - 1) * _pow( unkR[316] , 2,"(Inj_LOX.M_out)**(2)" )) , (LPRES__gamma(&unkR[59]) + 1),"LPRES.gamma(CC.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[59]) + 1) , (2 * (LPRES__gamma(&unkR[59]) - 1)),"2 * (LPRES.gamma(CC.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CC.f_O.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(CC.f_O.fluid) + 1))**((LPRES.gamma(CC.f_O.fluid) + 1) / (2 * (LPRES.gamma(CC.f_O.fluid) - 1)))" ) , unkR[316],"Inj_LOX.M_out")),"((2 + (LPRES.gamma(CC.f_O.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(CC.f_O.fluid) + 1)) ** ((LPRES.gamma(CC.f_O.fluid) + 1) / (2 * (LPRES.gamma(CC.f_O.fluid) - 1))) / Inj_LOX.M_out"));
}
else 
{
res[1] = evalNormResidueInternal(1,dyn[2],unkR[313] * unkR[315] * _sqrt(2. * LPRES__rho(&unkR[59]) * (unkR[321] - unkR[88]),"2 * LPRES.rho(CC.f_O.fluid) * (Inj_LOX.f_in.pt - CC.f_O.p)"));
}
//[E-77]  PRIVATE_EQT
unkR[21] = _div( _sqrt(LPRES__R(&unkR[177]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[177]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-78]  PRIVATE_EQT
unkR[9] = _div( 4. * LPRES__gamma(&unkR[177]) , (9. * LPRES__gamma(&unkR[177]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-79]  PRIVATE_EQT
unkR[12] = dyn[5] * _div( (1. + _pow( unkR[9] , 0.33,"(CC.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[177]) - 1.) * _pow( dyn[0] , 2.,"(CC.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[177]) - 1.) * _pow( dyn[0] , 2.,"(CC.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2") ;
//[E-80]  PRIVATE_EQT
unkR[213] = 1.184e-07 * _pow( LPRES__M(&unkR[177]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CC.T_aw)**(0.6)" ) ;
//[E-81]  PRIVATE_EQT
unkR[208] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CC.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CC.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CC.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[213] , 0.2,"(CC.visc_r)**(0.2)" ) * LPRES__cp(&unkR[177]) , _pow( unkR[9] , 0.6,"(CC.Pr_r)**(0.6)" ),"CC.Pr_r ** 0.6") * _pow( (_div( unkR[57] , unkR[21],"CC.c_star")) , 0.8,"(CC.f_O.p_c / CC.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CC.A_r")) , 0.9,"(CC.A_th / CC.A_r)**(0.9)" ) ;
//[E-82]  CJ.h.Q = CC.h_g * (CC.T_aw - CJ.h.T) * CC.A_wet
res[2] = evalNormResidueInternal(2,unkR[206],unkR[208] * (unkR[12] - unkR[207]) * unkR[5]);
//[E-83]  CC.AR_r = 1 / CC.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,unkR[1],_div( _div( 1 , dyn[0],"CC.M_r") * LPRES__FGAMMA(&unkR[177]) , _sqrt(LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[177]) - 1) * _pow( dyn[0] , 2,"(CC.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[177]) + 1) , (2 * (LPRES__gamma(&unkR[177]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-84]  PRIVATE_EQT
unkR[23] = _div( (unkR[20] * LPRES__cp(&unkR[118]) + dyn[1] * LPRES__cp(&unkR[89])) , (unkR[20] + dyn[1]),"CC.W_O + CC.W_F") ;
//[E-85]  PRIVATE_EQT
unkR[15] = _div( (LPRES__cp(&unkR[147]) * (unkR[13] - 298.15) - _div( unkR[24] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CC.OF, CC.OF_st)")),"(1 + CC.OF) / MATH.min(CC.OF, CC.OF_st)")) , unkR[23],"CC.cp_R") + 298.15 ;
//[E-86]  (1 + CC.phi / CC.OF_st) * CC.cp_R * CC.T_in = LPRES.cp(CC.fluid_O) * CC.f_O.T + CC.phi / CC.OF_st * LPRES.cp(CC.fluid_F) * CC.f_F.T
res[4] = evalNormResidueInternal(4,(1 + _div( unkR[212] , unkR[8],"CC.OF_st")) * unkR[23] * unkR[15],LPRES__cp(&unkR[118]) * unkR[58] + _div( unkR[212] , unkR[8],"CC.OF_st") * LPRES__cp(&unkR[89]) * unkR[25]);
//[E-87]  PRIVATE_EQT
unkR[280] = _div( dyn[4] , unkR[340],"Pump_LH2.r_m") ;
//[E-88]  PRIVATE_EQT
unkR[379] = unkR[280] * unkR[393] ;
//[E-89]  PRIVATE_EQT
unkR[391] = _div( unkR[395] , _pow( unkR[379] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-90]  PRIVATE_EQT
unkR[388] = _div( (unkR[391] + 1.) , (tan(unkR[385] * 3.14159265358979/180.) - tan(unkR[386] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-91]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[5] = evalNormResidueInternal(5,unkR[388],_div( unkR[382] , unkR[379],"Turbine.U"));
//[E-92]  PRIVATE_EQT
unkR[278] = _div( unkR[280] , unkR[276],"Gearbox.GR") ;
//[E-93]  PRIVATE_EQT
unkR[344] = unkR[278] * unkR[352] ;
//[E-94]  PRIVATE_EQT
unkR[350] = _div( unkR[353] , _pow( unkR[344] , 2.,"(Pump_LOX.U)**(2)" ),"Pump_LOX.U ** 2") ;
//[E-95]  PRIVATE_EQT
unkR[348] = _div( (1. - unkR[350]) , (_div( (1. - unkR[351]) , unkR[349],"Pump_LOX.phi_d")),"(1 - Pump_LOX.psi_d) / Pump_LOX.phi_d") ;
//[E-96]  Pump_LOX.phi = CC.f_O.W / (Pump_LOX.A_in * Pump_LOX.U * LPRES.rho(CC.f_O.fluid))
res[6] = evalNormResidueInternal(6,unkR[348],_div( dyn[2] , (unkR[342] * unkR[344] * LPRES__rho(&unkR[59])),"Pump_LOX.A_in * Pump_LOX.U * LPRES.rho(CC.f_O.fluid)"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void TRABAJO__RL10_offdesign2_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign2_partition1& m= *TRABAJO__RL10_offdesign2_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	dcopy(*n,&m.res[0],residues);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void TRABAJO__RL10_offdesign2_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[7];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign2_partition1::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void TRABAJO__RL10_offdesign2_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-100]  ThrustMonitor.g.A_out / CC.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CC.p_out_ch / CC.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CC.A_th"),_div( LPRES__FGAMMA(&unkR[177]) , (_pow( (_div( dyn[7] , unkR[57],"CC.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CC.p_out_ch / CC.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[177]) * (1. - _pow( (_div( dyn[7] , unkR[57],"CC.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[177]) - 1.) , LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CC.p_out_ch / CC.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[177]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CC.p_out_ch / CC.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void TRABAJO__RL10_offdesign2_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign2_partition1& m= *TRABAJO__RL10_offdesign2_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[7],x);
	dcopy(*n,&m.res[7],residues);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void TRABAJO__RL10_offdesign2_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign2_partition1::fcn2, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void TRABAJO__RL10_offdesign2_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-105]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CC.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[176] * _sqrt(LPRES__R(&unkR[177]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[57],"CC.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[177]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[177]) + 1)/2 , (LPRES__gamma(&unkR[177]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void TRABAJO__RL10_offdesign2_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_offdesign2_partition1& m= *TRABAJO__RL10_offdesign2_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	dcopy(*n,&m.res[8],residues);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void TRABAJO__RL10_offdesign2_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_offdesign2_partition1::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}

int TRABAJO__RL10_offdesign2_partition1::sparseGetEquiv( int nvars,int v[] )
{
	return -1;
}

/* Main residues function for this model */
void TRABAJO__RL10_offdesign2_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  PRIVATE_EQT %%% (OUT VAR)CC.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[59]);
//[E-2]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_2.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[232]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)CC.fluid_O 
LPRES__fluid_func(&unkR[59], &unkR[118]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_3.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[232]), &unkR[27]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CC.fluid_F 
LPRES__fluid_func(&unkR[27], &unkR[89]);
//[E-6]  PRIVATE_EQT
unkR[294] = unkR[293] - unkR[289] ;
//[E-7]  PRIVATE_EQT
unkR[215] = _div( 1.3 * _pow( (unkR[223] * unkR[224]) , 0.625,"(CJ.a * CJ.b)**(0.625)" ) , _pow( (unkR[223] + unkR[224]) , 0.25,"(CJ.a + CJ.b)**(0.25)" ),"(CJ.a + CJ.b) ** 0.25") ;
//[E-8]  PRIVATE_EQT
unkR[216] = _div( 2. * unkR[223] * unkR[224] , (unkR[223] + unkR[224]),"CJ.a + CJ.b") ;
//[E-9]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[11] = unkR[10] ;
else unkR[11] = 0. ;
//[E-10]  PRIVATE_EQT
unkR[287] = unkR[286] - unkR[282] ;
//[E-11]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[308] = _pow( ((LPRES__gamma(&unkR[27]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[27]) , (LPRES__gamma(&unkR[27]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_3.f_in.fluid) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[308] = 0. ;
}
//[E-12]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[318] = _pow( ((LPRES__gamma(&unkR[59]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[59]) , (LPRES__gamma(&unkR[59]) - 1.),"LPRES.gamma(CC.f_O.fluid) - 1")),"((LPRES.gamma(CC.f_O.fluid) + 1) / 2)**(LPRES.gamma(CC.f_O.fluid) / (LPRES.gamma(CC.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[318] = 0. ;
}
//[E-13]  PRIVATE_EQT
unkR[3] = unkR[4] * unkR[1] ;
//[E-14]  PRIVATE_EQT
unkR[219] = _div( LPRES__visc(&unkR[232]) * LPRES__cp(&unkR[232]) , LPRES__cond(&unkR[232]),"LPRES.cond(HeadLoss_2.f_in.fluid)") ;
//[E-15]  PRIVATE_EQT
unkR[214] = unkI[2] * 2. * (unkR[223] + unkR[224]) * unkR[217] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,7,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-97]  PRIVATE_EQT
unkR[343] = _div( (unkR[274] - unkR[287]) , (9.80665 * LPRES__rho(&unkR[59])),"9.80665 * LPRES.rho(CC.f_O.fluid)") ;
//[E-98]  PRIVATE_EQT
unkR[331] = _div( (unkR[261] - unkR[294]) , (9.80665 * LPRES__rho(&unkR[232])),"9.80665 * LPRES.rho(HeadLoss_2.f_in.fluid)") ;
//[E-99]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[4] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-101]  PRIVATE_EQT
unkR[275] = cabs(dyn[2]) ;
//[E-102]  PRIVATE_EQT
unkR[272] = cabs(unkR[26]) ;
//[E-103]  PRIVATE_EQT
unkR[269] = unkR[272] + unkR[275] ;
//[E-104]  PRIVATE_EQT
unkR[209] = unkR[21] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-106]  PRIVATE_EQT
unkR[372] = _div( dyn[5] , (1. + (LPRES__gamma(&unkR[177]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-107]  PRIVATE_EQT
unkR[375] = dyn[8] * _sqrt(LPRES__gamma(&unkR[177]) * LPRES__R(&unkR[177]) * unkR[372],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-108]  PRIVATE_EQT
unkR[374] = _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[177]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[177]) - 1.) , LPRES__gamma(&unkR[177]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-109]  PRIVATE_EQT
unkR[373] = LPRES__ISA_Pressure(unkR[329]) ;
//[E-110]  PRIVATE_EQT
unkR[268] = unkR[176] * unkR[375] + unkR[2] * (unkR[374] - unkR[373]) ;
//[E-111]  PRIVATE_EQT
unkR[266] = _div( unkR[268] , unkR[269],"ControlPanel.W_tot") ;
//[E-112]  PRIVATE_EQT
unkR[265] = _div( unkR[266] , unkR[21],"CC.c_star") ;
//[E-113]  PRIVATE_EQT
unkR[267] = unkR[266]/9.80665 ;
//[E-114]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[304] = _div( _sqrt(unkR[299] * LPRES__R(&unkR[27]),"HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)") * unkR[26] , (LPRES__FGAMMA(&unkR[27]) * unkR[301]),"LPRES.FGAMMA(HeadLoss_3.f_in.fluid) * Inj_LH2.f_in.pt") ;
}
else 
{
unkR[304] = 0. ;
}
//[E-115]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[312] = unkR[306] * _sqrt(LPRES__gamma(&unkR[27]) * LPRES__R(&unkR[27]) * unkR[25],"LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * CC.f_F.T") ;
}
else 
{
unkR[312] = _div( unkR[26] , (LPRES__rho(&unkR[27]) * unkR[303] * unkR[305]),"LPRES.rho(HeadLoss_3.f_in.fluid) * Inj_LH2.A * Inj_LH2.C_D") ;
}
//[E-116]  PRIVATE_EQT
if( LPRES__State(&unkR[27]) == 2 ) 
{
unkR[309] = 0. ;
}
else 
{
unkR[309] = _div( LPRES__rho(&unkR[27]) * unkR[312] * unkR[305] * _sqrt(4. * unkR[303]/3.14159265358979,"4 * Inj_LH2.A / 3.14159265358979") , LPRES__visc(&unkR[27]),"LPRES.visc(HeadLoss_3.f_in.fluid)") ;
}
//[E-117]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[314] = _div( _sqrt(unkR[273] * LPRES__R(&unkR[59]),"Inj_LOX.f_in.Tt * LPRES.R(CC.f_O.fluid)") * dyn[2] , (LPRES__FGAMMA(&unkR[59]) * unkR[321]),"LPRES.FGAMMA(CC.f_O.fluid) * Inj_LOX.f_in.pt") ;
}
else 
{
unkR[314] = 0. ;
}
//[E-118]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[323] = unkR[316] * _sqrt(LPRES__gamma(&unkR[59]) * LPRES__R(&unkR[59]) * unkR[58],"LPRES.gamma(CC.f_O.fluid) * LPRES.R(CC.f_O.fluid) * CC.f_O.T") ;
}
else 
{
unkR[323] = _div( dyn[2] , (LPRES__rho(&unkR[59]) * unkR[313] * unkR[315]),"LPRES.rho(CC.f_O.fluid) * Inj_LOX.A * Inj_LOX.C_D") ;
}
//[E-119]  PRIVATE_EQT
if( LPRES__State(&unkR[59]) == 2 ) 
{
unkR[319] = 0. ;
}
else 
{
unkR[319] = _div( LPRES__rho(&unkR[59]) * unkR[323] * unkR[315] * _sqrt(4. * unkR[313]/3.14159265358979,"4 * Inj_LOX.A / 3.14159265358979") , LPRES__visc(&unkR[59]),"LPRES.visc(CC.f_O.fluid)") ;
}
//[E-120]  PRIVATE_EQT
unkR[270] = unkR[268] ;
//[E-121]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[271] = unkR[272] + unkR[275] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void TRABAJO__RL10_offdesign2_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[27])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_3.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(1 == LPRES__State(&unkR[59])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_LOX.","Liquid == LPRES.State(CC.f_O.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[232])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_LH2.","Liquid == LPRES.State(HeadLoss_2.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[232])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",59,"CJ.","Liquid == LPRES.State(HeadLoss_2.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[177])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[374] , unkR[373],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",895,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void TRABAJO__RL10_offdesign2_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114];
    ev[1]= unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114];
    ev[2]= unkR[279];
    ev[3]= unkI[0] - 1;
    ev[4]= LPRES__State(&unkR[27]) - 2;
    ev[5]= unkR[307] - unkR[308];
    ev[6]= LPRES__State(&unkR[27]) - 2;
    ev[7]= unkR[307] - unkR[308];
    ev[8]= LPRES__State(&unkR[59]) - 2;
    ev[9]= unkR[317] - unkR[318];
    ev[10]= LPRES__State(&unkR[59]) - 2;
    ev[11]= unkR[317] - unkR[318];
}

/* Evaluation of when conditions*/
void TRABAJO__RL10_offdesign2_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ;
     w[1] = cont[1] ;
}

/* Generation WHEN conditions*/
void TRABAJO__RL10_offdesign2_partition1::executeWhen(double *_time,  int index )
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
void TRABAJO__RL10_offdesign2_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Gearbox.m_out.Power =  ZONE (Pump_LOX.m.Power > 0) -Pump_LOX.m.Power * Gearbox.eta OTHERS -Pump_LOX.m.Power / Gearbox.eta
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // CC.Q_comb_effective =  ZONE (CC.Combustion) CC.Q_comb OTHERS 0
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Inj_LH2.M_out =  ZONE (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR < Inj_LH2.PR_sl) sqrt(2 * (Inj_LH2.PR ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR >= Inj_LH2.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Inj_LOX.M_out =  ZONE (LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl) sqrt(2 * (Inj_LOX.PR ** ((LPRES.gamma(CC.f_O.fluid) - 1) / LPRES.gamma(CC.f_O.fluid)) - 1) / (LPRES.gamma(CC.f_O.fluid) - 1)) ZONE (LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* TRABAJO__RL10_offdesign2_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
	static const char* zoneTxtTable[] = { "Pump_LOX.m.Power > 0","OTHERS",
	"CC.Combustion","OTHERS",
	"LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR < Inj_LH2.PR_sl","LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR >= Inj_LH2.PR_sl","OTHERS",
	"LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl","LPRES.State(CC.f_O.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"Private-info"},{ WHEN,EQ_OP,0,1,"Private-info"},{ ZONE,GT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"CC.Combustion"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"}
,{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,GT_EQ_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"},{ ZONE,LT_OP,0,0,"Private-info"},{ ZONE,EQ_OP,0,0,"Private-info"}
,{ ZONE,GT_EQ_OP,0,0,"Private-info"}};
	return evs;
};

/* Initialisation of delays */
void TRABAJO__RL10_offdesign2_partition1::initDelays()
{
}


bool TRABAJO__RL10_offdesign2_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_TRABAJO__RL10_offdesign2_partition1 = 84464;
static const unsigned int s_gst_chunkSize_TRABAJO__RL10_offdesign2_partition1 = 2000;
static const char *s_gst_chunkedStr_TRABAJO__RL10_offdesign2_partition1[] = 
{
"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"
};
*size = s_gst_size_TRABAJO__RL10_offdesign2_partition1;
*chunkSize = s_gst_chunkSize_TRABAJO__RL10_offdesign2_partition1;
*chunkedStr = s_gst_chunkedStr_TRABAJO__RL10_offdesign2_partition1;
return true;
}



bool TRABAJO__RL10_offdesign2_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_TRABAJO__RL10_offdesign2_partition1 = 460;
static const unsigned int s_gsi_chunkSize_TRABAJO__RL10_offdesign2_partition1 = 2000;
static const char *s_gsi_chunkedStr_TRABAJO__RL10_offdesign2_partition1[] = 
{
"CQAAAEEAAAAAAAAABwAAAAcAAAAHAAAABwAAAAcAAAAHAAAABwAAAAgAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_TRABAJO__RL10_offdesign2_partition1;
*chunkSize = s_gsi_chunkSize_TRABAJO__RL10_offdesign2_partition1;
*chunkedStr = s_gsi_chunkedStr_TRABAJO__RL10_offdesign2_partition1;
return true;
}



bool TRABAJO__RL10_offdesign2_partition1::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP void* create_TRABAJO__RL10_offdesign2_partition1(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ep = 0;
	try
	{
		INTEG_simula *tmp = new TRABAJO__RL10_offdesign2_partition1(name,dirInstall);
		ep = (void *)tmp->createThinModel(t,(void(*)())create_TRABAJO__RL10_offdesign2_partition1);
	}
	catch(...)
	{
	}
	return ep;
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_TRABAJO__RL10_offdesign2_partition1(INTEG_simula *obj,const char *name=NULL)
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
	sprintf(componentName,"%s","RL10_offdesign2");
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","TRABAJO.+r+l10_offdesign2.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


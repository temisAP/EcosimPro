//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef TRABAJO__RL10_design_partition_CPP
#define TRABAJO__RL10_design_partition_CPP

#include "TRABAJO.+r+l10.design_partition.h"

TRABAJO__RL10_design_partition* TRABAJO__RL10_design_partition::s_current= NULL;

TRABAJO__RL10_design_partition::TRABAJO__RL10_design_partition(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "TRABAJO";
m_infoComponentName = "RL10";
m_infoPartitionName = "design_partition";
m_infoModelName = "TRABAJO__RL10_design_partition";
m_infoModelFileName = "TRABAJO.+r+l10.design_partition";
m_infoModelFileNameExtra = "+r+l10.design_partition";
m_perfFlag = false;
m_infoComponentDate = "05/02/2021 10:37:35.672000";
m_infoPartitionDate = "05/02/2021 10:44:16.091000";
m_programVersion= "EcosimPro V6.0.0";
m_libsVersion= "LPRES V1.3.7 MATH V3.2.7 TRABAJO V0.0 ";

m_solveInternalBox= new int[8]; 
int nbx;
for (nbx=0; nbx < 8 ; nbx++)
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
n_dyn=8;
dyn= new double[8] ;
static double tmp_dynInit[8]={ 1, 1, 1, 100, 100, 1, 1, 1 } ;
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

n_unkR=398;
unkR= new double[398] ;
static double tmp_unkRInit[398]={ 56.88798558, 14, 1, 0, 0.05, 0, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 4000, 
		0, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 2.70069069, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3275010, 1, 16.3526821, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 0, 1, 0, 0, 5000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 1.475994, 0, 0, 0, 0, 500, 0.00100103471, 0.00813274823, 100000, 0, 1, 1, 1, 
		0, 16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 5e-05, 0.000583419169, 0, 0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 
		0.1, 1, 1, 1, 1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 
		320606.2, 1, 1200000, 124105.6, 1500, 0.1, 1, 1, 1, 1200000, 0.05, 0, 0, 0.5, 0, 10, 
		0, 0, 0, 0, 0.05, 0, 0, 0.5, 0, 10, 0, 0, 0, 0, 1, 1, 
		0, 0.01, 0, 0, 0, 500, 7358000, 0.573907002, 0.0656, 0, 0.2533, 0.05, 0, 0, 0.01, 0, 
		0, 500, 4282000, 0.6508, 0.03027, 0, 0.05393, 0.05, 0, 0, 100000, 0, 1500, 0.1, 1, 1200000, 
		1, 1, 1, 1, 0, 0, 0, 0, 0.005, 0, 1, 0, 0, 10000, 0, 0, 
		5, 0, 45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 0.01, 0, 38172.635, 0 } ;
unkRInit= new double[398];
dcopy(398,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=23;
static int tmp_cteIInit[23]={ 1, 1, 1, 1, 1, 1, 8, 1, 1, 6, 6, 6, 6, 1, 1, 1, 
		1, 1, 2, 2, 1, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 21;
n_neld= 0;
m_numBoxes= 7;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void TRABAJO__RL10_design_partition::initInternalModels()
{
}

void TRABAJO__RL10_design_partition::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double TRABAJO__RL10_design_partition::MATH__min(const double & x,const double & y)
{
	if( x < y ) {
	return x ;
	}
	return y ;
}


double TRABAJO__RL10_design_partition::LPRES__cp(double fluid[])
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


void TRABAJO__RL10_design_partition::LPRES__fluid_func(double f[],double fluid[])
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


double TRABAJO__RL10_design_partition::MATH__max(const double & x,const double & y)
{
	if( x > y ) {
	return x ;
	}
	return y ;
}


void TRABAJO__RL10_design_partition::LPRES__fluidP(const int & Combustion,double fluid_O[],double fluid_F[],const double & phi,const double & W_O,const double & W_F,const double & W_F_st,const double & M_P,const double & cp_P,double fluid_P[])
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


void TRABAJO__RL10_design_partition::LPRES__fluidG(double fluid_P[],const double & W_O,const double & W_IO,const double & W_F,const double & W_IF,const double & W,double fluid[])
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


int TRABAJO__RL10_design_partition::LPRES__Know_fluid(double fluid[])
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


int TRABAJO__RL10_design_partition::LPRES__State(double fluid[])
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


double TRABAJO__RL10_design_partition::LPRES__M(double fluid[])
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


double TRABAJO__RL10_design_partition::LPRES__R(double fluid[])
{
	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",262,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double TRABAJO__RL10_design_partition::LPRES__cv(double fluid[])
{
	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double TRABAJO__RL10_design_partition::LPRES__gamma(double fluid[])
{
	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double TRABAJO__RL10_design_partition::LPRES__FGAMMA(double fluid[])
{
	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int TRABAJO__RL10_design_partition::LPRES__Vaporisation(double fluid[])
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


double TRABAJO__RL10_design_partition::LPRES__cond(double fluid[])
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


double TRABAJO__RL10_design_partition::LPRES__rho(double fluid[])
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


double TRABAJO__RL10_design_partition::LPRES__visc(double fluid[])
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


double TRABAJO__RL10_design_partition::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double TRABAJO__RL10_design_partition::LPRES__Geopotential_Altitude(const double & z)
{
	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double TRABAJO__RL10_design_partition::LPRES__ISA_Pressure(const double & z)
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

void TRABAJO__RL10_design_partition::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void TRABAJO__RL10_design_partition::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",161,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[181]) ;
	unkI[0] = 1 ;
	unkR[215] = 1. ;
	if( 0 ) {
	unkR[59] = unkR[214] ;
	}
	unkR[179] = unkR[15] ;
	unkR[17] = unkR[18] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[243]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[62]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[243]), &unkR[29]) ;
	unkR[231] = unkR[232] ;
  // init(Pump_F.Pump,0)
	dyn[5] = unkR[341] ;
  // init(Pump_O.Pump,0)
	dyn[6] = unkR[353] ;
  // init(Turbine.Turbine,0)
	unkR[379] = unkR[378] ;
	dyn[7] = unkR[381] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void TRABAJO__RL10_design_partition::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-31]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void TRABAJO__RL10_design_partition::fcn1(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_design_partition& m= *TRABAJO__RL10_design_partition::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	dcopy(*n,&m.res[0],residues);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void TRABAJO__RL10_design_partition::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_design_partition::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void TRABAJO__RL10_design_partition::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-37]  PRIVATE_EQT
unkR[310] = unkR[28] - dyn[2] ;
//[E-38]  PRIVATE_EQT
unkR[238] = unkR[310] + dyn[2] ;
//[E-39]  PRIVATE_EQT
unkR[275] = _div( _div( unkR[238] , (unkR[233] * unkR[234] * LPRES__rho(&unkR[243])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-40]  PRIVATE_EQT
unkR[230] = _div( LPRES__rho(&unkR[243]) * unkR[275] * unkR[226] , LPRES__visc(&unkR[243]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-41]  PRIVATE_EQT
unkR[228] = 0.027 * _pow( unkR[230] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[229] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-42]  PRIVATE_EQT
unkR[240] = _div( unkR[228] * LPRES__cond(&unkR[243]) , unkR[226],"CoolingJacket.D_hy") ;
//[E-43]  PRIVATE_EQT
unkR[236] = LPRES__hdc_fric(unkR[225], unkR[273], unkR[230]) ;
//[E-44]  PRIVATE_EQT
unkR[239] = unkR[272] - _div( unkR[236] * unkR[227] , unkR[225],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( unkR[275] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-45]  PRIVATE_EQT
unkR[369] = unkR[239] * unkR[368] ;
//[E-46]  PRIVATE_EQT
unkR[311] = _div( unkR[369] , unkR[391],"Turbine.pi") ;
//[E-47]  PRIVATE_EQT
unkR[312] = unkR[311] - unkR[307] ;
//[E-48]  PRIVATE_EQT
unkR[290] = unkR[312] * unkR[334] ;
//[E-49]  PRIVATE_EQT
unkR[291] = unkR[290] - unkR[286] ;
//[E-50]  PRIVATE_EQT
unkR[319] = _div( unkR[291] , unkR[59],"CombCha.p_c") ;
//[E-51]  PRIVATE_EQT
 if(m_branchZone[2]==0)
	unkR[318] = _sqrt(_div( 2. * (_pow( unkR[319] , (_div( (LPRES__gamma(&unkR[29]) - 1.) , LPRES__gamma(&unkR[29]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[29]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[318] = 1. ;
else unkR[318] = 0. ;
//[E-52]  PRIVATE_EQT
unkR[385] = 1. - unkR[388] * (1. - _pow( (_div( unkR[311] , unkR[369],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[29]) - 1.) , LPRES__gamma(&unkR[29]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-53]  PRIVATE_EQT
unkR[237] = _div( dyn[1] , unkR[385],"Turbine.alpha") ;
//[E-54]  PRIVATE_EQT
unkR[210] = unkR[238] * LPRES__cp(&unkR[29]) * (unkR[237] - unkR[242]) ;
//[E-55]  PRIVATE_EQT
unkR[231] = _div( _div( unkR[210] , unkR[224],"CoolingJacket.A_wet_cooling") , unkR[240],"CoolingJacket.h_l") + unkR[242] ;
//[E-56]  PRIVATE_EQT
unkR[211] = _div( _div( unkR[210] , unkR[6],"CombCha.A_wet") , (_div( unkR[241] , unkR[274],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[231] ;
//[E-57]  PRIVATE_EQT
unkR[289] = _div( (-(_div( unkR[310] , unkR[28],"Injector_F.W") * LPRES__cp(&unkR[29]) * -dyn[1]) - _div( dyn[2] , unkR[28],"Injector_F.W") * LPRES__cp(&unkR[29]) * -unkR[237]) , (_div( unkR[310] , unkR[28],"Injector_F.W") * LPRES__cp(&unkR[29]) + _div( dyn[2] , unkR[28],"Injector_F.W") * LPRES__cp(&unkR[29])),"HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + Junction.f_in2.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-58]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[27] = _div( unkR[289] , (1. + (LPRES__gamma(&unkR[29]) - 1.)/2. * _pow( unkR[318] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[27] = unkR[289] ;
}
//[E-59]  PRIVATE_EQT
unkR[16] = _div( (LPRES__cp(&unkR[121]) * unkR[60] + _div( unkR[215] , unkR[9],"CombCha.OF_st") * LPRES__cp(&unkR[92]) * unkR[27]) , ((1. + _div( unkR[215] , unkR[9],"CombCha.OF_st")) * unkR[25]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-60]  PRIVATE_EQT
unkR[14] = _div( (_div( unkR[26] * unkR[12] , (_div( (1. + unkR[8]) , MATH__min(unkR[8], unkR[9]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[25] * (unkR[16] - 298.15)) , LPRES__cp(&unkR[150]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-61]  PRIVATE_EQT
unkR[179] = _div( (-(_div( (unkR[22] + unkR[17]) , unkR[180],"ThrustMonitor.g.W") * LPRES__cp(&unkR[150]) * -unkR[14] + _div( unkR[21] , unkR[180],"ThrustMonitor.g.W") * unkR[90] * -unkR[60]) - _div( unkR[20] , unkR[180],"ThrustMonitor.g.W") * unkR[57] * -unkR[27]) , (_div( (unkR[22] + unkR[17]) , unkR[180],"ThrustMonitor.g.W") * LPRES__cp(&unkR[150]) + _div( unkR[21] , unkR[180],"ThrustMonitor.g.W") * unkR[90] + _div( unkR[20] , unkR[180],"ThrustMonitor.g.W") * unkR[57]),"(CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp]") ;
//[E-62]  PRIVATE_EQT
unkR[5] = _div( _div( unkR[180] * _sqrt(LPRES__R(&unkR[181]) * unkR[179],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[59],"CombCha.p_c") ;
//[E-63]  PRIVATE_EQT
unkR[3] = unkR[5] * unkR[1] ;
//[E-64]  PRIVATE_EQT
unkR[23] = _div( _sqrt(LPRES__R(&unkR[181]) * unkR[179],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-65]  PRIVATE_EQT
unkR[13] = unkR[179] * _div( (1. + _pow( unkR[10] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-66]  PRIVATE_EQT
unkR[216] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[13] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-67]  PRIVATE_EQT
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[5]/3.14159265358979,"4 * CombCha.A_th_d / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th_d / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th_d / 3.14159265358979) ** 0.2") * _div( _pow( unkR[216] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[10] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[59] , unkR[23],"CombCha.c_star")) , 0.8,"(CombCha.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[5] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th_d / CombCha.A_r)**(0.9)" ) ;
//[E-68]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[1] = evalNormResidueInternal(1,unkR[210],unkR[212] * (unkR[13] - unkR[211]) * unkR[6]);
//[E-69]  PRIVATE_EQT
unkR[380] = unkR[310] * LPRES__cp(&unkR[29]) * (unkR[237] - dyn[1]) ;
//[E-70]  Pump_F.m.Power = Gearbox.m_out.Power - Turbine.m.Power
unkR[340] = unkR[285] - unkR[380] ;
//[E-71]  Pump_F.tau = -Pump_F.m.Power / HeadLoss_TF.f_in.W
res[2] = evalNormResidueInternal(2,unkR[349],_div( -unkR[340] , unkR[238],"HeadLoss_TF.f_in.W"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void TRABAJO__RL10_design_partition::fcn2(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_design_partition& m= *TRABAJO__RL10_design_partition::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	dcopy(*n,&m.res[1],residues);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void TRABAJO__RL10_design_partition::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_design_partition::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void TRABAJO__RL10_design_partition::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-73]  ThrustMonitor.g.A_out / CombCha.A_th_d = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,_div( unkR[2] , unkR[5],"CombCha.A_th_d"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[3] , unkR[59],"CombCha.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[3] , unkR[59],"CombCha.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void TRABAJO__RL10_design_partition::fcn3(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_design_partition& m= *TRABAJO__RL10_design_partition::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[3],x);
	dcopy(*n,&m.res[3],residues);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void TRABAJO__RL10_design_partition::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_design_partition::fcn3, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void TRABAJO__RL10_design_partition::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-78]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[4] = evalNormResidueInternal(4,_div( _div( unkR[180] * _sqrt(LPRES__R(&unkR[181]) * unkR[179],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[59],"CombCha.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[4] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[4] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void TRABAJO__RL10_design_partition::fcn4(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_design_partition& m= *TRABAJO__RL10_design_partition::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[4],x);
	dcopy(*n,&m.res[4],residues);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void TRABAJO__RL10_design_partition::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_design_partition::fcn4, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void TRABAJO__RL10_design_partition::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-106]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
res[5] = evalNormResidueInternal(5,unkR[345],_div( unkR[349] , _pow( dyn[5] , 2,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void TRABAJO__RL10_design_partition::fcn5(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_design_partition& m= *TRABAJO__RL10_design_partition::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[5],x);
	dcopy(*n,&m.res[5],residues);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void TRABAJO__RL10_design_partition::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_design_partition::fcn5, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void TRABAJO__RL10_design_partition::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-111]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
res[6] = evalNormResidueInternal(6,unkR[357],_div( unkR[361] , _pow( dyn[6] , 2,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void TRABAJO__RL10_design_partition::fcn6(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_design_partition& m= *TRABAJO__RL10_design_partition::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[6],x);
	dcopy(*n,&m.res[6],residues);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void TRABAJO__RL10_design_partition::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_design_partition::fcn6, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void TRABAJO__RL10_design_partition::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-122]  PRIVATE_EQT
unkR[392] = _div( unkR[397] , _pow( dyn[7] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-123]  PRIVATE_EQT
unkR[389] = _div( (unkR[392] + 1.) , (tan(unkR[386] * 3.14159265358979/180.) - tan(unkR[387] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-124]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[7] = evalNormResidueInternal(7,unkR[389],_div( unkR[383] , dyn[7],"Turbine.U"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void TRABAJO__RL10_design_partition::fcn7(int *n, double x[], double residues[], int *iflag)
{
	TRABAJO__RL10_design_partition& m= *TRABAJO__RL10_design_partition::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[7],x);
	dcopy(*n,&m.res[7],residues);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void TRABAJO__RL10_design_partition::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(TRABAJO__RL10_design_partition::fcn7, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}

int TRABAJO__RL10_design_partition::sparseGetEquiv( int nvars,int v[] )
{
	return -1;
}

/* Main residues function for this model */
void TRABAJO__RL10_design_partition::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  PRIVATE_EQT
unkR[180] = unkR[61] + unkR[28] ;
//[E-2]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[62]);
//[E-3]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_O 
LPRES__fluid_func(&unkR[62], &unkR[121]);
//[E-4]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[243]), &unkR[29]);
//[E-5]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_F 
LPRES__fluid_func(&unkR[29], &unkR[92]);
//[E-6]  PRIVATE_EQT
unkR[22] = unkR[61] * (1. - unkR[88]) ;
//[E-7]  PRIVATE_EQT
unkR[17] = unkR[28] * (1. - unkR[55]) ;
//[E-8]  PRIVATE_EQT
unkR[8] = _div( unkR[22] , unkR[17],"CombCha.W_F") ;
//[E-9]  PRIVATE_EQT
unkR[215] = _div( unkR[9] , unkR[8],"CombCha.OF") ;
//[E-10]  PRIVATE_EQT
unkR[19] = _div( unkR[17] , unkR[215],"CombCha.phi") ;
//[E-11]  PRIVATE_EQT %%% (OUT VAR)CombCha.fluid_P 
LPRES__fluidP(unkI[0], &unkR[121], &unkR[92], unkR[215], unkR[22], unkR[17], unkR[19], unkR[7], unkR[24], &unkR[150]);
//[E-12]  PRIVATE_EQT
unkR[21] = unkR[61] - unkR[22] ;
//[E-13]  PRIVATE_EQT
unkR[20] = unkR[28] - unkR[17] ;
//[E-14]  PRIVATE_EQT %%% (OUT VAR)ThrustMonitor.g.fluid 
LPRES__fluidG(&unkR[150], unkR[22], unkR[21], unkR[17], unkR[20], unkR[180], &unkR[181]);
//[E-15]  PRIVATE_EQT
 if(m_branchZone[0]==0)
	unkR[12] = unkR[11] ;
else unkR[12] = 0. ;
//[E-16]  PRIVATE_EQT
unkR[25] = _div( (unkR[22] * LPRES__cp(&unkR[121]) + unkR[17] * LPRES__cp(&unkR[92])) , (unkR[22] + unkR[17]),"CombCha.W_O + CombCha.W_F") ;
//[E-17]  PRIVATE_EQT
unkR[305] = unkR[304] - unkR[300] ;
//[E-18]  PRIVATE_EQT
unkR[278] = unkR[354] + unkR[305] ;
//[E-19]  PRIVATE_EQT
unkR[277] = _div( _div( (unkR[278] - unkR[305]) , LPRES__rho(&unkR[62]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[355],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[62]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[303] ;
//[E-20]  PRIVATE_EQT
unkR[329] = _div( unkR[278] , unkR[59],"CombCha.p_c") ;
//[E-21]  PRIVATE_EQT
 if(m_branchZone[3]==0)
	unkR[328] = _sqrt(_div( 2. * (_pow( unkR[329] , (_div( (LPRES__gamma(&unkR[62]) - 1.) , LPRES__gamma(&unkR[62]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[62]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[328] = 1. ;
else unkR[328] = 0. ;
//[E-22]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[60] = _div( unkR[277] , (1. + (LPRES__gamma(&unkR[62]) - 1.)/2. * _pow( unkR[328] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[60] = unkR[277] ;
}
//[E-23]  PRIVATE_EQT
unkR[298] = unkR[297] - unkR[293] ;
//[E-24]  PRIVATE_EQT
unkR[272] = unkR[342] + unkR[298] ;
//[E-25]  PRIVATE_EQT %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[243]);
//[E-26]  PRIVATE_EQT
unkR[349] = _div( (unkR[272] - unkR[298]) , (unkR[343] * LPRES__rho(&unkR[243])),"Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-27]  PRIVATE_EQT
unkR[361] = _div( (unkR[278] - unkR[305]) , (unkR[355] * LPRES__rho(&unkR[62])),"Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-28]  PRIVATE_EQT
unkR[283] = -(unkR[361] * unkR[61]) ;
//[E-29]  PRIVATE_EQT
 if(m_branchZone[1]==0)
	unkR[285] = -unkR[283] * unkR[281] ;
else unkR[285] = _div( -unkR[283] , unkR[281],"Gearbox.eta") ;
//[E-30]  PRIVATE_EQT
unkR[10] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-32]  PRIVATE_EQT
unkR[226] = _div( 2. * unkR[233] * unkR[234] , (unkR[233] + unkR[234]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-33]  PRIVATE_EQT
unkR[229] = _div( LPRES__visc(&unkR[243]) * LPRES__cp(&unkR[243]) , LPRES__cond(&unkR[243]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-34]  PRIVATE_EQT
unkR[242] = _div( _div( (unkR[272] - unkR[298]) , LPRES__rho(&unkR[243]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[343],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[243]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[296] ;
//[E-35]  PRIVATE_EQT
unkR[224] = unkI[2] * 2. * (unkR[233] + unkR[234]) * unkR[227] ;
//[E-36]  PRIVATE_EQT
unkR[225] = _div( 1.3 * _pow( (unkR[233] * unkR[234]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[233] + unkR[234]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,2,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-72]  PRIVATE_EQT
unkR[2] = unkR[0] * unkR[5] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-74]  PRIVATE_EQT
unkR[276] = cabs(unkR[238]) ;
//[E-75]  PRIVATE_EQT
unkR[279] = cabs(unkR[61]) ;
//[E-76]  PRIVATE_EQT
unkR[221] = unkR[276] + unkR[279] ;
//[E-77]  PRIVATE_EQT
unkR[213] = unkR[23] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-79]  PRIVATE_EQT
unkR[372] = _div( unkR[179] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-80]  PRIVATE_EQT
unkR[375] = dyn[4] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[372],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-81]  PRIVATE_EQT
unkR[374] = _div( unkR[59] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-82]  PRIVATE_EQT
unkR[373] = LPRES__ISA_Pressure(unkR[336]) ;
//[E-83]  PRIVATE_EQT
unkR[220] = unkR[180] * unkR[375] + unkR[2] * (unkR[374] - unkR[373]) ;
//[E-84]  PRIVATE_EQT
unkR[218] = _div( unkR[220] , unkR[221],"ControlPanel.W_tot") ;
//[E-85]  PRIVATE_EQT
unkR[217] = _div( unkR[218] , unkR[23],"CombCha.c_star") ;
//[E-86]  PRIVATE_EQT
unkR[219] = unkR[218]/9.80665 ;
//[E-87]  PRIVATE_EQT
unkR[284] = unkR[396] * 2. * 3.14159265358979/60. ;
//[E-88]  PRIVATE_EQT
unkR[282] = _div( unkR[284] , unkR[280],"Gearbox.GR") ;
//[E-89]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[320] = _pow( ((LPRES__gamma(&unkR[29]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[29]) , (LPRES__gamma(&unkR[29]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[320] = 0. ;
}
//[E-90]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[322] = _div( unkR[291] , unkR[320],"Injector_F.PR_sl") ;
}
else 
{
unkR[322] = 0. ;
}
//[E-91]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[316] = _div( _sqrt(unkR[289] * LPRES__R(&unkR[29]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[28] , (LPRES__FGAMMA(&unkR[29]) * unkR[291]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[316] = 0. ;
}
//[E-92]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[58] = MATH__max(unkR[59], unkR[322]) ;
}
else 
{
unkR[58] = unkR[59] ;
}
//[E-93]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[315] = _div( unkR[316] * _pow( (_div( (2. + (LPRES__gamma(&unkR[29]) - 1.) * _pow( unkR[318] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[29]) + 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[29]) + 1.) , (2. * (LPRES__gamma(&unkR[29]) - 1.)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[318],"Injector_F.M_out") ;
}
else 
{
unkR[315] = _div( _div( unkR[28] , unkR[317],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[29]) * (unkR[291] - unkR[58]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"),"sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))") ;
}
//[E-94]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[323] = unkR[318] * _sqrt(LPRES__gamma(&unkR[29]) * LPRES__R(&unkR[29]) * unkR[27],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[323] = _div( unkR[28] , (LPRES__rho(&unkR[29]) * unkR[315] * unkR[317]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-95]  PRIVATE_EQT
if( LPRES__State(&unkR[29]) == 2 ) 
{
unkR[321] = 0. ;
}
else 
{
unkR[321] = _div( LPRES__rho(&unkR[29]) * unkR[323] * unkR[317] * _sqrt(4. * unkR[315]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[29]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-96]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[330] = _pow( ((LPRES__gamma(&unkR[62]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[62]) , (LPRES__gamma(&unkR[62]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[330] = 0. ;
}
//[E-97]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[332] = _div( unkR[278] , unkR[330],"Injector_O.PR_sl") ;
}
else 
{
unkR[332] = 0. ;
}
//[E-98]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[326] = _div( _sqrt(unkR[277] * LPRES__R(&unkR[62]),"FlowMeter_LOX.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[61] , (LPRES__FGAMMA(&unkR[62]) * unkR[278]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_LOX.f_in.pt") ;
}
else 
{
unkR[326] = 0. ;
}
//[E-99]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[91] = MATH__max(unkR[59], unkR[332]) ;
}
else 
{
unkR[91] = unkR[59] ;
}
//[E-100]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[325] = _div( unkR[326] * _pow( (_div( (2. + (LPRES__gamma(&unkR[62]) - 1.) * _pow( unkR[328] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[62]) + 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[62]) + 1.) , (2. * (LPRES__gamma(&unkR[62]) - 1.)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[328],"Injector_O.M_out") ;
}
else 
{
unkR[325] = _div( _div( unkR[61] , unkR[327],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[62]) * (unkR[278] - unkR[91]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_LOX.f_in.pt - CombCha.f_O.p)"),"sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_LOX.f_in.pt - CombCha.f_O.p))") ;
}
//[E-101]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[333] = unkR[328] * _sqrt(LPRES__gamma(&unkR[62]) * LPRES__R(&unkR[62]) * unkR[60],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[333] = _div( unkR[61] , (LPRES__rho(&unkR[62]) * unkR[325] * unkR[327]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-102]  PRIVATE_EQT
if( LPRES__State(&unkR[62]) == 2 ) 
{
unkR[331] = 0. ;
}
else 
{
unkR[331] = _div( LPRES__rho(&unkR[62]) * unkR[333] * unkR[327] * _sqrt(4. * unkR[325]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[62]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-103]  PRIVATE_EQT
unkR[335] = _div( unkR[290] , unkR[334],"Junction.TPL") ;
//[E-104]  PRIVATE_EQT
unkR[339] = _div( (unkR[272] - unkR[298]) , (9.80665 * LPRES__rho(&unkR[243])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-105]  PRIVATE_EQT
unkR[345] = 1. - _div( (1. - unkR[346]) , unkR[344],"Pump_F.phi_d") * unkR[344] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-107]  PRIVATE_EQT
unkR[348] = _div( dyn[5] , unkR[284],"Turbine.m.N") ;
//[E-108]  PRIVATE_EQT
unkR[338] = _div( _div( _div( unkR[238] , unkR[344],"Pump_F.phi_d") , LPRES__rho(&unkR[243]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") , dyn[5],"Pump_F.U") ;
//[E-109]  PRIVATE_EQT
unkR[352] = _div( (unkR[278] - unkR[305]) , (9.80665 * LPRES__rho(&unkR[62])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-110]  PRIVATE_EQT
unkR[357] = 1. - _div( (1. - unkR[358]) , unkR[356],"Pump_O.phi_d") * unkR[356] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-112]  PRIVATE_EQT
unkR[360] = _div( dyn[6] , unkR[282],"Pump_O.m.N") ;
//[E-113]  PRIVATE_EQT
unkR[351] = _div( _div( _div( unkR[61] , unkR[356],"Pump_O.phi_d") , LPRES__rho(&unkR[62]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") , dyn[6],"Pump_O.U") ;
//[E-114]  PRIVATE_EQT
unkR[366] = unkR[239] * unkR[368] ;
//[E-115]  PRIVATE_EQT
unkR[363] = unkR[366] - unkR[335] ;
//[E-116]  PRIVATE_EQT
unkR[222] = unkR[220] ;
//[E-117]  PRIVATE_EQT
unkR[379] = MATH__min(unkR[378], 1.) ;
//[E-118]  PRIVATE_EQT
unkR[377] = _div( _div( unkR[310] * _sqrt(unkR[237] * LPRES__R(&unkR[29]),"Junction.f_in2.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (_sqrt(LPRES__gamma(&unkR[29]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(unkR[379], 1.) * cos(unkR[386] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[29]) - 1.)/2. * _pow( MATH__min(unkR[379], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[29]) + 1.)/2. , (LPRES__gamma(&unkR[29]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" )),"sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))") , unkR[369],"Turbine.f_in.pt") ;
//[E-119]  PRIVATE_EQT
unkR[397] = _div( unkR[380] , unkR[310],"HeadLoss_Turb.f_in.W") ;
//[E-120]  PRIVATE_EQT
unkR[382] = unkR[379] * _sqrt(_div( LPRES__gamma(&unkR[29]) * LPRES__R(&unkR[29]) * unkR[237] , (1. + (LPRES__gamma(&unkR[29]) - 1.)/2. * _pow( unkR[379] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-121]  PRIVATE_EQT
unkR[383] = unkR[382] * cos(unkR[386] * 3.14159265358979/180.) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-125]  PRIVATE_EQT
unkR[395] = _div( dyn[7] , unkR[284],"Turbine.m.N") ;
//[E-126]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[223] = unkR[276] + unkR[279] ;

//save last residues
memcpy(this->res,res,8*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void TRABAJO__RL10_design_partition::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[243])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",59,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[243])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[62])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[4] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[374] , unkR[373],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[4] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",895,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[29])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void TRABAJO__RL10_design_partition::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117];
    ev[1]= unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117];
    ev[2]= unkI[0] - 1;
    ev[3]= unkR[283];
    ev[4]= LPRES__State(&unkR[29]) - 2;
    ev[5]= unkR[319] - unkR[320];
    ev[6]= LPRES__State(&unkR[29]) - 2;
    ev[7]= unkR[319] - unkR[320];
    ev[8]= LPRES__State(&unkR[62]) - 2;
    ev[9]= unkR[329] - unkR[330];
    ev[10]= LPRES__State(&unkR[62]) - 2;
    ev[11]= unkR[329] - unkR[330];
}

/* Evaluation of when conditions*/
void TRABAJO__RL10_design_partition::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ;
     w[1] = cont[1] ;
}

/* Generation WHEN conditions*/
void TRABAJO__RL10_design_partition::executeWhen(double *_time,  int index )
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
void TRABAJO__RL10_design_partition::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* TRABAJO__RL10_design_partition::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void TRABAJO__RL10_design_partition::initDelays()
{
}


bool TRABAJO__RL10_design_partition::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_TRABAJO__RL10_design_partition = 81488;
static const unsigned int s_gst_chunkSize_TRABAJO__RL10_design_partition = 2000;
static const char *s_gst_chunkedStr_TRABAJO__RL10_design_partition[] = 
{
"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"
};
*size = s_gst_size_TRABAJO__RL10_design_partition;
*chunkSize = s_gst_chunkSize_TRABAJO__RL10_design_partition;
*chunkedStr = s_gst_chunkedStr_TRABAJO__RL10_design_partition;
return true;
}



bool TRABAJO__RL10_design_partition::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_TRABAJO__RL10_design_partition = 216;
static const unsigned int s_gsi_chunkSize_TRABAJO__RL10_design_partition = 2000;
static const char *s_gsi_chunkedStr_TRABAJO__RL10_design_partition[] = 
{
"CAAAABUAAAAAAAAAAQAAAAMAAAADAAAABAAAAAQAAAABAAAAAQAAAAQAAAABAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_TRABAJO__RL10_design_partition;
*chunkSize = s_gsi_chunkSize_TRABAJO__RL10_design_partition;
*chunkedStr = s_gsi_chunkedStr_TRABAJO__RL10_design_partition;
return true;
}



bool TRABAJO__RL10_design_partition::gcs(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP void* create_TRABAJO__RL10_design_partition(const char *name=NULL, const char *dirInstall=NULL, bool d=false, int t=0)
{
	void *ep = 0;
	try
	{
		INTEG_simula *tmp = new TRABAJO__RL10_design_partition(name,dirInstall);
		ep = (void *)tmp->createThinModel(t,(void(*)())create_TRABAJO__RL10_design_partition);
	}
	catch(...)
	{
	}
	return ep;
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_TRABAJO__RL10_design_partition(INTEG_simula *obj,const char *name=NULL)
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
	sprintf(componentName,"%s","RL10");
	sprintf(partitionName,"%s","design_partition");
	sprintf(symbolTableFilename,"%s","TRABAJO.+r+l10.design_partition");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


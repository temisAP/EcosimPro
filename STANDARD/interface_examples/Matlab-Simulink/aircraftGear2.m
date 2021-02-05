% Description:
%     Run a model and show results in a plot
%
% 
% web: www.empre.es
% 2013 - EA Internacional


clc;
clear all;
close all;

global installDir;
setGlobalVariables();

%Load EASIM interface 
if ( 0==EALoadEASIM( installDir ) )
    return;
end

%Load model
expFile = createExamplesPath('aircraft+gear', 'default', 'exp1');

if ( 0==EALoadExperiment(expFile,installDir) )
    disp('unload model');
    EAUnload;
    return;
end

%Set integration parameters
tstop = 10;
cint = 0.05;

EASetCINT(cint);
EASetTSTOP(tstop+cint*2);

EASetValue('x',10)
time = EAGetTIME;

%Integration
disp('Integration');
i = 1;
while (time < tstop)
    EAINTEG_CINT;
    x(i) = EAGetValue('x');
    xder(i) = EAGetValue('x''');
    xderder(i) = EAGetValue('x''''');
    t(i) = EAGetTIME;
    time = EAGetTIME;
    i= i+1;
end

%Plot results
plot (t,x, t,xder, t,xderder);

disp('unload model');
EAUnload;


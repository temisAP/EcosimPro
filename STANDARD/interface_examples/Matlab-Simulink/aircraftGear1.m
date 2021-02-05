% Description:
%     Run a model with an initializated variable and show results
%
% 
% web: www.empre.es
% 2014 - EA Internacional


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

%Get model variable list
names = EAGetVariableList

%Set TRACING to false
EASetting(1, 1); 

%Set RK4 method
EASetIMethod('RK4');

%Initialize integration
EASetTSTOP(10);
EASetCINT(0.05);
EASetValue('x', 10);

%Integration
disp('Integration');
EAINTEG;

%Results
y2 = EAGetValue('y2')
x = EAGetValue('x')
%To set a quotation, write it twice. For instance, x' must be written as x''
xder = EAGetValue('x''')

disp('unload model');
EAUnload;


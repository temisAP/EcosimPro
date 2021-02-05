% Description:
%     Run experiment body of a model
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

%Run experiment body
disp('Run experiment body');
EARunExperiment;

%Results
y2 = EAGetValue('y2')
x = EAGetValue('x')

%To set a quotation, write it twice. For instance, x' must be written as x''
xder = EAGetValue('x''')

disp('unload model');
EAUnload;


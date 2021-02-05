% Description:
%     Run a model and show results in a plot
%
% 
% web: www.empre.es
% 2018 - EA Internacional


clc;
clear all;
close all;

global installDir;
global compiler;
setGlobalDeckVariables();

%Load model
previousPath = pwd;
deckPath = createDeckExamplesPath('bouncing+ball', 'default', 'exp1', 'deck1');
cd( deckPath )

%Load EASIM interface 
if ( 0==EALoadEASIMDeck(installDir, compiler ) )
    cd( previousPath );
    return;
end

if ( 0==EALoadDeck( compiler) )
    disp('unload model');
    EAUnload;
    cd( previousPath );
    return;
end

%Set integration parameters
tstop = 12;
cint = 0.01;

EASetCINT(cint);
EASetTSTOP(tstop+cint);

EASetValueDbl('h',10)
time = EAGetValueDbl( 'TIME' );

%Integration
disp('Integration');
i = 1;
while (time < tstop)
    EASetTSTOP(time + cint);
    EAINTEG();
    h(i) = EAGetValueDbl('h');
    t(i) = EAGetValueDbl( 'TIME' );
    time = EAGetValueDbl( 'TIME' );
    i= i+1;
end

%Plot results
plot (t,h);

disp('unload model');
EAUnloadDeck;
cd( previousPath );

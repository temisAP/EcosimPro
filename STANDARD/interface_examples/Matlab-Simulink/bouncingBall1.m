% Description:
%     Run a model with an initializated variable and show results
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

%Initialize integration
EASetTSTOP(15);
EASetCINT(0.05);
EASetValueDbl('h', 5);

%Integration
disp('Integration');
EAINTEG;

%Results
h = EAGetValueDbl('h')
time = EAGetValueDbl( 'TIME' )

disp('unload model');
EAUnloadDeck;
cd( previousPath );

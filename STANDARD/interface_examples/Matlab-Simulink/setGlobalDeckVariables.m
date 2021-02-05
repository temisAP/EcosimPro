function setDeckGlobalVariables()
%createExamplesPath  Set variables needed to run model 
%
%
% 
% web: www.empre.es
% 2016 - EA Internacional

global installDir;
global defaultLibPath;
global compiler;

% Select compiler
compiler = 'win64_vc2017';
%compiler = 'win64_vc2015';
%compiler = 'win64_vc2013';
%compiler = 'win64_vc2010';
%compiler = 'win32_vc2010';
%compiler = 'win64_gcc64v4_9';


%Select directories
installDir = 'D:\install_dir\';  % Set here program installation directory
defaultLibPath = 'D:\install_lib_dir\STANDARD\STANDARD\libs\DEFAULT_LIB\'; % Set here DEFAULT_LIB library directory

addpath( strcat( strcat(installDir, '\platform\', compiler ) ) );
addpath( strcat(installDir, '\interfaces\Matlab-Simulink\toolboxes\easimDeck\') );

% end setGlobalVariables
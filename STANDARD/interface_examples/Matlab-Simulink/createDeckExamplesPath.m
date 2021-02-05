function fullPath = createDeckExamplesPath(component, partition, experiment, deck)
%createDeckExamplesPath  Add user EASIM install directory to experiment
%path
%
%return: full path of experiment file
%
% 
% web: www.empre.es
% 2018 - EA Internacional

global compiler;
global defaultLibPath;
setGlobalDeckVariables();

partialPath = defaultLibPath;
partialPath = strcat(partialPath, '\EXPERIMENTS\');
partialPath = strcat(partialPath, component);
partialPath = strcat(partialPath, '.');
partialPath = strcat(partialPath, partition);
partialPath = strcat(partialPath, '\');
partialPath = strcat(partialPath, experiment);
partialPath = strcat(partialPath, '\');
partialPath = strcat(partialPath, deck);
partialPath = strcat(partialPath, '\_output\exec\');
partialPath = strcat(partialPath, compiler);
partialPath = strcat(partialPath, '\');

fullPath = partialPath;

% end createDeckExamplesPath

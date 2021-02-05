function fullPath = createExamplesPath(component, partition, experiment)
%createExamplesPath  Add user EASIM install directory to experiment
%path
%
%return: full path of experiment file
%
% 
% web: www.empre.es
% 2013 - EA Internacional

global compiler;
global defaultLibPath;
setGlobalVariables();

partialPath = defaultLibPath;
partialPath = strcat(partialPath, '\EXPERIMENTS\');
partialPath = strcat(partialPath, component);
partialPath = strcat(partialPath, '.');
partialPath = strcat(partialPath, partition);
partialPath = strcat(partialPath, '\');
partialPath = strcat(partialPath, experiment);
partialPath = strcat(partialPath, '\');
partialPath = strcat(partialPath, component);
partialPath = strcat(partialPath, '.');
partialPath = strcat(partialPath, partition);
partialPath = strcat(partialPath, '.');
partialPath = strcat(partialPath, experiment);
partialPath = strcat(partialPath, '.');
partialPath = strcat(partialPath, compiler);
partialPath = strcat(partialPath, '.dll');

fullPath = partialPath;

% end createExamplesPath
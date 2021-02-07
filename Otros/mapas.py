import numpy as np
import math
import matplotlib as mpl
from matplotlib import ticker, cm
import matplotlib.pyplot as plt
from scipy.interpolate import interp1d
from scipy.interpolate import griddata

## Componentes

data = './pt_evo.csv'
print('Proceeding with ' + data)
with open(data, 'r') as data:
    # Graph data
    datz = []
    k = 0
    for line in data:
        k = k+1
        if k == 10:
            datz = line.split()

datz.pop(0)
datz = np.array(datz,dtype = float)
print(datz)

minz = min(datz)
maxz = max(datz)

datz = (datz - minz) / (maxz-minz)

print(datz)

jet = plt.get_cmap('jet')

colors = jet(datz)
print(colors)
htmlcolors = []
for color in colors:
    r = int(color[0]*255)
    g = int(color[1]*255)
    b = int(color[2]*255)
    htmlcolors.append('#%02x%02x%02x' % (r, g, b))
print(htmlcolors)

x = np.linspace(0,1,len(colors))
for i in range(len(x)):
    plt.scatter(x[i],x[i],color = colors[i])
plt.show()

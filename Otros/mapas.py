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
    datx = []
    daty = []
    datz = []
    k = 0
    for line in data:
        k = k+1
        if k == 10:
            datz = line.split()
        if k == 11:
            datx = line.split()
        if k == 12:
            daty = line.split()

datx.pop(0)
daty.pop(0)
datz.pop(0)

X = np.array(datx,dtype=float)
Y = np.array(daty,dtype=float)
Z = np.array(datz,dtype=float)
xi,yi = np.meshgrid(X,Y)
zi = griddata((X,Y), Z, (xi, yi),method='cubic')


fig = plt.figure()
ax = fig.add_subplot(111)
plt.gca().invert_yaxis()
CS3 = plt.contourf(xi,yi,zi, cmap='jet')
plt.colorbar()
plt.grid()
plt.savefig('presiones'+'.png')
plt.show()
plt.close()

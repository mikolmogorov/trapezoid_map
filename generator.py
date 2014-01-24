#!/usr/bin/env python

import scipy as sp
import numpy as np
import matplotlib.pyplot as plt
from scipy.spatial import Delaunay

x_range = [-100, 100]
y_range = [-100, 100]

n_points = 100
points = []

for i in xrange(n_points):
    x = np.random.randint(x_range[0], x_range[1])
    y = np.random.randint(y_range[0], y_range[1])
    points.append([x, y])

points = np.array(points)
tri = Delaunay(points)

#plt.triplot(points[:,0], points[:,1], tri.simplices.copy())
#plt.plot(points[:,0], points[:,1], 'o')
#plt.show()

for t in tri.simplices:
    print points[t[0]][0], points[t[0]][1], points[t[1]][0], points[t[1]][1]
    print points[t[1]][0], points[t[1]][1], points[t[2]][0], points[t[2]][1]
    print points[t[2]][0], points[t[2]][1], points[t[0]][0], points[t[0]][1]

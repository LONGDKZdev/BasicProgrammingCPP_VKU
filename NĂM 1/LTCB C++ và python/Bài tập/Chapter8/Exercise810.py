#thêm thư viện trong cmd

#pip install numpy
#pip install matplotlib

import numpy as np
import matplotlib
from matplotlib import pyplot as plt
x = np.arange(-4,5)
y =5 * x**4 + x**2 + 5
plt.title("f(x)=5x4 + x2 + 5")
plt.xlabel("x axis")
plt.ylabel("f(x) axis")
plt.plot(x,y)
plt.show()
import numpy as np
import matplotlib.pyplot as plt

"""
    1. Membuat data
    2. Membuat Plot
    3. Menampilkan plot
"""

# 1. Membuat data
x = np.array([1,16,81,256,625])
y = np.array([1,75,164,168,725])
y2 = np.array([1,16,81,256,625])

# 2. Membuat plot
plt.plot(x,y)
plt.plot(x,y2)

# 3. Menampilkan plot
plt.show()
import numpy as np
import matplotlib.pyplot as plt

# menampilkan nilai dari suhu dan juga kelembapan pada sensor DHT11

"""
    1. Membuat data
    2. Membuat Plot
    3. Menampilkan plot
"""

# 1. Membuat data
suhu = np.array([31,31,30,31,29,28,29,28])
jam = np.array([13,14,15,16,17,18,19,20])
kelembapan = np.array([62,63,65,63,69,76,80,86])

# 2. Membuat plot
plt.plot(jam,suhu,'r')
plt.plot(jam,kelembapan,'y')
plt.title("Diagram Suhu & Kelembapan")

# 3. Menampilkan plot
plt.show()

import matplotlib.pyplot as plt
import numpy as np

# 1. Membuat data (sin(2wt + theta))
def sinusGenerator(amplitudo,frekuensi,tAkhir,theta):
    t = np.arange(0,tAkhir,0.1)
    y = amplitudo * np.sin(2*frekuensi*t + np.deg2rad(theta))
    return t,y 

t1,y1 = sinusGenerator(1,1,4,0)
t2,y2 = sinusGenerator(1,1,4,90)
t3,y3 = sinusGenerator(1,1,4,180)

# 2. Membuat plot
dataPlot1 = plt.plot(t1,y1) # dibuat jadi variabel
dataPlot2 = plt.plot(t2,y2)
dataPlot3 = plt.plot(t3,y3)

# 3. Setting Properties
plt.setp(dataPlot1,color='r',linestyle='-')     # warna garis merah - linestyle normal
plt.setp(dataPlot2,color='b',linestyle='--')    # warna garis biru - linestyle garis putus - putus
plt.setp(dataPlot3,color='g',linestyle='-.')    # warna garis hijau - linestyle garis titik

# 4. menampilkan plot
plt.grid() # menampilkan grid
plt.show()

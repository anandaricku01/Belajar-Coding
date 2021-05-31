import numpy as np
import matplotlib.pyplot as plt


# 1. Membuat data (sin(2wt + theta))
def sinusGenerator(amplitudo,frekuensi,tAkhir,theta):
    t = np.arange(0,tAkhir,0.1)
    y = amplitudo * np.sin(2*frekuensi*t + np.deg2rad(theta))
    return t,y 

# 2. Membuat plot
t1,y1 = sinusGenerator(1,1,4,0)
plt.plot(t1,y1)

t2,y2 = sinusGenerator(1,1,4,270)
plt.plot(t2,y2,'r') # (x,y,warna garis)

t3,y3 = sinusGenerator(-1,1,4,0)
plt.plot(t3,y3,'y--') # (x,y,'warna&jenisGaris)

t4,y4 = sinusGenerator(-1,1,4,270)
plt.plot(t4,y4,'-o') # (x,y,'warna&jenisGaris)

# 3. Menampilkan plot
plt.show() # menampilkan plot

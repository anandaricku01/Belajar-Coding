# PROGRAM LUAS - VOLUME SEGITIGA DAN BELAH KETUPAT
import math
d1 = int(input("Masukan nilai Diagonal 1 : "))
d2 = int(input("Masukan nilai Diagonal 2 : "))

print("\n\n")

def lbelahketupat(d1,d2):
    luasbelahKetupat = 0.5 * d1 * d2
    print("Luas belah ketupat adalah : ", luasbelahKetupat)
    return luasbelahKetupat

def lsegitiga(d1,d2):
    a = 2*d1
    t = d2
    luassegitiga = 0.5 * a * t
    print("luas segitiga adalah : ", luassegitiga)
    return luassegitiga

def kbelahketupat(d1, d2):
    kelilingBelahKetupat = 4*(math.sqrt(d1**2 + d2**2))
    print("keliling belah ketupat adalah : ", kelilingBelahKetupat)
    return kelilingBelahKetupat

def ksegitiga(d1,d2):
    kelilingSegiTiga = 2*(math.sqrt(d1**2 + d2**2)) + (2*d1)
    print("Keliling segitiga adalah : ", kelilingSegiTiga)
    return kelilingSegiTiga

lbelahketupat(d1,d2)
lsegitiga(d1,d2)
kbelahketupat(d1,d2)
ksegitiga(d1,d2)

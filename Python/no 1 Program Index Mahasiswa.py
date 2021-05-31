print("=== Program Nilai Indeks Mahasiswa ===")

tugas1 = int(input("Masukan nilai tugas1 : "))
tugas2 = int(input("Masukan nilai tugas2 : "))
UTS = int(input("Masukan nilai UTS : "))
UAS = int(input("Masukan nilai UAS : "))

nilai = (tugas1*0.15) + (tugas2*0.1) + (UTS*0.35) + (UAS*0.4)

if nilai >=  80:
    indeks = "A"
elif nilai < 80 and nilai >= 70:
    indeks = "B"
elif nilai < 70 and nilai >= 55:
    indeks = "C"
elif nilai < 55 and nilai >= 40:
    indeks = "D"
elif nilai < 40 and nilai >= 0:
    indeks = "E"

print("================================================")
print("Indeks nilai mahasiswa anda adalah : ",indeks)

print("\n\n=== Program Penentu Ganjil - Genap ===")
angka1 = int(input("Masukan angka awal  : "))
angka2 = int(input("Masukan angka akhir : "))

penampung = 0

if angka1 >= angka2:
    for i in range(angka1,angka2-1,-1):
        if i % 2 == 0:
            print(i," termasuk angka Genap ")
        if i % 2 != 0:
            print(i," termasuk angka Ganjil ")
if angka2 >= angka1:
    for i in range(angka1,angka2+1):
        if i % 2 == 0:
            print(i," termasuk angka Genap ")
        if i % 2 != 0:
            print(i," termasuk angka Ganjil ")
print("program selesai")
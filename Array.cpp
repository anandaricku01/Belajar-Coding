#include <iostream>
#include <array> //standard library array

using namespace std;


int main(int argc, char const *argv[])
{
	/*int angka[5] = {1,2,3,4,5}; deklarasi dan assignment array biasa dalam iostream
	cout << "addres dari angka[0] " << &angka[0] << endl;
	cout << "addres dari angka[1] " << &angka[1] << endl;
	cout << "addres dari angka[2] " << &angka[2] << endl;
	cout << "addres dari angka[3] " << &angka[3] << endl;
	cout << "addres dari angka[4] " << &angka[4] << endl;*/

	/* array <int,6> nilai; //cara deklarasi nilai array jika menggunakan fungsi array dari standard library array
	
	for (int i = 0; i < 6; ++i)
	{
		nilai[i] = i;
		cout << "nilai dari nilai["<<i<< "] adalah "<<nilai[i]<< endl;
	}
	 cout << nilai.size() << endl;
	 cout << nilai[6] << endl; */

	 //==============================================================================
	

	/* LATIHAN ARRAY

	cout << endl;
	cout << "==========PROGRAM NILAI SISWA===========" << endl;
	cout << endl;
	array <int,11> nilaisiswa;

	for (int i = 0; i < nilaisiswa.size() ; i++)
	{
		cout << "Banyak siswa dengan nilai ";
		if (i == 0)
		{
			cout << "0 - 9   : ";
		}
		else if (i == 10)
		{
			cout << "100     : ";
		}
		else 
		{
			cout << i*10 << " - " << (i*10) + 9 << " : ";
		}
		cin >> nilaisiswa[i];
	}

	cout << '\n' << "================GRAFIK BANYAK SISWA================" << "\n\n";
	
	for (int i = 0; i < nilaisiswa.size(); i++)
	{
		if (i == 0)
		{
			cout << "0 - 9   : ";
		}
		else if (i == 10)
		{
			cout << "100     : ";
		}
		else 
		{
			cout << i*10 << " - " << (i*10) + 9 << " : ";
		}

		for (int bintang = 0; bintang < nilaisiswa[i] ; bintang++)
		{
			cout << "*";
		}

		cout << endl;
	} */

	//===============================================================================

	/*
	cout << endl << "================LOOPING PADA ARRAY======================" << endl << endl;

	array < int , 10 > nomor = {0,1,2,3,4,5,6,7,8,9}; // array pada standard library array

	// for (deklarasi : array ) {statement; }

	for (int nomor1 : nomor ){ // ini adalah looping pada array yang otomatis akan me-loop kan semua isi array sebanyak isi array
		cout << "address : " << &nomor1 << ", nilainya : " << nomor1 << endl;
	} //ketika ini diprint maka address nya akan sama semua

	cout << endl ;

	// kita dapar memanipulasi nilai dari array menggunakan += / -= dsb dengan menggunakan address dari array tersebut
	for (int &nilaiaddres : nomor ){
		nilaiaddres *= 2;
		cout << "address : " << &nilaiaddres << ", nilainya : " << nilaiaddres << endl;
	} //tapi ketika ini diprint, addressnya akan berbeda beda namun urut alias memberikan address dari array yang sebenarnya

	for (int &nilaiaddres : nomor ){
		cout << "address : " << &nilaiaddres << ", nilainya : " << nilaiaddres << endl;
	} // jika ini diprint maka ahsilnya akan menjadi hasil setelah dimanipulasi, bukan array awal lagi

	*/


	//=======================================================================================

	/*
	cout << endl << " ===================ARRAY MULTIDEIMENSI======================" << endl << endl;

	
	- jika tidak menggunakan standard library array (menggunakan bawaan C++/ built-in), maka harusnya seperti ini

		int array [baris][kolom] = {value};

		misal : int array[2][2] = {1,2,3,4}; maka modelnya akan menjadi seperti matrix
		namun hanya pemanggilan value matrixnya saja yang model matrix, ketika diprint tetap aja lurus
		bahkan address memorynya saja masih urut

	- cara pemanggilannya adalah :
		cout << array [0][0]; maka yang terpanggil adalah angka 1
		cout << array [0][1]; maka yang terpanggil adalah angka 2
		cout << array [1][0]; maka yang terpanggil adalah angka 3
		cout << array [1][1]; maka yang terpanggil adalah angka 4

	*/

	
	return 0;
}
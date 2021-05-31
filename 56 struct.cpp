#include "iostream"
#include "string"

using namespace std;


struct buah
{
	string warna;
	float berat;
	int harga;
	string rasa;
};





int main(int argc, char const *argv[])
{
	buah apel;
	buah jeruk;


	// inisialisasi subdata apel
	apel.warna = "merah";
	apel.berat = 50.6;
	apel.harga = 5000;
	apel.rasa = "kecut";

	// inisialisasi subdata jeruk
	jeruk.warna = "oranye";
	jeruk.berat = 30.6;
	jeruk.harga = 2000;
	jeruk.rasa = "kecut";

	cout << apel.warna << endl;
	cout << apel.berat << endl;
	cout << apel.harga << endl;
	cout << apel.rasa << endl << endl;

	cout << jeruk.warna << endl;
	cout << jeruk.berat << endl;
	cout << jeruk.harga << endl;
	cout << jeruk.rasa << endl;
	
	return 0;
}
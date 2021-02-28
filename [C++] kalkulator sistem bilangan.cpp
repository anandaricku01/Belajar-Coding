#include <iostream>
using namespace std;

int bilangan, dibagi, hasil, sisa, penentu;		// penentu ini untuk menentukan perulangan while terpilih mengulang atau tidak
bool hitungLagi = true; 						// untuk perulangan while menghitung 

void menghitung10(int bilangan, int dibagi, int hasil, int sisa); // menghitung program dari desimal 


int main(int argc, char const *argv[])
{

	cout << "============== PROGRAM SISTEM BILANGAN ==============" << endl;
	cout << endl << endl;

	cout << "masukan bilangan desimal : ";
	cin  >> bilangan;

	cout << "masukan pembagi : ";
	cin  >> dibagi;

	cout << endl << endl;

	menghitung10(bilangan, dibagi, hasil, sisa); // penghitung nilai pembagian

	return 0;
}

void menghitung10(int bilangan, int dibagi, int hasil, int sisa){
	char convert[6] = {'A','B','C','D','E','F'};
	int urutan[100];
	int i = 0;
	cout << "hasilnya adalah : " << endl;
	hasil = 1;

	while (hasil != 0 || hasil == 1) 
		{

			sisa = bilangan % dibagi;

			if (sisa == 0)
				{
					hasil = bilangan / dibagi;
				} 
			else 
				{
					hasil = (bilangan - sisa) / dibagi;
				}

			cout << dibagi << " | " << bilangan;

			if (sisa >= 10 && sisa <= 15)
				{
					cout << "   sisa : " << convert[sisa - 10 ] << endl;
				}
			else 
				{
					cout << "   sisa : " << sisa << endl;
				}
			cout << "   ------- " << endl;

			bilangan = hasil;
			urutan[i] = sisa;
			i++;
		}
	cout << "maka jika diurutkan akan menjadi seperti ini : ";
	for (int j = i-1; j >= 0; j--)
	{
		if (urutan[j] >= 10 && urutan[j] <= 15)
			{
				cout << convert[urutan[j] - 10];
			}
		else
			{
				cout << urutan[j];
			}
	}	
}


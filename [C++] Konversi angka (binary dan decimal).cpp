#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
void DesimalKeBinary(int desimal);
void DesimalKeBinary(int desimal) {
	int sisa, hasil;
	if(desimal <= 1){
		cout << desimal;
		return;
	}
	sisa = desimal % 2;
	hasil = desimal / 2;
	DesimalKeBinary(hasil);
	cout <<sisa;
}

void konversiDes(int bin)
{
   int sisa,hasil,a;
   hasil=0;
   int pangkat=0;
   while(bin>=1)
   {
      sisa=bin%2;
      hasil+=sisa*pow(2,pangkat);
      bin=bin/10;
      pangkat++;
   }
   cout<<hasil<<endl;
}


int main(int argc, char const *argv[])
{	
	cout<<"\n";
	cout << "==== PROGRAM PENGKONVERSI ANGKA ===="<<endl;
	cout<<"\n\n";
	int bilangan, biner;
	cout<<"== KONVERSI DESIMAL ---> BINER ==\n";
	cout <<"masukan bilangan desimal yang ingin dikonversi : ";
	cin >> bilangan;
	cout << bilangan << " dalam biner adalah : ";
	DesimalKeBinary(bilangan);
	cout<<"\n\n"<<"== KONVERSI BINER ---> DESIMAL ==\n";
	cout <<"masukan bilangan biner yang ingin dikonversi : ";
	cin >> biner;
	cout << biner << " dalam desimal adalah : ";
	konversiDes(biner);
	return 0;
}

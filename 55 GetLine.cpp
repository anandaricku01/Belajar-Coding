#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
	string kalimat1;
	string cari;

	// masukin kalimat 
	cout << "masukan kalimat: ";
	getline(cin, kalimat1);

	cout << "input anda adalah : " << kalimat1 << endl;

	// kata yang ingin di cari
	cout << "masukan kata/huruf yang ingin dicari : ";
	getline(cin, cari);


	// jumlah kata dari input
	int posisi = 0;
	int jumlah = 0;

	while(true){
		jumlah++;
		if (jumlah == 1)
		{
			posisi = kalimat1.find(cari);
		
		}else{
			
			posisi = kalimat1.find(cari,posisi + 1);
		
		}

		if (posisi < 0)
		{
			jumlah--;
			break;
		}
		cout << "posisi : " << posisi << " jumlah : " << jumlah << endl;
	}

	cout << "jumlah yang ditemukan adalah : " << jumlah << endl;
	return 0;
}
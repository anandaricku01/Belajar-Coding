#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
	// char kata[4] = {'u','c','u','p'};
	// if (kata [4] == "ucup")
	// {
	// 	cout << "berhasil" << endl;
	// } akan error karena tidak bisa mengkomparasi dengan cara seperti ini

	// char kata[4] = {'u','c','u','p'};
	// char pembanding[4] = {'u','c','u','p'};
	// if (kata [4] == pembanding)
	// {
	// 	cout << "berhasil" << endl;
	// } akan error, karena tidak bisa membandingkan dua array (akan selalu salah)

	// untuk itu, jika ingin membandingan dua buah string, kita perlu library string
	string kata("ucup");
	if (kata == "ucup")
	{
		cout << "berhasil!" << endl; // tidak akan error dan bisa dilakukan
	}

	// program test komparasi tebak nama
	string input;

	while(true){
		cout << "tebak nama rahasia : ";
		cin >> input;

		if (kata == input)
		{
			cout << "tebakan anda benar!" << endl;
			break;
		}

		cout << "tebakan anda salah! coba ulangi" << endl;
	}

	cout << "program selesai" << endl;

	return 0;
}
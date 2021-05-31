#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
	string kalimat1("Dayat suka olahraga supaya sehat");
	string kalimat2("ucup suka makan pisang supaya kuat");

	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;

	// akses substring, mengambil string di tengah - tengah 
	// namaString.substr(index,panjang)
	cout << kalimat1.substr(11,8) << endl; // maka yang terprint adalah olahraga, index ke-12 dan panjang string sampai 8
	cout << kalimat2.substr(16,6) << endl; // maka yang terprint adalah pisang, index ke-16 dan panjang string sampau 6

	cout << kalimat1.substr(11,8) << " " << kalimat2.substr(16,6) << " :v" << endl; // :v
	
	// mencari posisi substring dalam string
	// namaString.find("substring")
	cout << "posisi kata olahraga dalam kalimat 1 ada di index = " << kalimat1.find("olahraga") << endl;
	cout << "posisi kata pisang dalam kalimat 2 ada di index = " << kalimat2.find("pisang") << endl;

	// mencari multiple substring pada string
	int a = kalimat1.find("ya");
	cout << "substring 'ya' pada kalimat 1 ada di index ke : " << a << " dan " << kalimat1.find("ya", a+1) << endl;

	// meencari multiple substring pada string tapi dari belakang
	// pakenya namaString.rfind(substring)
	cout << "substring 'a' pada kalimat 2 ada di index ke (dari belakang) : " << kalimat2.rfind("a") << endl; 

	
	return 0;
}
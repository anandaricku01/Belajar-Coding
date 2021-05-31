#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
	string kalimat1("Mukatte kuru no ka?");
	string kalimat2("Chikazukunakya, teme o buchimesenainda");
	string kalimat3(" hoho, dewa juubun chikazukuna yoi");
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;

	// FUNGSI SWAP STRING
	// namaString.swap(namaString_yang_ingin_diswap)
	cout << "SWAP STRING" << endl;

	kalimat1.swap(kalimat2);
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;

	// FUNGSI REPLACE
	// namaString.replace(index_substring,panjang_substring,substring_baru)
	cout << "REPLACE STRING" << endl;

	kalimat2.replace(kalimat2.find("?"),1,"? nigetara chikazuite kuru no ka?");
	kalimat2.swap(kalimat1);
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;

	// FUNGSI INSERT
	// namaString.insert(index,"string yang akan diinput")
	cout << "INSERT STRING" << endl;
	kalimat1.insert(51, kalimat3);
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;
	return 0;


}
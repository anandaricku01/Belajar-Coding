#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
	string kata("cat");

	// 1. menampilkan kata
	cout << kata << endl;

	// 2. mengambil karakter berdasarkan index dari string
	cout << "index ke 0 : " << kata[0] << endl; // console -> index ke 0 : c 
	cout << "index ke 1 : " << kata[1] << endl; // console -> index ke 1 : a 
	cout << "index ke 2 : " << kata[2] << endl; // console -> index ke 2 : t 

	// 3. merubah isi dari string kata berdasarkan indexnya
	// kata[1] = "e"; --> akan menimbulkan error, karena jika ingin merubah 1 karakter (char), gunakan kutip 1 '' bukan kutip 2 ""
	kata[1] = 'e';
	cout << kata << endl; // console -> cet

	// 4. menambahkan isi dari string -> bahasa kerennya = "concatenation"
	string kata2(kata + "ar");
	cout << kata2 << endl; // console -> cetar

	// 5. menyambung isi string menggunakan fungsi namaString.append()
	string kata3(" membahana");
	kata2.append(kata3);
	cout << kata2 << endl; // console -> cetar membahana

	// 6. menambahkan menggunakan operasi string1 += string2 + string3 + ...
	string kata4("ahay!!!");
	kata2 += " " + kata4;
	cout << kata2 << endl; // console -> cetar membahana ahay!!!

	return 0;
}
#include <iostream>
using namespace std;


/*==========================================================================
							POINTER

setiap data memiliki address/alamat di mana dia mengakses memori pada komputer.
address bisa berubah setiap saat karena bersifat dinamis.
inti dari pointer adalah kita bisa merubah alamat sebuah value menjadi value.
gampangnya lagi, alamat diubah jadi nilai (value)


============================================================================= 
							REFERENCE

reference atau mudahnya adalah sebuah refrens.
dapat kita gunakan untuk menghubungkan antara variabel.
maksudnya? jika kita mengubah nilai sebuah variabel, maka nilai variabel yang terhubung akan 
ikut berubah dan memiliki alamat (address) yang sama.

============================================================================
							FUNCTION DENGAN POINTER

yaaa intinya bikin function tapi pake pointer si, gampang aja kok.
ex : void fungsi(int *a){} menggunakan void karena kita tidak perlu mengembalikan nilai apa - apa, hanya merubah nilai saja.
untuk prototype kita hanya perlu menuliskan :
void fungsi (int *) tidak perlu mengeluarkan variabel.
bingung? sama, gw juga.

=============================================================================
							FUNCTION DENGAN REFERENCE

simpelnya sih kita bikin function dengan parameter address, terus nanti input an di main nya pake variabel biasa.
ex : void fungsi(int &a ){}

int main (){
	int a
	fungsi(a);
}
untuk prototype nya sendiri sama aja kayak pointer, tinggal pake &
ex : void fungsi(int &);

menggunakan function reference membuat jadi lebih mudah dan rapih karena pada input an nanti tidak perlu menggunakan * / &

============================================================================
*/

void fungsi(int *); // ini prototype nya dari pointer function
void fungsi1(int &); // ini prototypr nya daru reference function

int main()
{
	// ==========================POINTER=======================================
	int a = 5; // maka a ini akan memiliki alamat tertentu di mana nilai dari a ini adalah 5

	cout <<"nilai dari integer a = " << a << endl;
	cout <<"alamat dari integer a = " << &a << endl; // jika ingin melihat address dari int a maka tambahkan & di depan variabel
	
	int *aPtr = nullptr; // jika ini diprint maka address nya akan kosong atau tidak beralamat 
						//  dan juga tambahkan bintang di depan variabel, maka akan dianggap sebagai pointer

	cout <<"nilai dari integer a = " << a << endl;
	cout <<"alamat dari integer a = " << aPtr << endl;

	aPtr = &a; // bisa diinisialisasi dengan address dari a
				// jika kita ingin mengambil data dari a, atau mudahnya kita memunculkan nilai a hanya dari addressnya saja
				// itu bisa dilakukan dengan cara menambahkan bintang di depan variabel
	cout <<"mengambil nilai dari pointer = " << *aPtr << endl << endl ; // maka yang terprint bukanlah alamat dari a, melainkan nilainya.

	//====================================REFERENCE=============================

	a = 10; // a bernilai 10 dan beralamat sekian

	cout << " nilai dari a adalah " << a << endl;
	cout << "alamat dari a adalah " << &a << endl << endl;

	int &b = a; // ini adalah tahap referencing
				// maka secara otomatis address dan value dari b dan a akan sama

	cout << " nilai dari a adalah " << a << endl;
	cout << " nilai dari b adalah " << b << endl;
	cout << "alamat dari a adalah " << &a << endl;
	cout << "alamat dari b adalah " << &b << endl << endl;

	a = 13; // jika salah satu dirubah, maka yang lain akan ikut berubah (lihat buktinya di CMD)
	cout << " nilai dari a adalah " << a << endl;
	cout << " nilai dari b adalah " << b << endl;
	cout << "alamat dari a adalah " << &a << endl;
	cout << "alamat dari b adalah " << &b << endl << endl;

	b = 23; // begitupun juga b. jika nilai b dirubah, maka nilai a juga akan berubah (lihat di CMD)
	cout << " nilai dari a adalah " << a << endl;
	cout << " nilai dari b adalah " << b << endl;
	cout << "alamat dari a adalah " << &a << endl;
	cout << "alamat dari b adalah " << &b << endl << endl;

//========================================================POINTER FUNCTION======================================================
	cout << " nilai dari a adalah " << a << endl;
	cout << " nilai dari b adalah " << b << endl;
	cout << "alamat dari a adalah " << &a << endl;
	cout << "alamat dari b adalah " << &b << endl;
	fungsi(&a); /* harus menggunakan &variabel. karena parameter dalam fungsi pointer sendiri adalah sebuah pointer
					yang akan mengubah alamat menjadi sebuah value*/
	
//=======================================================REFERENCE FUNCTION=====================================================
	cout << " nilai dari a adalah " << a << endl;
	cout << " nilai dari b adalah " << b << endl;
	cout << "alamat dari a adalah " << &a << endl;
	cout << "alamat dari b adalah " << &b << endl;
	fungsi1(a); // jadi saat menggunajan reference function, kita hanya menggunakan variabel saja
	return 0;
}


void fungsi(int *c){
	cout << " nilai dari c adalah " << *c << endl; //harus pointer untuk mendapatkan nilai dari c
	cout << "alamat dari c adalah " << c << endl << endl;	// jika hanya c saja, maka menjadi address
}

void fungsi1(int &c){
	cout << " nilai dari c adalah " << c << endl; 
	cout << "alamat dari c adalah " << &c << endl << endl;
}
#include <iostream>
using namespace std;

double luasSegitiga(double alas, double tinggi);


int main(){
	double alas, tinggi, luas;
	cout << "program luas segitiga"<<endl;
	cout<<"masukan panjang alas : ";
	cin>>alas;
	cout<<"masukan nilai tinggi : ";
	cin>>tinggi;
	luas = luasSegitiga(alas,tinggi);
	cout<<"luas segitiga adalah : "<<luas<<endl;
	return 0;
}

double luasSegitiga(double alas, double tinggi){
return (alas * tinggi)/2;
}

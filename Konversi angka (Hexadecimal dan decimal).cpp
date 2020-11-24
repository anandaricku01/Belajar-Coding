#include <iostream>
#include <string.h>
using namespace std;
int hexadecimalToDecimal(char hexVal[])
{   
    int len = strlen(hexVal);
    int base = 1;   
    int dec_val = 0;
    for (int i=len-1; i>=0; i--)
    {   
        if (hexVal[i]>='0' && hexVal[i]<='9')
        {
            dec_val += (hexVal[i] - 48)*base;
            base = base * 16;
        }
        else if (hexVal[i]>='A' && hexVal[i]<='F')
        {
            dec_val += (hexVal[i] - 55)*base;
            base = base*16;
        }
    }
     
    return dec_val;
}

int decToHexa(int n)
{
    int i = 0;


    char hexaDeciNum[100];
    while(n!=0)
    {
        int temp  = 0;
        temp = n % 16;

        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        } n = n/16;
    }
    for(int j=i-1; j>=0; j--)
        cout << hexaDeciNum[j];
}

int main(){
	cout << "\n\n=== PROGRAM KONVERSI HEXADECIMAL ---> DECIMAL\n";
	char heksa[5];
 	cout<<"Masukkan Bilangan Heksadesimal :";gets(heksa);
 	char hexNum[5];
 	strcpy(hexNum,heksa);
 
    cout <<"Maka Dalam Desimal Adalah :"<< hexadecimalToDecimal(hexNum) << endl;
    cout << "\n\n=== PROGRAM KONVERSI DECIMAL ---> HEXADECIMAL\n";
    int n;
	cout<<"Masukkan Angka Decimal :";cin>>n;
	cout<<"Dalam Bilangan Heksa Desimal = ";
    decToHexa(n);
    return 0;
}
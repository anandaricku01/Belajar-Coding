#include <iostream>
 using namespace std;

 int main()
 {
 	int n, fn, fn_1, fn_2;
 	cout<<"=====program fibonacci====="<<endl;
 	cout<<"masukan nilai ke-n : ";
 	cin >> n;
 	fn_1 = 1;
 	fn_2 = 0;
 	fn = fn_1 + fn_2;
 	cout<<fn<<endl;
 	for (int i = 0; i <= n; ++i)
 	{	
 		fn = fn_1 + fn_2;
 		cout<<fn<<endl;
 		fn_2 = fn_1;
 		fn_1 = fn;
 	}
 	return 0;
 }
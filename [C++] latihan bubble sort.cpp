#include <iostream>

using namespace std;
int loop = 0;
void bubbleSort(int arr[], int n){
  int tmp;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
      loop++;
      cout << "looping " << loop << endl;
    }
    }

  }

/* 
    jika di dalam for yang menggunakan variabel j sebagai patokan loopnya 
    memiliki statement sebagai berikut :
    misal nilai yg diinput adalah 1, 6, 5, 4, 3 dengan n = 5
    - j < n         : 25 kali looping
    - j < n - 1     : 20 kali looping
    - j < n - 1 - i : 10 kalo looping

    membuktikan bahwa semakin dikurangi nilai n pada statement for loop dengan patokan
    nilai j, maka looping akan semakin sedikit

*/
  
int main(){
  int array[100], n;
  cout << "Masukkan banyak elemen: ";
  cin >> n;
  cout << "Masukkan nilai: \n";
  for (int i = 0; i < n; i++){
    cin >> array[i];
  }
  bubbleSort(array, n);
  cout << "Hasil pengurutan sebagai berikut:\n";
  for (int i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}

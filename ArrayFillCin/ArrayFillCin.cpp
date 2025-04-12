
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {

    const int size = 3;

    int dizi[size];  // dizi[5] = {1,2,3,4,5}

    for (int i = 0; i < size; i++)
    {
        cout << "Bir sayi giriniz #" << i + 1 << ":";
        cin >> dizi[i];   
    }
    
    cout << dizi[2];

    return 0;
}














//
//const int size = 5;
//
//int array[size];
//
//for (int i = 0; i < size; i++) {
//    cout << "Bir sayi giriniz #" << i + 1 << ": ";
//    cin >> array[i];
//}
//
//cout << array[2];
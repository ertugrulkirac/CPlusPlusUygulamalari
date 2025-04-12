// Arrays2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    int numbers[5];

    cout << "Lutfen 5 sayi giriniz!" << endl;

    // kullanýcýdan gelen girdileri diziye gönderiyoruz. numbers[0] = 1
    for (int i = 0; i < 5; ++i) {
        cout << i+1 <<". sayiyi giriniz : " << endl;
        cin >> numbers[i];
    }

    int toplam = 0;
    //  Dizinin elemanlarý
    for (int n = 0; n < 5; n++) {
       // cout << numbers[n] << "  ";
        toplam = toplam + numbers[n];
    }
    cout <<"Kullanici tarafindan girilen sayilarin toplami:" << toplam;
}
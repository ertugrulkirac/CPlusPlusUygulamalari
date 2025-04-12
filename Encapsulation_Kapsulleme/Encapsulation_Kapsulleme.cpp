// Encapsulation_Kapsulleme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//Kapsüllemenin(Encapsulation) anlamý, "hassas" verilerin kullanýcýlardan gizlendiðinden emin olmaktýr.

// Bunu yapmak için sýnýf deðiþkenlerini / niteliklerini private(sýnýfýn dýþýndan eriþilemez) olarak bildirmeniz gerekir.

// Baþkalarýnýn özel bir üyenin deðerini okumasýný veya deðiþtirmesini istiyorsanýz, genel get ve set yöntemlerini kullanabilirsiniz.

//Özel Üyelere Eriþim

//Özel bir özelliðe eriþmek için genel "get" ve "set" yöntemlerini kullanýn :

#include <iostream>
#include "benimSinifim.h"
using namespace std;


int main() {
    
    benimSinifim snf;
    cout << snf.daireCevresi(5);
 
}

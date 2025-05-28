// Polymorphism_CokBicmlilik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Derleme Zamaný(Statik) Çok Biçimlilik
//Bu tür çok biçimlilik, function overloading(fonksiyon aþýrý yükleme) 
//ve operator overloading (operatör aþýrý yükleme) ile gerçekleþtirilir.

#include <iostream>
using namespace std;

class Hesaplama {

public : 

    int Topla(int sayi1, int sayi2) {
        return sayi1 + sayi2;
    }

    double Topla(double a, double b) {
        return a + b;
    }


};

int main()
{
    Hesaplama hsp;

    cout << hsp.Topla(1, 2) << endl;
    cout << hsp.Topla(2.3, 5.1);

    
}

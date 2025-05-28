// Polymorphism_CokBicmlilik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Derleme Zaman�(Statik) �ok Bi�imlilik
//Bu t�r �ok bi�imlilik, function overloading(fonksiyon a��r� y�kleme) 
//ve operator overloading (operat�r a��r� y�kleme) ile ger�ekle�tirilir.

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

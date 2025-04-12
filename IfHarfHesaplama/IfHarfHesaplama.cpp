// IfHarfHesaplama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    int vizeNotu;
    int finalNotu;
    cout << "Vize notunuzu giriniz:\n";
    cin >> vizeNotu;
    cout << "Final notunuzu giriniz:\n";
    cin >> finalNotu;
    cout << "Girdiginiz vize notu :" << vizeNotu << " ve " << "girdiginiz final notu: " << finalNotu << "\n";

    double vizeKatkisi = vizeNotu * 0.4;
    double finalKatkisi = finalNotu * 0.6;

    double sonuc = vizeKatkisi + finalKatkisi;

    if (sonuc >= 95)
    {
        cout << "Harf notunuz: A+";
    }
    else if (sonuc >= 90 && sonuc <= 94 )
    {
        cout << "Harf notunuz: A";
    }
    else if (sonuc >= 85 && sonuc <= 89)
    {
        cout << "Harf notunuz: B+";
    }
    else if (sonuc >= 75 && sonuc <= 84)
    {
        cout << "Harf notunuz: B";
    }
    else if (sonuc >= 65 && sonuc <= 74)
    {
        cout << "Harf notunuz: C+";
    }
    else if (sonuc >= 55 && sonuc <= 64)
    {
        cout << "Harf notunuz: C";
    }
    else if (sonuc >= 45 && sonuc <= 54)
    {
        cout << "Harf notunuz: D+";
    }
    else if (sonuc >= 40 && sonuc <= 44)
    {
        cout << "Harf notunuz: D";
    }
    else
    {
        cout << "Harf notunuz: F";
    }
}


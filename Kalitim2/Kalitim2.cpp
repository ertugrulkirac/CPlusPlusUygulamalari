// Kalitim2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Ogrenci {
public:
    string ad;
    string soyad;
    int dT;
    string adres;
    string tel;
};

class Akademik:public Ogrenci{
public:
  /*  string ad;
    string soyad;
    int dT;
    string adres;
    string tel;*/
    string lisandiplomaNo;
};

int main()
{
    Akademik nesne;
    nesne.ad = "Ertuðrul";
    Ogrenci ogr;
    ogr.ad = "Ahmet";

}
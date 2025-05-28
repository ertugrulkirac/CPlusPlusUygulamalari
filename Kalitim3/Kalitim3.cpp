// Kalitim3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Canli {
protected:
    string ad;
    string soyad;
    int yas;

public:
    void setBigli(string a, string s, int y) {
        ad = a;
        soyad = s;
        yas = y;
    }
};

class Insan:public Canli{
public:
    void goster() {
        cout << "Ad:" << ad <<" "<< "Soyad:" << soyad << " " << "Yas:" << yas << endl; // protected olduðu için eriþilebilir
    }
};


int main()
{ 
    Insan nesne;
    nesne.setBigli("Ertugrul", "Kirac", 38);
    nesne.goster();
}


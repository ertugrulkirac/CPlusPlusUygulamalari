// Inheritance_Kalitim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Miras
//C++'da nitelikleri ve yöntemleri bir sýnýftan diðerine miras almak mümkündür. "Miras kavramýný" iki kategoriye ayýrýyoruz:

//türetilmiþ sýnýf(çocuk) - baþka bir sýnýftan miras alan sýnýf
//temel sýnýf(ebeveyn) - miras alýnan sýnýf
//Bir sýnýftan miras almak için sembolü kullanýn : .

//Aþaðýdaki örnekte, Car sýnýf(alt), nitelikleri ve yöntemleri Vehicle(ebeveyn) sýnýfýndan  miras alýr :

#include <iostream>
using namespace std;

// Base class
class Vechile {
public:
    string brand = "Ford";
    void goster() {
        cout << "Araba \n";
    }
};

// Derived class
class Car : public Vechile {

public:
    int sayi1 = 1;
};

int main() {

    Car nesne;
    nesne.goster();

}

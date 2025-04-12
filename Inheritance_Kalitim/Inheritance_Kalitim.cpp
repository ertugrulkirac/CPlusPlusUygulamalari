// Inheritance_Kalitim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Miras
//C++'da nitelikleri ve y�ntemleri bir s�n�ftan di�erine miras almak m�mk�nd�r. "Miras kavram�n�" iki kategoriye ay�r�yoruz:

//t�retilmi� s�n�f(�ocuk) - ba�ka bir s�n�ftan miras alan s�n�f
//temel s�n�f(ebeveyn) - miras al�nan s�n�f
//Bir s�n�ftan miras almak i�in sembol� kullan�n : .

//A�a��daki �rnekte, Car s�n�f(alt), nitelikleri ve y�ntemleri Vehicle(ebeveyn) s�n�f�ndan  miras al�r :

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

// MultiInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//C++ �ok D�zeyli Kal�t�m

//Bir s�n�f, halihaz�rda ba�ka bir s�n�ftan t�retilmi� olan bir s�n�ftan da t�retilebilir.

//A�a��daki �rnekte, MyGrandChilds�n�f�,  MyChild s�n�f�ndan t�retilmi�tir. (MyChild s�nf� da  MyClass'dan t�retilmi�tir).


#include <iostream>
using namespace std;


class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class.";
    }
};

// Derived class (child)
class MyChild : public MyClass {
};

// Derived class (grandchild)
class MyGrandChild : public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}
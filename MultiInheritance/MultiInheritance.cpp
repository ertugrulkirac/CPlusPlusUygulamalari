// MultiInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//C++ Çok Düzeyli Kalýtým

//Bir sýnýf, halihazýrda baþka bir sýnýftan türetilmiþ olan bir sýnýftan da türetilebilir.

//Aþaðýdaki örnekte, MyGrandChildsýnýfý,  MyChild sýnýfýndan türetilmiþtir. (MyChild sýnfý da  MyClass'dan türetilmiþtir).


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
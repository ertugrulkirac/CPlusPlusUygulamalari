// VoidKavrami.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Void fonksiyonlarýnýn dönüþ tipi yoktur ancak dönüþ deðeri yapabilirler.

void selamVer()
{
    cout << "Merhaba";
}

void selamVer2()
{
    //return "Merhaba";
    cout << "Merhaba2";

    return;
}

void fun()
{
    cout << "Hello";

    // We can write return in void
    return;
}

//Bir void fun() baþka bir void iþlevi döndürebilir:  
// Bir void iþlevi, sonlandýrýlýrken baþka bir void iþlevini de çaðýrabilir. Örneðin, 

void work()
{
    cout << "The void function has returned "
        " a void() !!! \n";
}

// Driver void() returning void work()
void test()
{
    // Returning void function
    return work();
}

int main()
{
    selamVer();
    selamVer2();
    test();
}

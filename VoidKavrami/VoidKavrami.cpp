// VoidKavrami.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Void fonksiyonlar�n�n d�n�� tipi yoktur ancak d�n�� de�eri yapabilirler.

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

//Bir void fun() ba�ka bir void i�levi d�nd�rebilir:  
// Bir void i�levi, sonland�r�l�rken ba�ka bir void i�levini de �a��rabilir. �rne�in, 

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

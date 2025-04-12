// FonksiyonAtama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void func(int sayi)
{
    sayi = 5;
}

int main()
{
    int sayi2 = 10;
    func(3);
    cout << sayi2 + 5;

}


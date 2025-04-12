// EnumerationD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C++ Numaralandýrma


#include <iostream>
using namespace std;

enum sehirler { Ýstanbul = 34, Sakarya =54, Bolu = 14 };

int main()
{
    sehirler sehir;
    sehir = Ýstanbul;
    std::cout << "Sehirler : " << sehir + 1;
}

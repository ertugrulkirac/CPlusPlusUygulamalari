// EnumerationD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C++ Numaralandırma


#include <iostream>
using namespace std;

enum sehirler { İstanbul = 34, Sakarya =54, Bolu = 14 };

int main()
{
    sehirler sehir;
    sehir = İstanbul;
    std::cout << "Sehirler : " << sehir + 1;
}

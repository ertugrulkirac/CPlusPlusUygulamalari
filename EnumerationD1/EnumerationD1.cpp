// EnumerationD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C++ Numaraland�rma


#include <iostream>
using namespace std;

enum sehirler { �stanbul = 34, Sakarya =54, Bolu = 14 };

int main()
{
    sehirler sehir;
    sehir = �stanbul;
    std::cout << "Sehirler : " << sehir + 1;
}

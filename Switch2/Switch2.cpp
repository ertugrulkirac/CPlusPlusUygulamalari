// Switch2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int sinavOrt = 55;
    switch (sinavOrt) {
    case 95:
        cout << "Ders harf notunuz: A+ ";
        break;
    case 90:
        cout << "Ders harf notunuz: A";
        break;
    case 85:
        cout << "Ders harf notunuz: B+";
        break;
    case 75:
        cout << "Ders harf notunuz: B";
        break;
    case 65:
        cout << "Ders harf notunuz: C+";
        break;
    case 55:
        cout << "Ders harf notunuz: C";
        break;
    case 45:
        cout << "Ders harf notunuz: D+";
        break;
    case 40:
        cout << "Ders harf notunuz: D";
        break;
    }
}


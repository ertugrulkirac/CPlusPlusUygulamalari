// VeriTurleriDonusum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //kapal� t�r d�n���m�
    int a = 15;
    a = 3.14;
    std::cout << a <<"\n";

    //A��k t�r d�n���m�
    int b = 5;
    b = 19.7;
    std::cout << static_cast<int>(b) << "\n"; 
    //C++ programlama dilinde static_cast, a��k bir t�r d�n���m� ger�ekle�tiren bir operat�rd�r.

    char ch(53);
    std::cout << ch << "\n";
    std::cout << static_cast<int>(ch); 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

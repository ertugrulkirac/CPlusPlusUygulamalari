// DosyaIslemleri1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
//#include <ofstream>
//#include <ifstream>
using namespace std;

int main()
{

    ofstream dosya("ogrenciler.txt"); // yazma i�lemi
    if (dosya.is_open())
    {
        dosya << "Ertu�rul" << "   " << "K�ra�";
    }

    else
    {
        cout << "Dosya acilamadi!\n";
    }
 
}


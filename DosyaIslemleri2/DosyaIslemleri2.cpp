// DosyaIslemleri2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main()
{

	ifstream dosya("ogrenciler.txt");
	string satir;
	
	if (dosya.is_open())
	{
		while(getline(dosya,satir))
		{
			cout << satir << endl;
		}
	}
	else
	{
		cout << "dosya acilamadi.";
	}
}

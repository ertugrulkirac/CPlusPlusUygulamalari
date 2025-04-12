// SilindirHacmiHesaplama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int yaricap;
	int yukseklik;
	string pi = "3.14";
	float hacim;
	
	cout << "Silindirin yari capini giriniz:";
	cin >> yaricap;
	cout << "Silindirin yüksekligini giriniz:";
	cin >> yukseklik;
	hacim = stof(pi) * yaricap * yaricap * yukseklik;
	cout << "Silindirin hacmi:" << hacim;
}


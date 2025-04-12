// ElseifState.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int x = 11;
	int y = 11;

	if (x<y)
	{
		cout << "y degeri x degerinden buyuktur.";
	}
	else if (y<x)
	{
		cout << "x degeri y degerinden buyuktur.";
	}
	else
	{
		cout << "y degeri x degerine esittir.";
	}

	//int zaman = 22;
	//if (zaman < 12) {
	//	cout << "Gunaydin.";
	//}
	//else if (zaman < 20) {
	//	cout << "Iyi gunler.";
	//}
	//else {
	//	cout << "Iyi geceler..";
	//}
}


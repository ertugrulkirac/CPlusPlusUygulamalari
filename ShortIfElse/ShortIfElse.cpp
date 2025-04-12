// ShortIfElse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int zaman = 14;
	/*if (zaman < 18) {

		cout << "Iyi gunler.";
	}
	else {
		cout << "Iyi geceler..";
	}*/

	string sonuc = (zaman < 18) ? "Iyi gunler." : "Iyi geceler.";
	cout << sonuc;
}

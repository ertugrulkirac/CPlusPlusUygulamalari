// FonksiyonDizi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int sayilar[5];

	for (int i = 0; i < 6; i++)
	{
		cout << i + 1 << ". sayiyi giriniz:";
		cin >> sayilar[i];	 
	}

	cout << sayilar[0];
}

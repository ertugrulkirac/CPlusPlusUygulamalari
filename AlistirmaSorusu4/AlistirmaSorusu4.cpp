// AlistirmaSorusu4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int sayilar1[6];
	int sayilar2[6];

	for (int i = 0; i < 6; i++)
	{
		cout << i+1 <<". sayiyi giriniz:";
		cin >> sayilar1[i];
		sayilar2[i] = sayilar1[i] * sayilar1[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << sayilar2[i]<< endl;
	}

}


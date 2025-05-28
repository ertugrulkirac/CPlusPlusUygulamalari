// AlistirmaSorusu2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float sinav1, sinav2, sinav3, ortalama;
	cout << "Uc sinav notunu giriniz:";
	cin >> sinav1 >> sinav2 >> sinav3;
	ortalama = (sinav1 + sinav2 + sinav3) / 3;

	if (85<=ortalama)
	{
		cout << "Pekiyi";
	}
	else if (70 <= ortalama)
	{
		cout << "Iyi";
	}
	else if (50 <= ortalama)
	{
		cout << "Orta";
	}
	else
	{
		cout << "Kaldi";
	}

}


// CarpimTablosu.cpp : This file , contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	//for (int i = 1; i < 11; i++)
	//{
	//	for (int j = 1; j < 11; j++)
	//	{
	//		cout << i << "x" << j << "=" << i * j << endl;
	//	}
	//}
	//string ogrenciNo[] = { "202287281", "2022384834", "202184747", "2023947632", "202074736" };
	//int sinavNotlari[] = { 34,56,78, 95, 100 };

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << ogrenciNo[i] << " nolu ogrencinin notu :" << sinavNotlari[i] << "\n";
	//}
 // 


	int ogrenciNo[7];
	int sinavNotlari[7];

	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << "." << " ogrencinin numarasini giriniz:";
		cin >> ogrenciNo[i];
		cout << i + 1 << "." << " ogrencinin notu giriniz:";
		cin >> sinavNotlari[i];

	}

	for (int j = 0; j < 7; j++)
	{
		cout << ogrenciNo[j] <<  " nolu ogrencinin notu:" << sinavNotlari[j] <<"\n";
	}
}

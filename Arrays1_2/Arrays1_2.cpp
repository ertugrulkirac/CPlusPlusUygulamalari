// Arrays1_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	//string mevsimler[4] = { "yaz","sonbahar","kis", "ilkbahar" };
	//cout << mevsimler[0]<< endl;
	//cout << mevsimler[1] << endl;
	//cout << mevsimler[2] << endl;
	//cout << mevsimler[3] << endl;
  /*
	int sayilar[3] = { 10,20,30 };
	cout << sayilar[0] << endl;
	cout << sayilar[1] << endl;
	cout << sayilar[2] << endl;*/

	/*int sayilar[] = { 1,2,3,4,5 };
	cout << sayilar[3] << endl;
	sayilar[3] = 6;
	cout << sayilar[3];*/

	//float ondalikli[3] = { 1.1, 1.2, 1.3 };
	//cout << ondalikli[1];

	//string kelime = "GALATASARAY";
	//cout << kelime << endl;
	//cout<< kelime[0]<<endl;
	//cout << kelime[1]<< endl;
	//cout << kelime[2] << endl;
	//cout << kelime[3] << endl;
	//cout << kelime[4] << endl;
	//cout << kelime[5] << endl;
	//cout << kelime[6] << endl;
	//cout << kelime[7] << endl;
	//cout << kelime[8] << endl;
	//cout << kelime[9] << endl;
	//cout << kelime[10] << endl;

	//int sayilar[] = { 1,2,3,4,12,12,12,313,33,34,354,53,34,323,23,23,23,453 };

	//int diziUzunluk = sizeof(sayilar) / sizeof(int);

	//cout << diziUzunluk;

	//string aylar[] = { "ocak","þubat" ,"mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik" };

	//int diziuzunluk = sizeof(aylar) / sizeof(string);

	//for (int i = 0; i < diziuzunluk; i++)
	//{
	//	cout << aylar[i] << endl;
	//}

	int sayilar[5] = { 10, 35, 90, 77, 43 };
	int toplam = 0;

	for (int i = 0; i < 5; i++)
	{
		toplam = toplam + sayilar[i];
	
	}
	cout << toplam << endl;
	


}
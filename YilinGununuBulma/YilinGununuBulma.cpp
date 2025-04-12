// YilinGununuBulma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	//int gun;

	//string gunler[] = { "Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", "Pazar" };

	//cout << "Lutfen ogrenmek istediginiz gunu giriniz:";
	//cin >> gun;

	////int sonuc;

	////sonuc = gun % 7;

	////cout << gunler[sonuc-1];

	//cout << gunler[(gun % 7) - 1];

	//------------------------- havuz seans sorusu


	int seansSayisi;
	int periodMiktari;
	string baslangicGunu = "Pazartesi";
	cout << "Lütfen kaçýncý seansý merak ediyorsanýz onu yazýnýz:";
	cin >> seansSayisi;
	cout << "Lütfen period yazýnýz:";
	cin >> periodMiktari;

	string gunler[] = { "Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", "Pazar" };

	int toplamGun = (seansSayisi - 1) * periodMiktari;

	cout << gunler[(toplamGun % 7)];

}


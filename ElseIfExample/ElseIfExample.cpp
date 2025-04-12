// ElseIfExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Turkish");

	string haftaninGunu;

	cout << "Haftanýn gününü ilk harfi büyük olacak þekilde yazýnýz.";

	cin >> haftaninGunu;

	// Günün mönüsü: çorba, köfte, pilav

	if (haftaninGunu=="Pazartesi")
	{
		cout << "Çorba";

	}
	else if (haftaninGunu=="Sali")
	{
		cout << "Pilav";
	}
	else if (haftaninGunu=="Carsamba")
	{
		cout << "Dolma";
	}
	else if (haftaninGunu == "Persembe")
	{
		cout << "Makarna";
	}
	else if (haftaninGunu == "Cuma")
	{
		cout << "Salata";
	}
	else if (haftaninGunu == "Cumartesi")
	{
		cout << "Yoðurt";
	}
	else if (haftaninGunu == "Pazar")
	{
		cout << "Döner";

	}
	else
	{
		cout << "Haftanýn günlerini þu þekilde yazmanýz gerekir: Pazartesi, Salý, Çarþamba, Perþembe, Cuma, Cumartesi, Pazar ";
	}



}


// ElseIfExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Turkish");

	string haftaninGunu;

	cout << "Haftan�n g�n�n� ilk harfi b�y�k olacak �ekilde yaz�n�z.";

	cin >> haftaninGunu;

	// G�n�n m�n�s�: �orba, k�fte, pilav

	if (haftaninGunu=="Pazartesi")
	{
		cout << "�orba";

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
		cout << "Yo�urt";
	}
	else if (haftaninGunu == "Pazar")
	{
		cout << "D�ner";

	}
	else
	{
		cout << "Haftan�n g�nlerini �u �ekilde yazman�z gerekir: Pazartesi, Sal�, �ar�amba, Per�embe, Cuma, Cumartesi, Pazar ";
	}



}


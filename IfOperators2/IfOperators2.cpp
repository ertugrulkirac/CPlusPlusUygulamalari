// IfOperators2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{



	/*if (true)
	{
		cout << "Hello World!\n";
	}

	if (x>40)
	{
		cout << x << " sayisi 40'tan buyuktur.";
	}
	else
	{
		cout << x << " sayisi 40'tan kucuktur.";
	}*/

	int dersNotu = 90;

	if (90 < dersNotu && dersNotu < 100)
	{
		cout << "Notunuz:A";
	}
	else if (80 < dersNotu && dersNotu <= 90)
	{

		cout << "Notunuz:B";
	}
	else if (70 < dersNotu && dersNotu <= 80)
	{

		cout << "Notunuz:C";
	}
	else if (60 < dersNotu && dersNotu <= 70)
	{

		cout << "Notunuz:D";
	}
	else if (50 < dersNotu && dersNotu <= 60)
	{
		cout << "Notunuz:E";
	}
	else
	{
		cout << "Kaldiniz.";
	}

}

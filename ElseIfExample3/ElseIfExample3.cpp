// ElseIfExample3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{// dart game

	int x = 8;

	if (1 < x && x <= 4)
	{
		cout << "Hediye kazanamadýnýz.";
	}
	else if (5 <= x && x <= 7)
	{
		cout << "Az daha zorlayýn kazanacaksýnýz.";
	}
	else if (8 <= x && x <= 10)
	{
		cout << "Mini fan kazandýnýz.";
	}
	else if (x == 11)
	{
		cout << "Futbol topu kazandýnýz.";
	}
	else
	{
		cout << "Drone kazandýnýz.";
	}
}


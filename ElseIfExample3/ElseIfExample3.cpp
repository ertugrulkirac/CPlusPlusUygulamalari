// ElseIfExample3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{// dart game

	int x = 8;

	if (1 < x && x <= 4)
	{
		cout << "Hediye kazanamad�n�z.";
	}
	else if (5 <= x && x <= 7)
	{
		cout << "Az daha zorlay�n kazanacaks�n�z.";
	}
	else if (8 <= x && x <= 10)
	{
		cout << "Mini fan kazand�n�z.";
	}
	else if (x == 11)
	{
		cout << "Futbol topu kazand�n�z.";
	}
	else
	{
		cout << "Drone kazand�n�z.";
	}
}


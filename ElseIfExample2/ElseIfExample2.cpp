// ElseIfExample2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// dart game

	int x = 12;

	if (1 < x < 3)
	{
		cout << "Hediye kazanamadınız.";
	}
	else if (4 < x <6)
	{
		cout << "Hediye kazanamadınız.";
	}
	else if (8 < x < 10)
	{
		cout << "Hediye kazanamadınız.";
	}
	else
	{
		cout << "Drone kazandınız.";
	}
}


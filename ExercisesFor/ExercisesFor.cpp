// ExercisesFor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
	/*for (int i = 99; 3 <= i; i=i-2)
	{
		cout << i << endl;
	}*/
	int toplam = 0;

	for (int i = 101; i <= 476; i=i+5)
	{
		toplam = toplam + i;
	}
	cout << toplam;
}

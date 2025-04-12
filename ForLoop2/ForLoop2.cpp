// ForLoop2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	char dizi[] = "geeksforgeeks";
	char dizi2[] = { 'g', 'e','e' , 'k', 's', 'f','o', 'r', 'g', 'e','e','k', 's' };
	double count = 0;

	for (char n : dizi2)
	{
		cout << n << "  ";
		++count;
	}

	cout << "\nCount = " << count << endl;
}

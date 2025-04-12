// PointerKullanimi2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string bitki = "Papatya";
	cout << &bitki << endl;

	string* ptr = &bitki;
	cout << ptr << endl;

	cout << *ptr << endl;
	cout << &ptr << endl;

	string * ptr2 = ptr;

	cout << ptr2 << endl;

	cout << *ptr2 << endl;

	*ptr = "Gul";
	cout << *ptr2 << endl;
	cout << bitki << endl;
}


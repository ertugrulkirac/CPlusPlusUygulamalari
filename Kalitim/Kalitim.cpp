// Kalitim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A {
public:
	string ad = "Ertugrul";
	string soyad = "Kirac";
};

class B:public A {
public:
	int yas = 38;
};
int main()
{
	A nesne1;
	cout << nesne1.ad << endl;
	cout << nesne1.soyad<< endl;

	B nesne2;
	cout << nesne2.yas<< endl;
	cout << nesne2.ad ;
}

// PointerKullanimi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/* char* cp;
	 int* ip;
	 float* fp;
	 double* dp;*/

	//int sayi = 18;
	//cout << "Degisken degeri: " << sayi << endl;
	//cout << "Degisken adresi: " << &sayi << endl;

	// cout << endl;

	//int  *ptr = &sayi;
	//cout << "Pointer'in gosterdigi adres: " << ptr << endl;
	//cout << "Pointer'in gosterdigi adres degeri: " << *ptr << endl;
	//cout << "Pointer adresi: " << &ptr;

	//string food = "Pizza"; // A food variable of type string

	//cout << food << endl;  // Outputs the value of food (Pizza)
	//cout << &food << endl; // Outputs the memory address of food (000000BEA34FF538)

	//string* yiyecek = &food;
	//cout << yiyecek << endl;
	//cout << *yiyecek << endl;
	//cout << &yiyecek << endl;



	//string food = "Pizza";  // A food variable of type string
	//string *ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
	//string* ptr1 = &food;
	// Output the value of food (Pizza)
 /*   cout << food << "\n";*/

	// Output the memory address of food (0000006E6F3FF7B8)
 /*   cout << &food << "\n";*/

	 //Output the memory address of food with the pointer (0000006E6F3FF7B8)
	/*cout << ptr << "\n";
	cout << ptr1 << "\n";*/

	// Output the the value of food (Pizza)
	//cout << "ben :" << *ptr << "\n";
	//*ptr = "Karpuz";
	//cout << "yeni :"<< food << "\n";

	//string araba = "BMW";
	//string* ertugrul = &araba;
	//cout << ertugrul << "\n";
	//cout << *ertugrul << "\n";
	//*ertugrul = "Mercedes";
	//cout << *ertugrul;

	//string food = "Pizza";  
	//string* ptr = &food;   
	//string* ptr1 = ptr;
	//string *ptr2 = ptr1;
	//*ptr2 = "Kavun";
	//*ptr = "Karpuz";

	//cout << *ptr2 << "\n";  // ekrana ne yazar?
	//cout << *ptr1 << "\n";   // ekrana ne yazar?
	//cout << *ptr << "\n"; // ekrana ne yazar?
	//cout << food << "\n"; // ekrana ne yazar?

	
	string icecek = "Ayran";
	string* ptr = &icecek;
	string* ptr1 = ptr;

	*ptr = "Kola";

	cout << icecek << "\n"; 
	cout << *ptr << "\n";
	cout << *ptr1 << "\n";



	// Output the memory address of  the pointer (000000A78BFDFAC8)
	//cout << &ptr << "\n";
	//cout << &ptr1 << "\n";

	//string* mystring; //preferred
	//string *mystring;
	//string * mystring;
	return 0;

}

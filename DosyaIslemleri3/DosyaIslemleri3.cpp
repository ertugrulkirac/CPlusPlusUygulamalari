// DosyaIslemleri3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main()
{
	fstream dosya("veri.txt");

	//ofstream dosya1("veri.txt");
	//ifstream dosya2;
	//dosya2.open("veri.txt");

	//if (dosya1.is_open())
	//{
	//	dosya1 << "Yeni satir eklendi";
	//	//dosya2.seekg(0);
	//	dosya1.close();
	//	string satir;
	//	while (getline(dosya2, satir))
	//	{
	//		cout << satir << endl;
	//	}
	//}


	if (dosya.is_open())
	{
		dosya << "Yeni satir eklendi";
		dosya.seekg(0);
		dosya.close();
		string satir;
		while (getline(dosya, satir))
		{
			cout << satir << endl;
		}
	}


}

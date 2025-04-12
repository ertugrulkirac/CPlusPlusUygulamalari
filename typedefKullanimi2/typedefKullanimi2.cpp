// typedefKullanimi2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

typedef int tamsayi;
typedef tamsayi tams;
typedef tams yineben;

int main()
{
	int id1;

	tamsayi id2;
	tams id3;
	yineben id4;



	id1 = 3;
	id2 = 4;
	id3 = 11;


	cout << "id1 : " << id1 << endl << "id2 : " << id2 << endl << "id3 :  " << id3;

	return 0;
}
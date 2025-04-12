#include <iostream>
using namespace std;

int main()
{
	const int boyut = 10;
    char dizi[boyut];

	for (int i = 0; i < boyut; i++)
	{
		cout << i + 1 << ". karakteri giriniz:";
		cin >> dizi[i];
	}

	for (int i = 0; i < sizeof(dizi) / sizeof(char); i++)
	{
		cout << dizi[i];
	}
}

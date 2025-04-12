
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sehir = "Gaziantep";
	char dizi[] = { 'k', 'n', 't', 'f', 'i', 'a' };
	int count = 0;
	string karakter;


	for (int i = 0; i < sehir.length(); i++)
	{
		for (int j = 0; j < sizeof(dizi) / sizeof(char); j++)
		{
			if (sehir[i] == dizi[j])
			{
				if (karakter.find(dizi[j]))
				{
					karakter += dizi[j];
					count++;
				}
			}
		}

	}
	cout << count << endl;
	cout << karakter << endl;

}

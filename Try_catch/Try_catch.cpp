// Try_catch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

	// try block
	try {
		int pay;
		int payda;
		int sonuc;

		cout << "Bolunecek sayiyi (pay) giriniz :";
		cin >> pay;

		cout << "Bolen sayiyi (payda) giriniz :";
		cin >> payda;

		// throw runtime error.

		if (payda == 0) {
			throw runtime_error("Sayi sifira bolunemez.");
		}

		else if (isdigit(payda))
		{
			throw runtime_error("Hatali giris");
		}


		sonuc = pay / payda;

		cout << "Sonuc: " << sonuc << endl;
	}
	// catch block to catch the thrown exception
	catch (const exception& e) {
		// print the exception
		cout << "Exception " << e.what() << endl;
	}

	return 0;
}

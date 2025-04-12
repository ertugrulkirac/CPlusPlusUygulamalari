#include <iostream>
using namespace std;

int main() {

	int sayi1, sayi2, i, toplam;
	toplam = 0;
	bool asalMi = true;

	sayi1 = 7;
	sayi2 = 73;

	while (sayi1 < sayi2) {

		for (i = 2; i < sayi1; ++i) {
			if (sayi1 % i == 0) {
				asalMi = false;
				break;
			}
		}

		if (asalMi) {
			cout << sayi1 << ", ";
			toplam += sayi1*sayi1;

		}
		++sayi1;
	}

	cout << toplam;
	return 0;
}
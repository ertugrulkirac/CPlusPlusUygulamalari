// ClassPersonel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Personel {

public:
	string adi;
	string soyadi;
	string bolum;
	int maas;
	int girisYili;

	Personel(string adi_, string soyadi_, string bolum_, int maas_,int girisYili_) {
		adi = adi_;
		soyadi = soyadi_;
		bolum = bolum_;
		maas = maas_;
		girisYili = girisYili_;

	}

	void bilgiYazdir() {
		cout << "Adi:" << adi << endl;
		cout << "Soyadi:" << soyadi << endl;
		cout << "Bolum:" << bolum << endl;
		cout << "Maas:"<< maas << endl;
		cout << "Ise Giris Yili:" << girisYili;
	}
};

int main()
{

	Personel prsnlObj("Ertugrul","Kirac","Uretim",25000,2020);
	Personel prsnlObj1("X", "Y", "Z", 25000, 2020);
	prsnlObj.bilgiYazdir();
	prsnlObj1.bilgiYazdir();
}


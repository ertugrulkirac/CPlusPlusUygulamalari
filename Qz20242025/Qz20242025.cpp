// Qz20242025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Soru 1

/*sum = 0 olduðundan !sum ifadesi true olur.

|| (mantýksal VEYA) operatörü, ilk ifade true ise ikinci ifadeyi hiç çalýþtýrmaz.
Bu olaya short - circuit evaluation denir.*/

/*int main()
{

	int sum = 0, number1 = 5;
	if (!sum || --number1 == 0) {
		cout << "hello" << endl;
		cout << "number = " << number1 << endl;
	}
	return 0;

}

*/

//soru 2 

/*/int main()
{

	char ch;
	char title[] = "Sinema";
	ch = title[1];
	title[3] = ch;
	cout << title << endl;
	cout << ch << endl;
	return 0;
}*


//Soru 3

/*int main() {
	int a = 7, b = 3;
	int* p = &a;
	int* q = &b;
	*p = *q;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}*/

// soru 4

/*#include <iostream>
using namespace std;

void degistir(int* ptr) {
	*ptr = *ptr + 10;
}

int main() {
	int sayi = 20;
	degistir(&sayi);
	cout << "sayi = " << sayi << endl;
	return 0;
}*/


// soru5

/*int main()
{
	int p;
	bool a = true;
	bool b = false;
	int x = 10;
	int y = 5;
	p = ((x * y) + (a + b));
	cout << p;
}*/



// Soru6


/*class Ogrenci {
	string isim;
	int yas;
public:
	Ogrenci(string i, int y) : isim(i), yas(y) {
	
	}
	void bilgiGoster() { cout << isim << " - " << yas << endl; }
};

int main() {
	Ogrenci ogr("Ertuðrul", 38);
	ogr.bilgiGoster();
	return 0;
}  */

// Soru 7


/*int main() {
	int sayi;
	int faktoriyel = 1;

	cout << "Faktoriyeli alinacak sayiyi giriniz: ";
	cin >> sayi;

	if (sayi < 0) {
		cout << "Negatif sayilarin faktoriyeli tanimsizdir." << endl;
	}
	else {
		for (int i = 1; i <= sayi; i++) {
			faktoriyel *= i;
		}
		cout << sayi << "! = " << faktoriyel << endl;
	}

	return 0;
}
*/


// Soru 8
/*int main() {
	// Deðiþkenler
	float sinav1, sinav2, sinav3, ortalama;

	// Kullanýcýdan giriþ al
	cout << "1. sinav notunu giriniz: ";
	cin >> sinav1;

	cout << "2. sinav notunu giriniz: ";
	cin >> sinav2;

	cout << "3. sinav notunu giriniz: ";
	cin >> sinav3;

	// Aðýrlýklý ortalama hesapla
	ortalama = (sinav1 * 0.25) + (sinav2 * 0.25) + (sinav3 * 0.50);

	// Sonucu yazdýr
	cout << "Ortalamaniz: " << ortalama << endl;

	if (ortalama < 50)
		cout << "Sonuc: Kaldi" << endl;
	else
		cout << "Sonuc: Gecti" << endl;

	return 0;
}*/

// Soru 9

/*Kullanýcýdan 10 adet sayý alarak bu sayýlarý bir diziye aktaran
ve dizideki sayýlarýn toplamýný hesaplayýp ekrana yazdýran bir C++
programý yazýnýz.*/


/*int main() {
	const int boyut = 10;
	int sayilar[boyut];
	int toplam = 0;

	// Kullanýcýdan 10 sayý al
	for (int i = 0; i < boyut; i++) {
		cout << i + 1 << ". sayiyi giriniz: ";
		cin >> sayilar[i];
		toplam += sayilar[i];
	}

	// Toplamý yazdýr
	cout << "Girilen 10 sayinin toplami: " << toplam << endl;

	return 0;
}*/

// Soru 10


/*class Sekil {
public:
	virtual void ciz() {
		cout << "Bir þekil çiziliyor" << endl;
	}
};

class Kare : public Sekil {
public:
	void ciz() override {
		cout << "Kare çiziliyor" << endl;
	}
};

int main() {
	Sekil* s = new Kare();
	s->ciz();
	delete s;
	return 0;
}
*/


//Soru 5

/**/void sayac() {
	static int a = 1;
	a *= 2;
	cout << a << " ";
}

int main() {
	for (int i = 0; i < 3; i++) sayac();
	return 0;
}  //cevap:2 4 8









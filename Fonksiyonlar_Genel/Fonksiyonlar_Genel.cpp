// Fonksiyonlar_Genel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Topla(int x, int y, int z) {

	int sonuc = x + y + z;

	return sonuc;
}

int Carpim(int sayi1, int sayi2) {


	return sayi1 * sayi2;
}

double hacimHesapla(double yaricap, double yukseklik) {

	double pi = 3.14;

	return pi * yaricap * yaricap * yukseklik;
}

float hacimHesapla2(float yaricap, float yukseklik) {

	float pi = 3.14;

	return pi * yaricap * yaricap * yukseklik;
}

string hosGeldin(string ad, string soyad) {

	return "Hosgeldin " + ad + " " + soyad;
}

void hello() {

	cout << "Merhaba";
}

int Islem(int a, int b, int c) {

	return (a + b) * c;
}
int sum(int x) {
    return 5 + x;
}

double Ortalama(double vizeNotu, double finalNotu)
{
	return vizeNotu * 0.40 + finalNotu * 0.6;
}

int main()
{
	/*  int r, h;
	  cout << " Yaricap giriniz:";
	  cin >> r;

	  cout << " Yukseklik giriniz:";
	  cin >> h;*/

	//cout << "Toplam :" << Topla(4, 5, 1) << "\n";
	//cout << "Carpim :" << Carpim(8, 3) << "\n";
	//cout << "Silindir Hacmi :" << hacimHesapla(10, 10) << "\n";
	///*   cout << "Silindir Hacmi2 :" << hacimHesapla2(r, h) << "\n";*/

	//cout << hosGeldin("Ertugrul", "Kirac") << endl;
	//hello();


	//int x, y, z;

	//cout << " 1.sayiyi giriniz:";
	//cin >> x;

	//cout << " 2.sayiyi giriniz:";
	//cin >> y;

	//cout << " 3.sayiyi giriniz:";
	//cin >> z;

	//	cout << "(" << x << "+" << y <<")" << "*" << z << "="<<Islem(x, y, z);
		

	int vize_not, final_not;

	cout << "Vize notunuzu giriniz:"; 
	cin >> vize_not;

	cout << " Final notunuzu giriniz:";
	cin >> final_not;


	cout << "Vize :" << vize_not << ", Final:" << final_not <<", Ortalamaniz:" << Ortalama(vize_not, final_not);

}

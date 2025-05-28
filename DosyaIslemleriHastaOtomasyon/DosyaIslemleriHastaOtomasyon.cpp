
#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void hastaEkle() {
	string ad, soyad;
	int kimlikno;
	int tarih;
	ofstream dosya("hastalar.txt", ios::app);
	if (!dosya) {
		cout << "dosya acilamadi";
		return;
	}
	cout << "Ad:";
	cin >> ad;
	cout << "Soyad:";
	cin >> soyad;
	cout << "Kimlik:";
	cin >> kimlikno;
	cout << "Tarih:";
	cin >> tarih;
	dosya << ad << " " << soyad << " " << kimlikno << " " << tarih << " ";
	dosya.close();
	cout << "Hasta basariyla eklendi!" << endl;

}

void hastalistele() {
	ifstream dosya("hastalar.txt");
	string ad, soyad;
	int kimlikno;
	int tarih;
	if (!dosya) {
		cout << "dosya acilamadi";
	}
	cout << "__Hastalar__" << endl;
    while(dosya >> ad >> soyad >> kimlikno >> tarih) {
			cout << "Ad-Soyad:" << ad <<" "  << soyad <<" " << "Kimlik No:" << kimlikno <<" "<< "Dogum Tarihi:" << tarih << endl;
	}
	dosya.close();
}




int main()
{
	int secim;
	
	do
	{
		cout << "Secim yapiniz:\n 1.Hasta Ekle\n 2.Hasta Listele\n 3. Cikis\n";
		cout << "Secim:";
		cin >> secim;
		switch (secim)
		{
		case 1:
			hastaEkle();break;
		case 2:
			hastalistele();break;
		case 3:
			cout << "Cikiliyor";break;

		default:
			cout << "Gecersiz bir tercih yaptiniz";
			break;
		}
		
	} while (secim != 3);
	 
			return 0;

   }

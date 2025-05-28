// DosyaIslemleriOgrenciOtomasyon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void ogrenciEkle() {
    string ad, soyad;
    int numara;
    float ortalama;

    ofstream dosya("ogrenciler.txt", ios::app);
    if (!dosya) {
        cout << "Dosya açýlamadý!\n";
        return;
    }

    cout << "Ad: ";
    cin >> ad;
    cout << "Soyad: ";
    cin >> soyad;
    cout << "Numara: ";
    cin >> numara;
    cout << "Ortalama: ";
    cin >> ortalama;

    dosya << ad << " " << soyad << " " << numara << " " << ortalama << endl;
    dosya.close();

    cout << "Ogrenci basariyla eklendi.\n";
}

void ogrenciListele() {
    ifstream dosya("ogrenciler.txt");
    string ad, soyad;
    int numara;
    int yas;
    float ortalama;

    if (!dosya) {
        cout << "Dosya açýlamadý!\n";
        return;
    }

    cout << "--- Ogrenci Listesi ---\n";
    while (dosya >> ad >> soyad >> numara >> ortalama) {
        cout << "Ad-Soyad: " << ad << " " << soyad << " | Numara: " << numara << " | Ortalama: " << ortalama << endl;
    }

    dosya.close();
}

int main() {
    int secim;

    do {
        cout << "\n1. Ogrenci Ekle\n2. Ogrenci Listele\n0. Cikis\nSecim: ";
        cin >> secim;

        switch (secim) {
        case 1: ogrenciEkle(); break;
        case 2: ogrenciListele(); break;
        case 0: cout << "Cikiliyor...\n"; break;
        default: cout << "Gecersiz secim.\n";
        }
    } while (secim != 0);

    return 0;
}

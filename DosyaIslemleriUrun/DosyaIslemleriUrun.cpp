#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
using namespace std;

// �r�n ekleme fonksiyonu
void urunEkle() {
    string ad;
    double fiyat;
    int stok;

    ofstream dosya("urunler.txt", ios::app);
    if (!dosya) {
        cout << "Dosya a��lamad�!\n";
        return;
    }

    cout << "�r�n ad�: ";
    cin >> ad;
    cout << "Fiyat�: ";
    cin >> fiyat;
    cout << "Stok adedi: ";
    cin >> stok;

    dosya << ad << " " << fiyat << " " << stok << endl;
    dosya.close();

    cout << "�r�n ba�ar�yla eklendi.\n";
}

// �r�n listeleme fonksiyonu
void urunListele() {
    ifstream dosya("urunler.txt");
    string ad;
    double fiyat;
    int stok;

    if (!dosya) {
        cout << "Dosya a��lamad�!\n";
        return;
    }

    cout << "\n--- �r�n Listesi ---\n";
    while (dosya >> ad >> fiyat >> stok) {
        cout << "�r�n: " << ad << " | Fiyat: " << fiyat << " | Stok: " << stok << endl;
    }

    dosya.close();
}

// �r�n arama ve stok g�r�nt�leme fonksiyonu
int stokMiktar(const string& urunAd) {
    ifstream dosya("urunler.txt");
    string ad;
    double fiyat;
    int stok;
    bool bulundu = false;

    if (!dosya) {
        cout << "Dosya a��lamad�!\n";
        return -1;
    }

    while (dosya >> ad >> fiyat >> stok) {
        if (ad == urunAd) {
            cout << "\n " << ad << " bulundu. Stok Miktar�: " << stok << endl;
            bulundu = true;
            break;
        }
    }

    if (!bulundu)
        cout << "\n�r�n bulunamad�.\n";

    dosya.close();
    return bulundu ? stok : 0;
}

// Ana men�
int main() {
    setlocale(LC_ALL, "Turkish");

    int secim;
    string aranan;

    do {
        cout << "\n========== MEN� ==========\n";
        cout << "1. �r�n Ekle\n";
        cout << "2. �r�n Listele\n";
        cout << "3. �r�n Ara\n";
        cout << "0. ��k��\n";
        cout << "Se�iminiz: ";
        cin >> secim;

        switch (secim) {
        case 1: urunEkle(); break;
        case 2: urunListele(); break;
        case 3:
            cout << "Aramak istedi�iniz �r�n ad�n� girin: ";
            cin >> aranan;
            stokMiktar(aranan);
            break;
        case 0: cout << "��k�l�yor...\n"; break;
        default: cout << "Ge�ersiz se�im. L�tfen tekrar deneyin.\n";
        }
    } while (secim != 0);

    return 0;
}

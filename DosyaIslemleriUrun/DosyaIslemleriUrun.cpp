#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
using namespace std;

// Ürün ekleme fonksiyonu
void urunEkle() {
    string ad;
    double fiyat;
    int stok;

    ofstream dosya("urunler.txt", ios::app);
    if (!dosya) {
        cout << "Dosya açýlamadý!\n";
        return;
    }

    cout << "Ürün adý: ";
    cin >> ad;
    cout << "Fiyatý: ";
    cin >> fiyat;
    cout << "Stok adedi: ";
    cin >> stok;

    dosya << ad << " " << fiyat << " " << stok << endl;
    dosya.close();

    cout << "Ürün baþarýyla eklendi.\n";
}

// Ürün listeleme fonksiyonu
void urunListele() {
    ifstream dosya("urunler.txt");
    string ad;
    double fiyat;
    int stok;

    if (!dosya) {
        cout << "Dosya açýlamadý!\n";
        return;
    }

    cout << "\n--- Ürün Listesi ---\n";
    while (dosya >> ad >> fiyat >> stok) {
        cout << "Ürün: " << ad << " | Fiyat: " << fiyat << " | Stok: " << stok << endl;
    }

    dosya.close();
}

// Ürün arama ve stok görüntüleme fonksiyonu
int stokMiktar(const string& urunAd) {
    ifstream dosya("urunler.txt");
    string ad;
    double fiyat;
    int stok;
    bool bulundu = false;

    if (!dosya) {
        cout << "Dosya açýlamadý!\n";
        return -1;
    }

    while (dosya >> ad >> fiyat >> stok) {
        if (ad == urunAd) {
            cout << "\n " << ad << " bulundu. Stok Miktarý: " << stok << endl;
            bulundu = true;
            break;
        }
    }

    if (!bulundu)
        cout << "\nÜrün bulunamadý.\n";

    dosya.close();
    return bulundu ? stok : 0;
}

// Ana menü
int main() {
    setlocale(LC_ALL, "Turkish");

    int secim;
    string aranan;

    do {
        cout << "\n========== MENÜ ==========\n";
        cout << "1. Ürün Ekle\n";
        cout << "2. Ürün Listele\n";
        cout << "3. Ürün Ara\n";
        cout << "0. Çýkýþ\n";
        cout << "Seçiminiz: ";
        cin >> secim;

        switch (secim) {
        case 1: urunEkle(); break;
        case 2: urunListele(); break;
        case 3:
            cout << "Aramak istediðiniz ürün adýný girin: ";
            cin >> aranan;
            stokMiktar(aranan);
            break;
        case 0: cout << "Çýkýlýyor...\n"; break;
        default: cout << "Geçersiz seçim. Lütfen tekrar deneyin.\n";
        }
    } while (secim != 0);

    return 0;
}

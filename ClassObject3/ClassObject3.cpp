#include <iostream>
#include <string>
using namespace std;

// Sýnýf tanýmý
class Ogrenci {
public:
    // Veri üyeleri (özellikler)
    string isim;
    int yas;

    // Üye fonksiyonlar
    void bilgileriYazdir() {
        cout << "Isim: " << isim << ", Yas: " << yas << endl;
    }
    void adiYazdir() {
        cout << "Isim: " << isim << "\n";
    }

    void yasYazdir() {
        cout << "Yas: " << yas << "\n";
    }
};

int main() {
    // Nesne oluþturulmasý
    Ogrenci ogr1;
    ogr1.isim = "Ahmet";
    ogr1.yas = 21;

    Ogrenci ogr2;
    ogr2.isim = "Ertugrul";
    ogr2.yas = 38;

    // Fonksiyon çaðrýsý
    ogr1.bilgileriYazdir();
    ogr1.adiYazdir();
    ogr1.yasYazdir();

    ogr2.bilgileriYazdir();
    ogr2.adiYazdir();
    ogr2.yasYazdir();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// S�n�f tan�m�
class Ogrenci {
public:
    // Veri �yeleri (�zellikler)
    string isim;
    int yas;

    // �ye fonksiyonlar
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
    // Nesne olu�turulmas�
    Ogrenci ogr1;
    ogr1.isim = "Ahmet";
    ogr1.yas = 21;

    Ogrenci ogr2;
    ogr2.isim = "Ertugrul";
    ogr2.yas = 38;

    // Fonksiyon �a�r�s�
    ogr1.bilgileriYazdir();
    ogr1.adiYazdir();
    ogr1.yasYazdir();

    ogr2.bilgileriYazdir();
    ogr2.adiYazdir();
    ogr2.yasYazdir();

    return 0;
}

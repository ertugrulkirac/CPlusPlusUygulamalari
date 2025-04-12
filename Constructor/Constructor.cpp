#include <iostream>
#include <string>
using namespace std;

// Constructor(Kurucu Fonksiyon) ile S�n�f
// Kurucu fonksiyon, nesne olu�turulurken otomatik �al��an �zel bir fonksiyondur.

// S�n�f tan�m�

class Ogrenci {
public:
    string isim;
    int yas;

    // Constructor
    Ogrenci(string i, int y) {
        isim = i;
        yas = y;
    }

    void bilgileriYazdir() {
        cout << "�sim: " << isim << ", Ya�: " << yas << endl;
    }
};

int main() {
    Ogrenci ogr1("Zeynep", 22);  // Kurucu fonksiyonla de�er atama

    ogr1.bilgileriYazdir();

    return 0;
}

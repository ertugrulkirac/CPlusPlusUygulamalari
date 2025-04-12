#include <iostream>
#include <string>
using namespace std;

// Constructor(Kurucu Fonksiyon) ile Sýnýf
// Kurucu fonksiyon, nesne oluþturulurken otomatik çalýþan özel bir fonksiyondur.

// Sýnýf tanýmý

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
        cout << "Ýsim: " << isim << ", Yaþ: " << yas << endl;
    }
};

int main() {
    Ogrenci ogr1("Zeynep", 22);  // Kurucu fonksiyonla deðer atama

    ogr1.bilgileriYazdir();

    return 0;
}

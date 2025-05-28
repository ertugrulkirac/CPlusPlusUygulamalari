#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream dosya("kullanicilar.txt");
    string aranan, isim;
    int yas;
    bool bulundu = false;

    cout << "Aramak istedi�iniz ismi girin: ";
    cin >> aranan;

    if (!dosya) {
        cout << "Dosya a��lamad�!\n";
        return 1;
    }
    while (dosya >> isim >> yas) {
        if (isim == aranan) {
            cout << isim << " bulundu. Yas: " << yas << endl;
            bulundu = true;
            break;
        }
    }

    if (!bulundu)
        cout << "Kullan�c� bulunamad�.\n";
    dosya.close();
    return 0;
}

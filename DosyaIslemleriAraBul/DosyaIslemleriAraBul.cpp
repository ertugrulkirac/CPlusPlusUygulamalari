#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream dosya("kullanicilar.txt");
    string aranan, isim;
    int yas;
    bool bulundu = false;

    cout << "Aramak istediðiniz ismi girin: ";
    cin >> aranan;

    if (!dosya) {
        cout << "Dosya açýlamadý!\n";
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
        cout << "Kullanýcý bulunamadý.\n";
    dosya.close();
    return 0;
}

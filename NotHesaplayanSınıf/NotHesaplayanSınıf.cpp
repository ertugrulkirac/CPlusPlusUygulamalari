#include <iostream>
#include <string>
using namespace std;

class Ders {
private:
    string ad;
    int vize, final;

public:
    // Constructor
    Ders(string dersAdi, int v, int f) {
        ad = dersAdi;
        vize = v;
        final = f;
    }

    double ortalamaHesapla() {
        return vize * 0.4 + final * 0.6;
    }

    void yazdir() {
        cout << ad << " dersi ortalama: " << ortalamaHesapla() << endl;
    }
};

int main() {
    Ders d1("Matematik", 70, 80);
    d1.yazdir();
    return 0;
}

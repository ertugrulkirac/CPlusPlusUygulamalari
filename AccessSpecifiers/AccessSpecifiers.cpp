#include <iostream>
#include <string>
using namespace std;

class Kisi {
private:
    string sifre;

public:
    void sifreAyarla(string s) {
        sifre = s;
    }

    void sifreGoster() {
        cout << "Þifre: " << sifre << endl;
    }
};

int main()
{
    Kisi nesne; // new kullanmaya gerek yok
    nesne.sifreAyarla("12345");
    nesne.sifreGoster();

    return 0;
}

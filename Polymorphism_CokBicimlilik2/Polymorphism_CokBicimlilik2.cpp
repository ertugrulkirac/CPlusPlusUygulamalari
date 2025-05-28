// Çalýþma Zamaný(Dinamik) Çok Biçimlilik
// Bu tür çok biçimlilik sanallýk(virtual) kavramý ile saðlanýr.
// Genellikle kalýtým ve virtual function kullanýlarak gerçekleþtirilir.

//Örnek: Sanal Fonksiyon

#include <iostream>
using namespace std;

class Hayvan {
public:
    virtual void sesCikar() {
        cout << "Bir hayvan ses çýkarýyor..." << endl;
    }
};

class Kedi : public Hayvan {
public:
    void sesCikar() override {
        cout << "Miyav!" << endl;
    }
};

class Kopek : public Hayvan {
public:
    void sesCikar() override {
        cout << "Hav hav!" << endl;
    }
};

int main() {

    //Hayvan* h1	Hayvan türünden bir pointer(iþaretçi)
    //new Kedi()	Kedi nesnesi oluþtur ve adresini döndür
    //h1 = new Kedi()	Hayvan pointer’ýna Kedi nesnesinin adresini ata
    //h1->sesCikar()	Dinamik olarak Kedi’nin sesCikar() fonksiyonunu çaðýr

    Hayvan* h1 = new Kedi();
    Hayvan* h2 = new Kopek();

    h1->sesCikar(); // Miyav!
    h2->sesCikar(); // Hav hav!

    delete h1;
    delete h2;
    return 0;
}

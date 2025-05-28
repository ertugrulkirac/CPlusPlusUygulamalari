// �al��ma Zaman�(Dinamik) �ok Bi�imlilik
// Bu t�r �ok bi�imlilik sanall�k(virtual) kavram� ile sa�lan�r.
// Genellikle kal�t�m ve virtual function kullan�larak ger�ekle�tirilir.

//�rnek: Sanal Fonksiyon

#include <iostream>
using namespace std;

class Hayvan {
public:
    virtual void sesCikar() {
        cout << "Bir hayvan ses ��kar�yor..." << endl;
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

    //Hayvan* h1	Hayvan t�r�nden bir pointer(i�aret�i)
    //new Kedi()	Kedi nesnesi olu�tur ve adresini d�nd�r
    //h1 = new Kedi()	Hayvan pointer��na Kedi nesnesinin adresini ata
    //h1->sesCikar()	Dinamik olarak Kedi�nin sesCikar() fonksiyonunu �a��r

    Hayvan* h1 = new Kedi();
    Hayvan* h2 = new Kopek();

    h1->sesCikar(); // Miyav!
    h2->sesCikar(); // Hav hav!

    delete h1;
    delete h2;
    return 0;
}

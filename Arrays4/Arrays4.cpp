#include <iostream>
using namespace std;


void goster(int dizi[], int boyut) {

    cout << "Ogrenci Notlari: " << endl;
 
    for (int i = 0; i < boyut; ++i) {
        cout << i + 1 <<". Ogrencinin Notu "  << ": " << dizi[i] << endl;
    }
}

int main() {

    int ogrenciNotlari[] = { 88, 76, 90, 61, 69, 34, 56, 64, 23, 34, 37,25,54,36,25};
    int diziBoyutu = sizeof(ogrenciNotlari) / sizeof(int);
 

    goster(ogrenciNotlari, diziBoyutu);

    return 0;
}

//
//returnType functionName(dataType arrayName[]) {
//    // code
//    int diziLength = sizeof(ogrenciNotlari) / sizeof(int);
//}
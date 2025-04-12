// FonksiyonKullanimi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h> 
using namespace std;

double getAverage(int arr[], int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = sum / size;

    return avg;
}

//
//bool uyeVarmi(string mail, string sifre)
//{
//
//    bool durum = 0;
//    if (mail == "abcd@gmail.com" && sifre == "123") {
//        durum = 1;
//    }
//    return durum;
//}

//void ertugrul() {   // void: geriye deðer döndürmeyen metotlarý belirtmek için kullanýlýr.
//
//    cout << "bu benim fonksiyonum" << "\n";
//}
//
//
//string bilgiVer(string anneAdi, string bababAdi, string dogumYeri)
//{
//    string ad = "Kerem";
//    if (anneAdi == "Meryem" && bababAdi == "Mustafa" && dogumYeri == "Ankara") {
//        return ad;
//    }
//    return "bulunamadý";
//}
//
//int max(int x, int y)  
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//
//double HacimHesapla(double yaricap, double yukseklik) {
//    double sonuc;
//    sonuc = 3.14 * yaricap * yaricap * yukseklik;
//    return sonuc;
//}
//
//double Hesapla(double yaricap) {
//
//    float cevre = 2 * 3.14 * yaricap;
//
//    return cevre;
//}
//
//void myFunction(string name) {
//    cout << "Merhaba " << name << "\n";
//}
//
//void myFunction2(string name2, int age) {
//    cout << name2 << " person: " << age << " years old. \n";
//}
//
//int sum(int x) {
//    return 5 + x;
//}

int main()
{

 
    int dizi[5] = { 100,5, 25, 15, 50 };
    double ortalama;

    // pass pointer to the array as an argument.
    ortalama = getAverage(dizi, 5);

    // output the returned value 
    cout << "Ortalama : " << ortalama << endl;

    return 0;

    //myFunction("Ertugrul");
    //myFunction("Jenny");
    //myFunction("John");

    //myFunction2("Ertugrul", 21);
    //myFunction2("Jenny", 35);
    //myFunction2("John", 19);

    //int a = 12;
    //int b = 21;

    //double sayi1, sayi2;

    //cout << "Yarýçap giriniz:";
    //cin >> sayi1;

    //cout << "Yukseklik giriniz:";
    //cin >> sayi2;

    //cout << "Hesaplamak istediginiz silindirin hacimi : " << HacimHesapla(sayi1, sayi2);


    //int maximum = max(a, b);
    //
    //cout << "Maximum sayi: " << maximum << "\n";

    //cout << "Toplam: " << sum(3) << "\n";

    //ertugrul();

    //cout <<"Dairenin Cevresi : " << Hesapla(10);

    //cout<< bilgiVer("Meryem", "Mustafa", "Ankar");

    //return 0;

    //if (uyeVarmi("abcd@gmail.com", "123"))
    //{
    //    cout << "Hosgeldin XXX";
    //}
    //else
    //{
    //    cout << "mail adresiniz veya sifreniz yanlis";
    //}

    //double karekoku = sqrt(9);
    //cout << karekoku;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;
// <iostream> komutu kullan�c�dan veri al�r ve yazd�r�r. Input / output header
//Diyez(#) i�areti ile ba�layan komutlar "include" birle�eni, belirli bir kayna�� �a��rma g�revinde kullan�l�r.
//#include, daha �nceden haz�rlanan, standart veya kullan�c� taraf�ndan tan�mlanan dosyalarda saklanan,
//s�k kullan�lan veri ve fonksiyon bildirimlerini programa dahil etmede kullan�l�r.
int main()
{
   /*Burada her cout kullan�m�ndan �nce  "::" operat�r� ile compiler�a bu nesnenin 
    std namespace�i i�erisinde yer ald��� belirtilmi�tir*/
    //std::cout << "Hello World!";
    //std::cout << "Hello World!";
 /*   std::cout << "Merhaba\n";*/
    int sayi1 = 10;
    int sayi2 = 5;
    int sayi3 = 11;
    cout << sayi1 << "\n";
    cout << sayi2 << endl;
    cout << sayi3;
    /*  int sayi2 = 15;
    int sonuc;
    sonuc = sayi1 + sayi2;
    std::cout << sonuc << "\n";
    const double pi = 3.14;
    std::cout << "sonuc: " << 5 * pi << sonuc << "\n";
    const int sabitSayi{ 15 };
    std::cout << "sonuc: " << 2 * sabitSayi;*/

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

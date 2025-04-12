// StackKavrami.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std; //  Eðer programýmýz boyunca cout nesnesi çokça kullanýlacaksa, namespace tanýmlamasý
// programýn en basýnda yazýlýp tüm program boyunca bütün fonksiyonlardan eriþilmesine olanak saðlamýþ olur.

//27 3 15

int main()
{
    stack<int> s;
    cout << s.empty() << endl;  //stack boþ ise true (1) döner, boþ deðil ise false (0) döner.
    s.push(15);    // push(value) --> baþa deðer ekler.
    cout << s.empty() << endl; // Sonundaki endl komutu end line yani satýr sonu demektir ve 
    //ekrana yazdýrýlan çýktýnýn ardýndan görüntülenecek veriyi bir alt satýrda görüntülemeye yarar.
    s.push(3);
    s.push(27);
    cout << "Boyutu:"  << s.size() << "\n"; // size(), boyutu döndürür.
    cout << s.top() << "\n"; // en baþtaki eleman deðerini döndürür.
    s.pop(); // en baþtaki elemaný siler.
    cout << s.size() << "\n"; 
    cout << "En bastaki deger:" << s.top() << "\n"; // en baþtaki eleman deðerini döndürür.
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

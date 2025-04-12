// StackKavrami.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std; //  E�er program�m�z boyunca cout nesnesi �ok�a kullan�lacaksa, namespace tan�mlamas�
// program�n en bas�nda yaz�l�p t�m program boyunca b�t�n fonksiyonlardan eri�ilmesine olanak sa�lam�� olur.

//27 3 15

int main()
{
    stack<int> s;
    cout << s.empty() << endl;  //stack bo� ise true (1) d�ner, bo� de�il ise false (0) d�ner.
    s.push(15);    // push(value) --> ba�a de�er ekler.
    cout << s.empty() << endl; // Sonundaki endl komutu end line yani sat�r sonu demektir ve 
    //ekrana yazd�r�lan ��kt�n�n ard�ndan g�r�nt�lenecek veriyi bir alt sat�rda g�r�nt�lemeye yarar.
    s.push(3);
    s.push(27);
    cout << "Boyutu:"  << s.size() << "\n"; // size(), boyutu d�nd�r�r.
    cout << s.top() << "\n"; // en ba�taki eleman de�erini d�nd�r�r.
    s.pop(); // en ba�taki eleman� siler.
    cout << s.size() << "\n"; 
    cout << "En bastaki deger:" << s.top() << "\n"; // en ba�taki eleman de�erini d�nd�r�r.
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

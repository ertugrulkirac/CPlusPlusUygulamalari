// Derleme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int topla(int sayi1, int sayi2) {
    
    int sonuc = sayi1 + sayi2;
    return sonuc;
}

//void yazdir () {
//   
//    cout << "Merhaba" << "\n";
//}


//void yazdir2(string isim) {
//
//    cout << "Merhaba " + isim << "\n";
//}

int main()
{
    cout << topla(5,12) << endl; 
   /* yazdir();
    yazdir2("2");*/
}

//#include <iostream>
//int main() {
//    int i = 1;
//    int* ptr = &i;
//    std::cout << *ptr;
//    return 0;
//}

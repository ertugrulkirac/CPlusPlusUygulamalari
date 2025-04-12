// EnumerationD3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main()
{
    enum Cinsiyet { Erkek, Kadin };

    Cinsiyet cinsiyet = Erkek;

    switch (cinsiyet) {
    case Erkek:
        cout << "Cinsiyet :  Erkek";
        break;
    case Kadin:
        cout << "Cinsiyet :  Kadin";
        break;
    default:
        cout << "Cinsiyer Erkek veya Kadin olabilir.";
    }
    return 0;
}


//
//
//
//
//int main()
//{
//    enum Gender { Male, Female };
//
//    Gender gender = Male;
//
//    switch (gender) {
//    case Male:
//        cout << "Gender is Male";
//        break;
//    case Female:
//        cout << "Gender is Female";
//        break;
//    default:
//        cout << "Value can be Male or Female";
//    }
//    return 0;
//}

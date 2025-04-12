// ClassandObject2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Create a Car class with some attributes
class Ogrenci {
public:
    string ogrenciAdi;
    int ogrenciNo;
};

int main() {
    // Create an object of Car
    Ogrenci ogr;
    ogr.ogrenciAdi = "Ahmet";
    ogr.ogrenciNo = 121;
 

    // Print attribute values
    cout << ogr.ogrenciAdi << " " << ogr.ogrenciNo << " " << "\n";
    return 0;
}


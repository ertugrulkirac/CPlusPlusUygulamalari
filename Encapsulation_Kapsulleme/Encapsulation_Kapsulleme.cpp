// Encapsulation_Kapsulleme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//Kaps�llemenin(Encapsulation) anlam�, "hassas" verilerin kullan�c�lardan gizlendi�inden emin olmakt�r.

// Bunu yapmak i�in s�n�f de�i�kenlerini / niteliklerini private(s�n�f�n d���ndan eri�ilemez) olarak bildirmeniz gerekir.

// Ba�kalar�n�n �zel bir �yenin de�erini okumas�n� veya de�i�tirmesini istiyorsan�z, genel get ve set y�ntemlerini kullanabilirsiniz.

//�zel �yelere Eri�im

//�zel bir �zelli�e eri�mek i�in genel "get" ve "set" y�ntemlerini kullan�n :

#include <iostream>
#include "benimSinifim.h"
using namespace std;


int main() {
    
    benimSinifim snf;
    cout << snf.daireCevresi(5);
 
}

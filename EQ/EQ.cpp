#include <iostream>
using namespace std;

//soru 2 foksiyonu
int fonk(int a, int b) {
	if (a % 2 == 0)
		return a;
	else if (a % 3 == 0)
		return b;
	else
		return (a - b) * fonk(a - 2, b + 1);
}


int main()
{

	//Soru-1: Cevap: Döngü çalýþmaz
	/*for (int i = 10; i >= 50; i += 5)
	{
		cout << "Hello World!\n";
	}*/

	//Soru-2:  Cevap: "A" yazar
	//int x = 6, y = 5;
	//y *= x;
	//if (y > 5)
	//	cout << "A";
	//else if (y > 10)
	//	cout << "B";
	//else if (y > 15)
	//	cout << "C";
	//else if (y > 20)
	//	cout << "D";
	//else
	//	cout << "E";


		//soru-3 fonksiyon çaðýrma  cevap:36
	/*	cout << fonk(11, 5);*/



		//soru-4 fonksiyon çaðýrma  cevap:t=5
		//int a[9] = { 3,-4,5,2,-8,6,4,1,7 };
		//int i, t = 0;
		//for (i = 2; i < 10; i++) {
		//	t += a[i];
		//	if (t == i)
		//		break;
		//}
		//cout << "t = " << t; 

		//soru-5 cevap: Yalnýz 4


		//soru-6 cevap: 1
	/*	int a = 11, b = 1;
		while (a % 4 == 0) {
			b += a;
			a--;
		}
		cout << b;*/


		//soru-7 cevap: 112
	/*	int i, j, t = 0;
		for (i = 12; i > 0; i -= 5) {
			for (j = 2; j < 6; j++) {
				if (i % j == 0)t += i * j;
			}
		}
		cout << t; */


		//soru-8 cevap: 15
		/*int a = 7, b = 4, t = 0;
		while (a > b) {
			t += b;
			b++;
		}
		cout << "t=" << t;*/


		//soru-9 cevap: C


		//soru-10 cevap: C
	/*	int x = 3;
		while (x > 0)
		{
			cout << "x=" << x << endl;
			x--;
		}*/


		//soru-11 cevap: B
		/*int i = 1; while (i <= 5) { cout << "i=" << i << endl; i++; }*/

	//Soru 12
	//int i, j;
	//for (i = 1; i < 3; i++) {
	//	for (j = 0; j <= 3; j++) {
	//		if ((i + j) % 2 == 0) {
	//			cout << "X";
	//		}
	//		else {
	//			cout << "O";
	//		}
	//	}
	//	cout << endl;

	//}


	//Soru-12'nin cevabý i=5 ve j=5:
	//OXOXOX
	//XOXOXO
	//OXOXOX
	//XOXOXO   
	// eðer i=3 ve j=3 ise 
	//OXOX
	//XOXO


	//Soru-13 Cevap:2
	/*int a = 3, b = 2, c;
	c = (a < b) ? a : b;
	cout << c;*/

	//Soru-14
	//int sayi, faktoryel = 1;
	//cout << "Bir sayi giriniz :";
	//cin >> sayi;
	//while (sayi > 0) {
	//	faktoryel *= sayi;
	//	sayi--;
	//}
	//cout << "Faktoryel =" << faktoryel;

	//Soru-15  cevap:10
	int i, sayi = 48, a = 350;
	for (i = 2; i < 8; i++) {
		if (sayi % i == 0) continue;
		a /= i;
	}
	cout << "i=" << i << endl;
	cout << "sayi=" << sayi << endl;
	cout << "a=" << a << endl;

	//Soru-16  cevap:19
	//int sayfa = 10, okunansayfa = 0, gun = 0; 
	//while (okunansayfa < 1000) { 
	//	okunansayfa += sayfa;
	//	sayfa += 5; 
	//	gun++; 
	//} 
	//cout << gun << ". gun icinde kitap bitmis olur.";


}

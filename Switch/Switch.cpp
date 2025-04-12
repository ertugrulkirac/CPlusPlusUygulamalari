// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	// gün bazlý yemek listesi kontrolü
	//int haftaninGunu = 5;
	//switch (haftaninGunu) {
	//case 1:
	   // cout << "Pazartesi";
	   // break;
	//case 2:
	   // cout << "Sali";
	   // break;
	//case 3:
	   // cout << "Carsamba";
	   // break;
	//case 4:
	   // cout << "Persembe";
	   // break;
	//case 5:
	   // cout << "Cuma";
	   // break;
	//case 6:
	   // cout << "Cumartesi";
	   // break;
	//case 7:
	   // cout << "Pazar";
	   // break;
	//}

/*	 char haftaninGunu = 'J';
	 switch (haftaninGunu) {
	 case 'A':
		 cout << "Pazartesi";
		 break;
	 case 'B':
		 cout << "Sali";
		 break;
	 case 'C':
		 cout << "Carsamba";
		 break;
	 case 'D':
		 cout << "Persembe";
		 break;
	 case 'E':
		 cout << "Cuma";
		 break;
	 case 'F':
		 cout << "Cumartesi";
		 break;
	 case 'G':
		 cout << "Pazar";
		 break;
	 default:
		 cout << "Lutfen A,B,C,D,E,F veya G harflerinden birini seciniz.";
		 break;
	 }*/

	float sayi1;
	float sayi2;
	char islemTuru;
	
	cout << "Lutfen yapacaginiz islem turu icin operator giriniz:";

	cin >> islemTuru;

	cout << "Lutfen 1.sayiyi giriniz:";

	cin >> sayi1;

	cout << "Lutfen 2. sayiyi giriniz:";

	cin >> sayi2;

	switch (islemTuru) {
	case '+':
		cout << "Islem sonucunuz: " << sayi1 + sayi2;
		break;
	case '-':
		cout << "Islem sonucunuz: " << sayi1 - sayi2;
		break;
	case '*':
		cout << "Islem sonucunuz: " << sayi1 * sayi2;
		break;
	case '/':
		cout << "Islem sonucunuz: " << sayi1 / sayi2;
		break;
	default:
		cout << "Lutfen +,-,/ veya * islemlerinden birini seciniz.";
		break;
	}

	/*int sayi;
	cout << "1-12 arasi, 1 ve 12 dahil bir sayi giriniz:";
	cin >> sayi;
	switch (sayi) {

	case 1 :
		cout << "Ocak";
		break;
	case 2:
		cout << "Subat";
		break;
	case 3:
		cout << "Mart";
		break;
	case 4:
		cout << "Nisan";
		break;
	case 5:
		cout << "Mayis";
		break;
	case 6:
		cout << "Haziran";
		break;
	case 7:
		cout << "Temmuz";
		break;
	case 8:
		cout << "Agustos";
		break;
	case 9:
		cout << "Eylul";
		break;
	case 10:
		cout << "Ekim";
		break;
	case 11:
		cout << "Kasim";
		break;
	case 12:
		cout << "Aralik";
		break;
	default :
		cout << "Lütfen 1-12 arasý sayi giriniz.";
		break;

	}*/
}


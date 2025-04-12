// C++ program to illustrate Array Name as Pointers
#include <iostream>
using namespace std;


//void Goster()
//{
//  
//    int sayilar[3] = { 5, 10, 20 };
//
//    int* ptr;
//   
//    ptr = sayilar;
//
//    cout << "Elements of the array are: ";
//
//    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl;
//
//    for (int i = 0; i < 3; i++)
//    {
//        cout << ptr[i] << endl;
//        cout << &ptr[i] << endl;
//    }
//
//    cout << &sayilar << endl;
//    cout << ptr << endl;
//    cout << &ptr << endl;
//    cout << &ptr[0] << endl;
//    cout << &ptr[1] << endl;
//    cout << &ptr[2] << endl;
//}
// Driver program
//int main() 
//
//{
    //Goster();

    //char* ptr;

    //char Str[20] = "abcdefghi";

    //ptr = Str;

    //ptr += 5;

    //cout << ptr;

   /* int i;
    int* ptr = &i;

    cout << ptr;*/

    //int a = 5, b = 10, c = 15;
    //int* arr[] = { &a,&b,&c };
    //cout << *arr[1];
    //return 0;


    //string yemek = "Pilav";

    //yemek = "ejejfef";

    //string* ptr = &yemek;

    //cout << ptr << endl ;
    //cout << *ptr << endl;

    //*ptr = "Corba";

    //cout << yemek << endl;
    
   /* What is the correct way to declare a constant pointer to an integer in C++ ?

        int const* ptr;


    const int* const ptr;


    const int* ptr;

  
        int* const ptr;*/


//#include<iostream>
//    using namespace std;
//
    void updateValue(int* ptr) {
        *ptr = 20;
    }

    int main() {
        int var = 10;
        updateValue(&var);
        cout << var;
        return 0;
    }  //Wrong
  /*  10


        0

        Right
        20


        Garbage value*/


//}
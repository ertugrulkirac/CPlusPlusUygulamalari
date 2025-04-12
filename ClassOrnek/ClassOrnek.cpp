// ClassOrnek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class plant {
public:
    string name;
    int age;
    int leng;
};
int main()
{
    plant plantObj;
    plantObj.name = "cýnar";
    plantObj.age = 18;
    plantObj.leng = 200;
    cout << plantObj.name<<"\n"<< plantObj.age <<"\n"<< plantObj.leng << endl;
}


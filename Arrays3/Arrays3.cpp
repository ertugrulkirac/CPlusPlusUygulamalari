//D�ng� ��in Kullan�lan Dizi ��elerinin Toplam�n� ve Ortalamas�n� G�r�nt�leme

#include <iostream>
using namespace std;

int main() {

    double numbers[] = { 7, 5, 6, 12, 35, 27.5, 20 };

    double sum = 0;
    double count = 0;
    double average;

    cout << "The numbers are: ";
    //const double& 
    for (double n : numbers) {
        cout << n << "  ";

        sum += n;

        ++count;
    }

    cout << "\nSum = " << sum << endl;
    cout << "\nCount = " << count << endl;
    average = sum / count;
    cout << "Average = " << average << endl;

    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int valueA;
    int valueB;
    int Tong, Hieu;
    double Tich, Thuong;

    cout << "Enter the valueA =";
    cin >> valueA;
    cout << "Enter the valueB =";
    cin >> valueB;

    Tong= valueA +valueB;
    Hieu=valueA - valueB;
    Tich=valueA * valueB;
    Thuong=(double)valueA / valueB;

    cout << "valueOut With valueA + valueB = "<<Tong<<endl;
    cout << "valueOut With valueA - valueB = "<<Hieu<<endl;
    cout << "valueOut With valueA * valueB = "<<Tich<<endl;
    cout <<setprecision(3)<<"valueOut With valueA / valueB = "<<Thuong<<endl;

system("Pause");
return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(){


    double valueA, valueB; 
    double tong,hieu,tich,thuong;
    cout<<"Enter valueA =";
    cin>>valueA;
    cout<<"Enter valueB =";
    cin>>valueB;

    tong=valueA+valueB;
    hieu=valueA-valueB;
    tich=valueA*valueB;
    thuong = static_cast<double>(valueA)/(valueB);

    cout<<"tong ="<<tong<<endl;
    cout<<"hieu ="<<hieu<<endl;
    cout<<"tich ="<<tich<<endl;
    cout<<"thuong ="<<thuong<<endl;
    system("Pause");
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main (){
    //rectangles 1 hình chữ nhật 1
    int length1, width1, length2, width2;
    cout<<"------------------------------------"<<endl;
    cout<<"Enter lenght1 and width1 for rectangle 1 "<<endl;
    cout<<"Enter length 1 = ";cin>>length1;
    cout<<"Enter width 1 = ";cin>>width1;
    int rectangle1 =length1 + width1;
    cout<<"------------------------------------"<<endl;
    cout<<"Enter lenght2 and width2 for rectangle 2 "<<endl;
    cout<<"Enter length 2 = ";cin>>length2;
    cout<<"Enter width 2 = ";cin>>width2;
    int rectangle2 =length2 + width2;

    cout<<"------------------------------------"<<endl;
    if(rectangle1 == rectangle2)
    cout<<"Two rectangle is the same"<<endl;
    else
    cout<<"Two rectangle isn't the same"<<endl;
    cout<<"------------------------------------"<<endl;
}
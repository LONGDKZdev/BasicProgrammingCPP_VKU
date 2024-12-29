#include <bits/stdc++.h>
using namespace std;

int main (){
    cout<<"***Table convert money***"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"1.European Union (Euro)"<<endl;
    cout<<"2. Japanese (Yen)"<<endl;
    cout<<"3. British (Pound)"<<endl;
    cout<<"4. VietNamese (Dong)"<<endl;
    cout<<"-------------------------------"<<endl;
    //////////////////////////////////////////////
    cout<<"Enter number money (USD) to convert : ";
    double USD ;cin>>USD;
    cout<<endl;
    //////////////////////////////////////////////
    cout<<"Chose the number in table to convert (from 1 to 4) : ";
    int Chose;cin>>Chose;

    while(Chose < 1 || Chose > 4){
        cout<<"ERROR! Enter again "<<endl;
        cin>>Chose;
    }
    double Euro, Yen, Pound, Dong;

    switch(Chose){
        
        case 1:
        Euro = USD * 0.9144;
        cout<<USD<<" USD = "<<setprecision(3)<<Euro<<" Euro";
        break;
        case 2:
        Yen = USD * 149.1;
        cout<<USD<<" USD = "<<setprecision(3)<<Yen<<" Yen";
        break;
        case 3:
        Pound = USD * 0.7652;
        cout<<USD<<" USD = "<<setprecision(3)<<Pound<<" Pound";
        break;
        case 4:
        Dong = USD * 24.820;
        cout<<USD<<" USD = "<<setprecision(3)<<Dong<<" Dong";
        break;
    }

}
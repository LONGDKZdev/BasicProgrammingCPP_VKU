#include <bits/stdc++.h>
using namespace std;

int main (){
    int angleA,angleB,angleC;
    cout<<"Enter angleA = ";cin>>angleA;
    cout<<"Enter angleB = ";cin>>angleB;
    cout<<"Enter angleC = ";cin>>angleC;

    int valueCaculate = angleA + angleB + angleC;
    if( valueCaculate > 180 || valueCaculate <=0 || (angleA,angleB,angleC) <= 0 ){
        cout<<"ERROR!"<<endl;
    }
    else{
        cout<<"The triangle is valid"<<endl;
    }




}
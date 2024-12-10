#include<bits/stdc++.h>

using namespace std ;


// Deg: độ
// Rad: radian 
int main(){
    const double PI = 3.14;
    double Deg, Rad;
    cout<<"Enter Deg =";cin>>Deg;

    Rad = Deg *(PI/180);
    cout<<"-----------------"<<endl;
    cout<<"resul = Rad "<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Value of sin("<<Deg<<") = "<<setprecision(3)<<sin(Rad)<<endl;
    cout<<"Value of cos("<<Deg<<") = "<<setprecision(3)<<cos(Rad)<<endl;
    cout<<"Value of tan("<<Deg<<") = "<<setprecision(3)<<tan(Rad)<<endl;
    cout<<"Value of cot("<<Deg<<") = "<<setprecision(3)<<1/tan(Rad)<<endl;
////////////////////////////////////////////////////////////////////////////
cout<<"-----------------"<<endl;
cout<<"resul = Deg "<<endl;
cout<<"-----------------"<<endl;
    cout<<"Value of sin("<<Rad<<") = "<<setprecision(3)<<sin(Deg)<<endl;
    cout<<"Value of cos("<<Rad<<") = "<<setprecision(3)<<cos(Deg)<<endl;
    cout<<"Value of tan("<<Rad<<") = "<<setprecision(3)<<tan(Deg)<<endl;
    cout<<"Value of cot("<<Rad<<") = "<<setprecision(3)<<1/tan(Deg)<<endl;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int X =18,Y =2, A,B,C,E;
    double D;
    //////
    A=Y+3;
    B=Y-2;
    C=Y*5;
    D=X/Y;
    E=X%Y;
    //////
    cout<<"Gia tri X"<<setw(15)<<"Gia tri Y"<<setw(15)<<"Bieu thuc"<<setw(15)<<"Ket qua"<<endl;
    cout<<X<<"|"<<setw(13)<<Y<<"|"<<setw(18)<<"A=Y+3"<<setw(15)<<"|A="<<A<<endl;
    cout<<X<<"|"<<setw(13)<<Y<<"|"<<setw(18)<<"B=Y-2"<<setw(15)<<"|B="<<B<<endl;
    cout<<X<<"|"<<setw(13)<<Y<<"|"<<setw(18)<<"C=Y*5"<<setw(15)<<"|C="<<C<<endl;
    cout<<X<<"|"<<setw(13)<<Y<<"|"<<setw(18)<<"D=X/Y"<<setw(15)<<"|D="<<D<<endl;
    cout<<X<<"|"<<setw(13)<<Y<<"|"<<setw(18)<<"E=X%Y"<<setw(15)<<"|E="<<E<<endl;
system("Pause");
}
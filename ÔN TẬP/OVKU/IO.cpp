#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int R;
    double V = 0;
    const double Pi =3.14;
    cin>>R;
    if(R > 0 && R < 50){
        V = (4.0/3)*Pi*pow(R,3);
        cout<<fixed<<setprecision(2)<<V;
    }
    else{
    cout<<"N";
    }
}
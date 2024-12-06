#include <iostream>
using namespace std;

int main(){
    double a, b, c;
    cin>>a>>b>>c;
    if(a == b || a == c|| b == c){
        cout<<"N";
        }
    else{
    if((a > b && a < c) || (a > c && a < b) ){
        cout<<a;
        }
    if((b > c && b < a) || (b > a && b < c) ){
        cout<<b;
        }
    if((c > a && c < b) || (c > b && c < b) ){
        cout<<c;
        }
    }


}
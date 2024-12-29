#include <iostream>
using namespace std;

int main(){
    cout<<"enter value a =";
    int a;
    cin>> a;
    cout<<"value out = "<< static_cast <int>(a)<<endl;
    // hoặc dùng 
    cout<<"value out = "<<int(a)<<endl;
}
#include <iostream>
using namespace std;

double Value(int a){
    a = 5;
    return a;
}


int main(){
    int a;
    cout<<"Value out ="<<Value(a);
}
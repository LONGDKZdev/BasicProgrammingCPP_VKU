#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int i , valueIn, valueOut;
    cout<<"Enter value : ";
    cin>>valueIn;
    valueOut = 0;
    i =1;
    do
    {
        valueOut += i*i;
        i++;
    }
    while(i <=valueIn);

    for(int a = 1; a <=valueIn; a++){
        if(a < valueIn){
        cout<<"("<<a<<"*"<<a<<")+";
        }
        else if(a == valueIn){
            cout<<"("<<a<<"*"<<a<<")";
        }
    }
    cout<<" = "<<valueOut;
}
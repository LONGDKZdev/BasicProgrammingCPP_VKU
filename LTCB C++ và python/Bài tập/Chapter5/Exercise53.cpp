#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int i, valueOut , valueIn, n;
    cout<<"Enter value : ";
    cin>>valueIn;
    cout<<"Enter exponent :";
    cin>>n ;
    valueOut = 1;
    i =1;
    do
    {
        valueOut = valueOut * valueIn;
        i++;
    }
    while(i <=n);

    cout<<valueIn<<" Power of " << n << " is : "<<valueOut;
}
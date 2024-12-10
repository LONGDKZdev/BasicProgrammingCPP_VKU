#include <bits/stdc++.h>
using namespace std;

int main (){
    int valueIn;
    cout<<"Enter value = ";
    cin>>valueIn;
    
    if(valueIn <= 0 ){
        cout<<"ERROR!";
    }
    else{
        int i =valueIn;
    do{
        cout<<i<<" ";
        i--;
    }
    while(i >=1);
    }
}
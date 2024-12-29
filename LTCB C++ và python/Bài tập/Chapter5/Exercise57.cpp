#include <bits/stdc++.h>
using namespace std;

int main(){
    int valueIn;
    cout<<"Enter value : ";
    cin>>valueIn;
    int i = 2;
    int sum =0;
    
    if(valueIn < 1 && valueIn % 2 != 0){
        cout<<"ERROR!";
    }
    else{
    do{
        sum +=i;
        if(i != valueIn){
            cout<<i<<" + ";
        }
        else if(i == valueIn){
            cout<<i<<" = "<<sum;
        }
        i+=2;
        
    }
    while(i <= valueIn);
    }
    
}
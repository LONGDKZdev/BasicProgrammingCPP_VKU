#include <bits/stdc++.h>
using namespace std;

int main (){
    int value;
    cout<<" Enter value In = ";
    cin>>value;

    int i =2, valueOut = 0;
    while(i <= sqrt(value)){
        if(value % i == 0){
            valueOut ++;
        }
    i++;
    }
    cout<<endl;
    if(valueOut == 0 && valueOut > 1){
            cout<<valueOut<<" is Prime ";
    }
    else{
            cout<<valueOut<<" is Prime ";
    }
}
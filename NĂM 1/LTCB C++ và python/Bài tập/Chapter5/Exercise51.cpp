#include <bits/stdc++.h>
using namespace std;

int main(){
    int valueIn;
    cout<<"Enter value In = ";
    cin>>valueIn;
    int i, sum =0;
    for(int i =0 ; i <= valueIn; i++ ){
        sum += i;
    }
    cout<<"Sum form 1 to "<<valueIn<<" = "<<sum;
}
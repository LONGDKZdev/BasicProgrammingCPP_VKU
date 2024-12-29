#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, C,Sum =0 ;
    cout<<"Enter k (from 1 to 100) : ";
    cin>>k;
    if(k < 1 || k > 100 ){
            cout<<"N";
    }
    else{
        for(int i =1;i <= k;i++){
            Sum = Sum+i*(i + 1);
        }
        cout<<Sum;
    }
    return 0;

}
    //(1*2)+(2*3)+(3*4)+...
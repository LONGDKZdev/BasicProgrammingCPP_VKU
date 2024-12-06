#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, sumGT = 0, a;
    cin>>n;
    if(n > 0 && n <= 10){
        for(int a = 1; a <= n; a++){
            for(int i =1; i <= n; i++){
            a*=i;
            sumGT += i * a;
            }
        cout<<sumGT;
        }
    }
    else{
        cout<<"N"<<endl;
    }
}
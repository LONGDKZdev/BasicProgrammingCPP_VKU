#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n <= 2 || n >= 1000){
        cout<<"N";
        return 0;
    }
    
    for(int i=1; i <= n;i++){
        if(i % 2 == 0 || i % 3 == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n,sum=0,a=0;
    cin>>n;

    if(n <= 0 || n > 20){
        cout<<"N";
    }

    else{
    for(int i = 1;i <= n;i++){
            a = a + i;
            sum += i*a;
        }
    cout<<sum;
    }
}
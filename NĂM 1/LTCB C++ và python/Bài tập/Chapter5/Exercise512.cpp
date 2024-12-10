#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter limit fibonacci number : ";
    cin>>n;
    int F0 = 0, F1 =1,Fn;
    for(int i = 0;i <= n; i++){
    Fn =F0 +F1;
    F0 =F1;
    F1 = Fn;
    cout<<Fn<<" ";
    }

}
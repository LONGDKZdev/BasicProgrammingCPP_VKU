#include <iostream>
using namespace std;

int main(){
   int sum = 0, i,n;
cout<<"Nhap n : ";cin>>n;
   for(int i=1 ; i <=n; i++ ){
   if(i % 2 != 0){
      sum += i;
      }
   }
cout<<sum;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int x,n, i;
   int sum =0;
   cin>>x;
   cin>>n;
   if((x > 0 && x <= n) && (n >= 2 && n <= 10)){
      for(int i =1; i <= n; i++){
         sum += pow(x,(2*i));
      }
      cout<<sum;
   }
   else{
      cout<<"N";
   }
   
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int a,b,c;
   cin>>a;
   cin>>b;
   if((a >= -8 && a <= 8 ) && (b >= -8 && b <= 8) ){
      c = pow((3 - a), 2) + pow((4 - b),2);
      cout<<c;
   }
   else{
      cout<<"N";
   }
}
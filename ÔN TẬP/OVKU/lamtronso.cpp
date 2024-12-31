#include<iostream>
#include <iomanip>
#include<cmath>

using namespace std;

void Entervalue1(int a){
   cout<<"Enter value a :";
   cin>>a;
}

double Entervalue2(double b){
   cout<<"Enter value b :";
   cin>>b;
   return b; 
}

int main(){
   int a;
   double b;
Entervalue1(a);
Entervalue2(b);
cout<<fixed<<setprecision(3)<<pow(a,b);

}
#include <iostream>
using namespace std;

int main (){
   const int NUM_EMPLOYEES= 6;
   int hours[NUM_EMPLOYEES];
   int i;

   for(i=0; i < NUM_EMPLOYEES;i++){
      cout<<"Enter the hours worked by employee "<<(i+1)<<": ";
      cin>>hours[i];
   }

   cout<<"the hours you enterd are : "<<endl;
   for(i=0; i < NUM_EMPLOYEES;i++){
      cout<<" "<<hours[i]<<endl;
   }
}
#include <iostream>
using namespace std;

// void inputArray(int n , int arr[][20]){
//    for(int i=0;i < n;i++){
//       for(int j=0;j < n;j++){
//          cin>>arr[i][j];
//       }
//    }
// }

// chạy chương trình ở đây
int main(){
   int n, minEven_number;
   int arr[20][20];
   bool foundMin = false;
   cin>>n;
   if(n <= 0 || n > 10){
      cout<<"N";
   }
   else{
      for(int i=0;i < n;i++){
         for(int j=0;j < n;j++){
         cin>>arr[i][j];
      }
   }
      for(int i=0;i < n;i++){
         for(int j=0;j < n;j++){
            if(arr[i][j] % 2 == 0){
               if(!foundMin){
                  minEven_number = arr[i][j];
                  foundMin = true;
               }
               else if (arr[i][j] < minEven_number) {
                  minEven_number = arr[i][j];
               }
            }
         }
      }

      // hiển thị bảng 
/*
      cout<<"Show table array";
      for(int i=0;i < n;i++){
         for(int j=0;j < n;j++){
         cout<<arr[i][j]<<"  ";
      }
      cout<<endl;
   }
*/

      if(foundMin){
         cout<<minEven_number;
      }
      else if(!foundMin){
         cout<<"N";
      }
   }
}
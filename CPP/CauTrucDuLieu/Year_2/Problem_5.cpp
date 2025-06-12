#include <iostream>
using namespace std;


int LinearSearchMagicIndex(int arr[], int n) {
   for (int i = 0; i < n; i++) {
      if (arr[i] == i) {
            return i;
      }
   }
   return -1;
}

int main() {
   int arr[10];
   int limit, i;
   cout<<"Enter limit array : ";
   cin>>limit; 
   for(i =0;i < limit; i++ ){
      cin>>arr[i];
   }
   int n = sizeof(arr) / sizeof(arr[0]);
   
   int result = LinearSearchMagicIndex(arr, n);
   
   if (result != -1) {
      cout << "Satisfaction index a[i] = i is: " << result << endl;
   } else {
      cout << "No index exists that satisfies a[i] = i." << endl;
   }
   
   return 0;
}

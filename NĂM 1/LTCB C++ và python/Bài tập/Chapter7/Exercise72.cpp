#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
   int max = arr[0];
   for (int i = 1; i < size; i++) {
      if (arr[i] > max) {
            max = arr[i];
      }
   }
   return max;
}

int main() {
   int n;
   cout << "enter quantity into array  ";
   cin >> n;


   if (n <= 0) {
      cout << "value enter is invalid " << endl;
      return 1;
   }

   int arr[n];

   cout << "Enter value array :" << endl;
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   int maxElement = findMax(arr, n);
   cout << "The largest element in the array is: " << maxElement << endl;
   return 0;
}

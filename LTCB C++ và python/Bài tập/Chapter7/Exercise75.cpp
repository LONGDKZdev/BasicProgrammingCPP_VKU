#include <iostream>
#include <climits>
using namespace std;

double averageOfLargestAndSmallest(int arr[], int size) {
   int minVal = INT_MAX;
   int maxVal = INT_MIN;

   for (int i = 0; i < size; i++) {
      if (arr[i] < minVal) {
            minVal = arr[i];
      }
      if (arr[i] > maxVal) {
            maxVal = arr[i];
      }
   }
   return (minVal + maxVal) / 2.0;
}

int main() {
    int n;

   cout << "Enter the size of the array: ";
   cin >> n;

   if (n <= 0) {
      cout << "Invalid size!" << endl;
      return 1;
   }

   int arr[n];
   cout << "Enter the elements of the array:" << endl;
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   double result = averageOfLargestAndSmallest(arr, n);
   cout << "The average of the largest and smallest elements is: " << result << endl;
   return 0;
}

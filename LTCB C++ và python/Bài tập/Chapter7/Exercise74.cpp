#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
   int sum = 0;
   for (int i = 0; i < size; i++) {
      sum += arr[i];
   }
   return static_cast<double>(sum) / size;
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

   cout << "Array elements: ";
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   double average = calculateAverage(arr, n);
   cout << "The average of the array elements is: " << average << endl;

   return 0;
}
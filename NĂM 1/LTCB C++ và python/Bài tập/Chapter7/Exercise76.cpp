#include <iostream>
using namespace std;

void calculateAverages(int arr[], int size) {
   int evenSum = 0, oddSum = 0, evenCount = 0, oddCount = 0;

   for (int i = 0; i < size; i++) {
      if (arr[i] % 2 == 0) {
            evenSum += arr[i];
            evenCount++;
      } else {
            oddSum += arr[i];
            oddCount++;
      }
   }

   if (evenCount > 0)
      cout << "Average of even numbers: " << (double)evenSum / evenCount << endl;
   else
      cout << "No even numbers in the array." << endl;

   if (oddCount > 0)
      cout << "Average of odd numbers: " << (double)oddSum / oddCount << endl;
   else
      cout << "No odd numbers in the array." << endl;
}

int main() {
   int n;
   cout << "Enter the size of the array: ";
   cin >> n;

   int arr[n];
   cout << "Enter the elements of the array:" << endl;
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   calculateAverages(arr, n);

   return 0;
}

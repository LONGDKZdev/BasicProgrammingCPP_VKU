#include <bits/stdc++.h>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void inputArray(int* &arr, int n) {
   arr = new int[n]; 
   for (int i = 0; i < n; i++) {
        *(arr + i) = rand() % 10000; 
   }
}

void printArray(int* arr, int n) {
   for (int i = 0; i < n; i++) {
      cout << *(arr + i) << " ";
   }
   cout << endl;
}

void removeOddNumbers(int* &arr, int &n) {
   int countEven = 0; 

   for (int i = 0; i < n; i++) {
      if (*(arr + i) % 2 == 0) {
            countEven++;
      }
   }

   int* newArr = new int[countEven];
   int index = 0;

   for (int i = 0; i < n; i++) {    
      if (*(arr + i) % 2 == 0) {
            *(newArr + index) = *(arr + i);
            index++;
      }
   }

   delete[] arr;

   arr = newArr;
   n = countEven;
}

int main() {
   srand(time(0)); 

   int n;
   cout << "Enter the size of the array: ";
   cin >> n;

   int* arr = nullptr;

   inputArray(arr, n);

   cout << "Original array: ";
   printArray(arr, n);

   removeOddNumbers(arr, n);
   cout << "Array after removing odd numbers: ";
   printArray(arr, n);

   delete[] arr;

   return 0;
}

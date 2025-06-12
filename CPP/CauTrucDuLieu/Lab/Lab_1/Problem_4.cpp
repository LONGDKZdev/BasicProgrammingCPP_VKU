#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;



void inputArray(int*& arr, int& size) {
   cout << "Enter size of array: ";
   cin >> size;
   arr = new int[size];
   
   for (int i = 0; i < size; i++) {
      arr[i] = rand() % 100; 
   }
}

void printArray(int* arr, int size) {
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main() {
   int* arr;
   int size;
   
   inputArray(arr, size);
   cout << "Generated Array: ";
   printArray(arr, size);
   
   delete[] arr;
   return 0;
}

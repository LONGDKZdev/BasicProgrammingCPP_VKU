#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int arr[], int size) {
   unordered_map<int, int> countMap;

   for (int i = 0; i < size; i++) {
      countMap[arr[i]]++;
   }

   cout << "Duplicate elements: ";
   for (auto &pair : countMap) {
      if (pair.second > 1) {
         cout << pair.first << " ";
      }
   }
   cout << endl;
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

   findDuplicates(arr, n);

   return 0;
}

#include <iostream>
using namespace std;

void deleteElement(int arr[], int &size, int position) {
   if (position < 1 || position > size) {
      cout << "Invalid position!" << endl;
      return;
   }
   for (int i = position - 1; i < size - 1; i++) {
      arr[i] = arr[i + 1];
   }
   size--;
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

   int position;
   cout << "Enter the position to delete: ";
   cin >> position;

   deleteElement(arr, n, position);

   cout << "Array after deletion:" << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}

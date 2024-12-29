#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int &size) {
    unordered_set<int> seen;
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            arr[newSize++] = arr[i];
            seen.insert(arr[i]);
        }
    }
    size = newSize;
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

    removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

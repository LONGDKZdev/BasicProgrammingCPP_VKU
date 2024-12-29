#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int index, int newElement) {
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = newElement;
    size++;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n + 1];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index, newElement;
    cout << "Enter the index to insert the new element: ";
    cin >> index;
    cout << "Enter the new element: ";
    cin >> newElement;

    insertElement(arr, n, index, newElement);

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

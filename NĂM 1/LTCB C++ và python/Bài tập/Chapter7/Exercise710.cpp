#include <iostream>
using namespace std;

void multiplyArrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;

    int arr1[n], arr2[n];
    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    multiplyArrays(arr1, arr2, n);

    cout << "Array after multiplication: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}

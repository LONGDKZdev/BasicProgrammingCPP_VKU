#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (n > 0): ";
    cin >> n;

    int arr[50];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            count = 1;
        } else if (arr[i] == largest) {
            count++;
        }
    }

    // Display the array elements
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display the largest number and its occurrences
    cout << "Largest number: " << largest << endl;
    cout << "Occurrences: " << count << endl;

    return 0;
}

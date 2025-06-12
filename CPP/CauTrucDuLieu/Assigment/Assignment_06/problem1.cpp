#include <iostream>
using namespace std;

void linear_search() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int x = 4;
    for (int i = 0; i < 10; i++) {
        cout << "Checking A[" << i << "] = " << A[i] << endl;
        if (A[i] == x) {
            cout << "Found at index " << i << endl;
            break;
        }
    }
}

int main() {
    linear_search();
    return 0;
}

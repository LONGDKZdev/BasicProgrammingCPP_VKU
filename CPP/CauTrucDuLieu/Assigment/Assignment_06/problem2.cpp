#include <iostream>
using namespace std;

void binary_search() {
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int x = 4, l = 0, r = 9;
    while (l <= r) {
        int m = (l + r) / 2;
        cout << "Checking A[" << m << "] = " << A[m] << endl;
        if (A[m] == x) {
            cout << "Found at index " << m << endl;
            break;
        } else if (A[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
}

int main() {
    binary_search();
    return 0;
}

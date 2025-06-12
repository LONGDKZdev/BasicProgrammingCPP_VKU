#include <iostream>
using namespace std;

void insertion_sort() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    for (int i = 1; i < 10; i++) {
        int key = A[i], j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
        for (int k = 0; k < 10; k++) cout << A[k] << " ";
        cout << endl;
    }
}

void selection_sort() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    for (int i = 0; i < 9; i++) {
        int min_idx = i;
        for (int j = i + 1; j < 10; j++) {
            if (A[j] < A[min_idx]) min_idx = j;
        }
        swap(A[i], A[min_idx]);
        for (int k = 0; k < 10; k++) cout << A[k] << " ";
        cout << endl;
    }
}

void bubble_sort() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (A[j] > A[j + 1]) swap(A[j], A[j + 1]);
        }
        for (int k = 0; k < 10; k++) cout << A[k] << " ";
        cout << endl;
    }
}

int main() {
    insertion_sort();
    selection_sort();
    bubble_sort();
    return 0;
}

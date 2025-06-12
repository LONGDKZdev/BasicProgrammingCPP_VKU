#include <iostream>
using namespace std;

void print(int A[]) {
    for (int i = 0; i < 10; i++) cout << A[i] << " ";
    cout << endl;
}

int partition(int A[], int low, int high) {
    int pivot = A[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (A[j] < pivot) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[high]);
    print(A);
    return i + 1;
}

void quick_sort(int A[], int low, int high) {
    if (low < high) {
        int pi = partition(A, low, high);
        quick_sort(A, low, pi - 1);
        quick_sort(A, pi + 1, high);
    }
}

void merge(int A[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[10], R[10];
    for (int i = 0; i < n1; i++) L[i] = A[l + i];
    for (int j = 0; j < n2; j++) R[j] = A[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) A[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) A[k++] = L[i++];
    while (j < n2) A[k++] = R[j++];
    print(A);
}

void merge_sort(int A[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, r);
        merge(A, l, m, r);
    }
}

int main() {
    int A1[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    quick_sort(A1, 0, 9);

    int A2[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    merge_sort(A2, 0, 9);

    return 0;
}

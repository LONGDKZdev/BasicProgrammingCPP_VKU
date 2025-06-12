#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

const int SIZE = 1000;
int A[SIZE];

void generate_data() {
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 10000 + 1;
    }
}

void print_array() {
    for (int i = 0; i < SIZE; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void copy_array(int dest[], int src[]) {
    for (int i = 0; i < SIZE; i++) dest[i] = src[i];
}

void insertion_sort(int arr[]) {
    for (int i = 1; i < SIZE; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selection_sort(int arr[]) {
    for (int i = 0; i < SIZE - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

void bubble_sort(int arr[]) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int linear_search(int x) {
    for (int i = 0; i < SIZE; i++) {
        if (A[i] == x) return i;
    }
    return -1;
}

int binary_search(int x) {
    int l = 0, r = SIZE - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (A[m] == x) return m;
        if (A[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    generate_data();

    int temp[SIZE];
    ofstream out("SortingTime.txt");

    copy_array(temp, A);
    auto start = high_resolution_clock::now();
    insertion_sort(temp);
    auto end = high_resolution_clock::now();
    out << "Insertion Sort: " << duration_cast<milliseconds>(end - start).count() << " ms\n";

    copy_array(temp, A);
    start = high_resolution_clock::now();
    selection_sort(temp);
    end = high_resolution_clock::now();
    out << "Selection Sort: " << duration_cast<milliseconds>(end - start).count() << " ms\n";

    copy_array(temp, A);
    start = high_resolution_clock::now();
    bubble_sort(temp);
    end = high_resolution_clock::now();
    out << "Bubble Sort: " << duration_cast<milliseconds>(end - start).count() << " ms\n";

    sort(A, A + SIZE);
    int x;
    cout << "Enter number to search: ";
    cin >> x;
    cout << "Linear Search: " << linear_search(x) << endl;
    cout << "Binary Search: " << binary_search(x) << endl;

    out.close();
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> heap;

void heapifyVector(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapifyVector(arr, n, largest);
    }
}

void heapify(int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;
    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(n, largest);
    }
}

void buildMaxHeap() {
    int n = heap.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(n, i);
}

void insert(int value) {
    heap.push_back(value);
    buildMaxHeap();
}

void deleteElement(int value) {
    int n = heap.size();
    auto it = find(heap.begin(), heap.end(), value);
    if (it != heap.end()) {
        int idx = it - heap.begin();
        swap(heap[idx], heap[n - 1]);
        heap.pop_back();
        buildMaxHeap();
    } else {
        cout << "Element not found.\n";
    }
}

void heapSortDescending() {
    vector<int> temp = heap;
    int n = temp.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyVector(temp, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(temp[0], temp[i]);
        heapifyVector(temp, i, 0);
    }

    cout << "Sorted in descending order: ";
    for (int i = n - 1; i > 0; i--)
        cout << temp[i] << " ";
    cout << endl;
}

void printHeap() {
    cout << "Heap: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}

int main() {
    int initial[] = {45, 36, 54, 27, 63, 72, 61, 18};
    heap.assign(initial, initial + 8);
    buildMaxHeap();

    printHeap();

    insert(80);
    cout << "After insertion:\n";
    printHeap();

    deleteElement(36);
    cout << "After deletion:\n";
    printHeap();

    heapSortDescending();

    return 0;
}

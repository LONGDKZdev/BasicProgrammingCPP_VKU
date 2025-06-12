#include <iostream>
#include <vector>
using namespace std;

void heapifyUp(vector<int>& heap, int index) {
    while (index > 0 && heap[(index - 1)/2] > heap[index]) {
        swap(heap[(index - 1)/2], heap[index]);
        index = (index - 1)/2;
    }
}

void heapifyDown(vector<int>& heap, int index) {
    int n = heap.size();
    int smallest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if (left < n && heap[left] < heap[smallest])
        smallest = left;
    if (right < n && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != index) {
        swap(heap[index], heap[smallest]);
        heapifyDown(heap, smallest);
    }
}

void insertMinHeap(vector<int>& heap, int value) {
    heap.push_back(value);
    heapifyUp(heap, heap.size() - 1);
}

int removeMin(vector<int>& heap) {
    if (heap.empty()) return -1;
    int minVal = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(heap, 0);
    return minVal;
}

int peekMin(const vector<int>& heap) {
    return heap.empty() ? -1 : heap[0];
}

void buildMinHeap(vector<int>& arr) {
    for (int i = arr.size()/2 - 1; i >= 0; i--)
        heapifyDown(arr, i);
}

vector<int> heapSortDescending(vector<int> arr) {
    buildMinHeap(arr);
    vector<int> sorted;
    while (!arr.empty()) {
        sorted.insert(sorted.begin(), arr[0]);
        arr[0] = arr.back();
        arr.pop_back();
        heapifyDown(arr, 0);
    }
    return sorted;
}

void printVector(const vector<int>& v) {
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main() {
    vector<int> heap = {12, 20, 32, 50, 43, 52, 61, 64}; 

    // a) 
    cout << "Insert 10:\n";
    insertMinHeap(heap, 10);
    printVector(heap);

    // b) 
    cout << "RemoveMin:\n";
    int minRemoved = removeMin(heap);
    cout << "Removed: " << minRemoved << endl;
    printVector(heap);

    // c) 
    cout << "Peek: " << peekMin(heap) << endl;

    // d) 
    vector<int> original = {12, 20, 32, 50, 43, 52, 61, 64};
    vector<int> sorted = heapSortDescending(original);
    cout << "Heap sort (descending):\n";
    printVector(sorted);

    return 0;
}

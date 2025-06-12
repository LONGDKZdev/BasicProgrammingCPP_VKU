#include <iostream>
#include <vector>
using namespace std;

void heapifyUp(vector<int>& heap, int index) {
    while (index > 0 && heap[(index - 1)/2] < heap[index]) {
        swap(heap[(index - 1)/2], heap[index]);
        index = (index - 1)/2;
    }
}

void heapifyDown(vector<int>& heap, int index) {
    int n = heap.size();
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;
    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapifyDown(heap, largest);
    }
}

void insertMaxHeap(vector<int>& heap, int value) {
    heap.push_back(value);
    heapifyUp(heap, heap.size() - 1);
}

int removeMax(vector<int>& heap) {
    if (heap.empty()) return -1;
    int maxVal = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(heap, 0);
    return maxVal;
}

void printHeap(const vector<int>& heap) {
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}

int main() {
    vector<int> heap;


    for (int i = 1; i <= 10; ++i)
        insertMaxHeap(heap, i);

    cout << "Heap after inserting 1-10:\n";
    printHeap(heap);


    cout << "Removing 3 elements:\n";
    for (int i = 0; i < 3; ++i) {
        int removed = removeMax(heap);
        cout << "Removed: " << removed << endl;
    }

    cout << "Heap after 3 removals:\n";
    printHeap(heap);

    return 0;
}

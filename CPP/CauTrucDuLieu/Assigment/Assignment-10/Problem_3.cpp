#include <iostream>
#include <list>
using namespace std;

const int SIZE = 5;
list<int> hashTable[SIZE];

void insert(int key) {
    int index = key % SIZE;
    hashTable[index].push_back(key);
}

void printTable() {
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": ";
        for (int val : hashTable[i])
            cout << val << " ";
        cout << endl;
    }
}

int main() {
    int keys[] = {2, 7, 6, 12, 23, 11, 22, 19, 1, 3, 5, 32, 4, 9, 15};
    for (int key : keys) insert(key);
    printTable();
    return 0;
}

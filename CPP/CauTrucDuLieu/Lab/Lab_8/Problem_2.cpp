#include <iostream>
#include <list>
using namespace std;

const int TABLE_SIZE = 9;
list<int> hashTable[TABLE_SIZE];

int hashFunc(int key) {
    return key % TABLE_SIZE;
}

void addNumber(int key) {
    int index = hashFunc(key);
    hashTable[index].push_back(key);
}

void printTable() {
    cout << "\nHash Table:\n";
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << ": ";
        for (int val : hashTable[i])
            cout << val << " ";
        cout << endl;
    }
}

void searchNumber(int key) {
    int index = hashFunc(key);
    for (int val : hashTable[index]) {
        if (val == key) {
            cout << "Found " << key << " at index " << index << endl;
            return;
        }
    }
    cout << key << " not found!\n";
}

void deleteNumber(int key) {
    int index = hashFunc(key);
    hashTable[index].remove(key);
    cout << "Deleted " << key << " from index " << index << endl;
}

int main() {
    addNumber(10);
    addNumber(19);
    addNumber(28);
    addNumber(20);
    printTable();
    searchNumber(19);
    deleteNumber(10);
    printTable();
    return 0;
}

#include <iostream>
using namespace std;

const int SIZE = 10;
int hashTable[SIZE];

void insert(int key) {
    int index = key % SIZE;
    int i = 0;
    while (hashTable[(index + i) % SIZE] != -1) i++;
    hashTable[(index + i) % SIZE] = key;
}

int main() {
    fill(hashTable, hashTable + SIZE, -1);
    int keys[] = {17, 12, 26, 42, 23, 18, 22, 9, 16, 35, 15};
    for (int key : keys) insert(key);
    
    cout << "Hash Table (Linear Probing):\n";
    for (int i = 0; i < SIZE; i++) cout << i << ": " << hashTable[i] << endl;
    return 0;
}

#include <iostream>
using namespace std;

const int SIZE = 11;
int table[SIZE];

int customHash(int key) {
    int x = (key + 7) * (key + 7);
    x = x / 16;
    x = x + key;
    return x % SIZE;
}

void linearInsert(int key) {
    int index = customHash(key);
    int i = 0;
    while (table[(index + i) % SIZE] != -1) i++;
    table[(index + i) % SIZE] = key;
}

void quadraticInsert(int key) {
    int index = customHash(key);
    int i = 0;
    while (table[(index + (i * i + i) / 2) % SIZE] != -1) i++;
    table[(index + (i * i + i) / 2) % SIZE] = key;
}

void printTable() {
    for (int i = 0; i < SIZE; i++) cout << i << ": " << table[i] << endl;
}

int main() {
    int keys[] = {17, 12, 26, 42, 23};

    cout << "Linear Probing:\n";
    fill(table, table + SIZE, -1);
    for (int key : keys) linearInsert(key);
    printTable();

    cout << "\nQuadratic Probing:\n";
    fill(table, table + SIZE, -1);
    for (int key : keys) quadraticInsert(key);
    printTable();

    return 0;
}

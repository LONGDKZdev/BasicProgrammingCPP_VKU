#include <iostream>
#include <string>
using namespace std;

const int TABLE_SIZE = 10;

struct Product
{
    int code;
    string name;
    float price;
    bool isEmpty;
    bool isDeleted;
};

Product hashTable[TABLE_SIZE];

int hashFunc(int key)
{
    return key % TABLE_SIZE;
}

void initTable()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hashTable[i].isEmpty = true;
        hashTable[i].isDeleted = false;
    }
}

void addProduct(int code, string name, float price)
{
    int index = hashFunc(code);
    int i = 0;
    while (i < TABLE_SIZE)
    {
        int newIndex = (index + i) % TABLE_SIZE;
        if (hashTable[newIndex].isEmpty || hashTable[newIndex].isDeleted)
        {
            hashTable[newIndex] = {code, name, price, false, false};
            cout << "Product added at index " << newIndex << endl;
            return;
        }
        i++;
    }
    cout << "Hash table is full!\n";
}

void printProducts()
{
    cout << "\nProduct List:\n";
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (!hashTable[i].isEmpty && !hashTable[i].isDeleted)
        {
            cout << "Index " << i << ": Code = " << hashTable[i].code
                << ", Name = " << hashTable[i].name
                << ", Price = " << hashTable[i].price << endl;
        }
    }
}

void searchProduct(int code)
{
    int index = hashFunc(code);
    int i = 0;
    while (i < TABLE_SIZE)
    {
        int newIndex = (index + i) % TABLE_SIZE;
        if (hashTable[newIndex].isEmpty)
            break;
        if (!hashTable[newIndex].isDeleted && hashTable[newIndex].code == code)
        {
            cout << "Product found at index " << newIndex << ": " << hashTable[newIndex].name << endl;
            return;
        }
        i++;
    }
    cout << "Product not found!\n";
}

void deleteProduct(int code)
{
    int index = hashFunc(code);
    int i = 0;
    while (i < TABLE_SIZE)
    {
        int newIndex = (index + i) % TABLE_SIZE;
        if (hashTable[newIndex].isEmpty)
            break;
        if (!hashTable[newIndex].isDeleted && hashTable[newIndex].code == code)
        {
            hashTable[newIndex].isDeleted = true;
            cout << "Product deleted from index " << newIndex << endl;
            return;
        }
        i++;
    }
    cout << "Product not found to delete!\n";
}

int main()
{
    initTable();
    addProduct(10001, "Sugar", 50000);
    addProduct(10002, "Salt", 7500);
    addProduct(10003, "Rice", 15000);
    addProduct(10004, "Fish sauce", 30000);

    printProducts();
    searchProduct(10003);
    deleteProduct(10002);
    printProducts();
    return 0;
}

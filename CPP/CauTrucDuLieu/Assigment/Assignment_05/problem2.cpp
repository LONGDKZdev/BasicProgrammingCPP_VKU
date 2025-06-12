#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string data;
    Node *next;
};

Node *front = nullptr;
Node *rear = nullptr;

void enqueue(string name)
{
    Node *temp = new Node{name, nullptr};
    if (rear == nullptr)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue()
{
    if (front == nullptr)
        return;
    Node *temp = front;
    front = front->next;
    if (front == nullptr)
        rear = nullptr;
    delete temp;
}

void display()
{
    Node *temp = front;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    enqueue("Alice");
    enqueue("Bob");
    enqueue("Charlie");
    dequeue();
    display();
    return 0;
}

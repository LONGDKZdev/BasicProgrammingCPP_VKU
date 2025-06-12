#include <iostream>
using namespace std;

const int SIZE = 100;
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x)
{
    if (rear == SIZE - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = x;
}

int dequeue()
{
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

void reverse()
{
    int start = front, end = rear;
    while (start < end)
    {
        int temp = queue[start];
        queue[start] = queue[end];
        queue[end] = temp;
        start++;
        end--;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    reverse();
    display();
    return 0;
}

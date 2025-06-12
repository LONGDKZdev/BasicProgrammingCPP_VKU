#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() : head(nullptr) {}

    void addFirst(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addLast(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    void deleteFirst() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteLast() {
        if (!head) return;
        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    bool searchValue(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }
        return false;
    }

    int searchPosition(int pos) {
        int index = 0;
        Node* temp = head;
        while (temp) {
            if (index == pos)
                return temp->data;
            index++;
            temp = temp->next;
        }
        return -1; // not found
    }

    void deleteAt(int pos) {
        if (pos < 0 || !head) return;
        if (pos == 0) {
            deleteFirst();
            return;
        }
        Node* temp = head;
        for (int i = 0; temp && i < pos - 1; i++)
            temp = temp->next;
        if (!temp || !temp->next) return;
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    void insertAt(int pos, int val) {
        if (pos < 0) return;
        if (pos == 0) {
            addFirst(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; temp && i < pos - 1; i++)
            temp = temp->next;
        if (!temp) return;
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void append(SinglyLinkedList& other) {
        if (!head) {
            head = other.head;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = other.head;
    }

    static SinglyLinkedList mergeSorted(SinglyLinkedList& l1, SinglyLinkedList& l2) {
        SinglyLinkedList result;
        Node* dummy = new Node(0);
        Node* tail = dummy;

        Node* a = l1.head;
        Node* b = l2.head;

        while (a && b) {
            if (a->data <= b->data) {
                tail->next = new Node(a->data);
                a = a->next;
            } else {
                tail->next = new Node(b->data);
                b = b->next;
            }
            tail = tail->next;
        }

        while (a) {
            tail->next = new Node(a->data);
            a = a->next;
            tail = tail->next;
        }

        while (b) {
            tail->next = new Node(b->data);
            b = b->next;
            tail = tail->next;
        }

        result.head = dummy->next;
        delete dummy;
        return result;
    }
};

int main() {
    SinglyLinkedList p, p1, p2;

    p.addFirst(5);
    p.addLast(10);
    p.addLast(15);
    p.printList();
    p.deleteFirst();
    p.deleteLast();
    p.printList();
    p.insertAt(1, 99);
    p.printList();
    cout << "Number of nodes: " << p.countNodes() << endl;
    cout << "Search 99: " << (p.searchValue(99) ? "Found" : "Not Found") << endl;
    cout << "Value at position 1: " << p.searchPosition(1) << endl;

    p1.addLast(1);
    p1.addLast(3);
    p1.addLast(5);
    p2.addLast(2);
    p2.addLast(4);
    p2.addLast(6);

    SinglyLinkedList merged = SinglyLinkedList::mergeSorted(p1, p2);
    cout << "Merged list: ";
    merged.printList();

    return 0;
}

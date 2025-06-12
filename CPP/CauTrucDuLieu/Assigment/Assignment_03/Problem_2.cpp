
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value);
void addLast(Node*& head, int value);
bool searchValue(Node* head, int value);
bool isset(Node* s);
bool subset(Node* s1, Node* s2);
Node* unionSets(Node* s1, Node* s2);
Node* intersection(Node* s1, Node* s2);
void printList(Node* head);

int main() {
    Node *s1 = nullptr, *s2 = nullptr;
    addLast(s1, 1); addLast(s1, 2); addLast(s1, 3);
    addLast(s2, 3); addLast(s2, 4); addLast(s2, 5);

    cout << "Set s1: "; printList(s1);
    cout << "Set s2: "; printList(s2);

    cout << "Is s1 a set? " << (isset(s1) ? "Yes" : "No") << endl;
    cout << "s1 subset s2? " << (subset(s1, s2) ? "Yes" : "No") << endl;

    Node* uni = unionSets(s1, s2);
    cout << "Union: "; printList(uni);

    Node* inter = intersection(s1, s2);
    cout << "Intersection: "; printList(inter);

    return 0;
}


Node* createNode(int value) {
    return new Node{value, nullptr};
}

void addLast(Node*& head, int value) {
    Node* node = createNode(value);
    if (!head) head = node;
    else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = node;
    }
}

bool searchValue(Node* head, int value) {
    while (head) {
        if (head->data == value) return true;
        head = head->next;
    }
    return false;
}

bool isset(Node* s) {
    for (Node* i = s; i; i = i->next)
        for (Node* j = i->next; j; j = j->next)
            if (i->data == j->data) return false;
    return true;
}

bool subset(Node* s1, Node* s2) {
    while (s1) {
        if (!searchValue(s2, s1->data)) return false;
        s1 = s1->next;
    }
    return true;
}

Node* unionSets(Node* s1, Node* s2) {
    Node* res = nullptr;
    for (Node* temp = s1; temp; temp = temp->next)
        addLast(res, temp->data);
    for (Node* temp = s2; temp; temp = temp->next)
        if (!searchValue(res, temp->data))
            addLast(res, temp->data);
    return res;
}

Node* intersection(Node* s1, Node* s2) {
    Node* res = nullptr;
    for (Node* temp = s1; temp; temp = temp->next)
        if (searchValue(s2, temp->data))
            addLast(res, temp->data);
    return res;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " "; head = head->next;
    }
    cout << endl;
}

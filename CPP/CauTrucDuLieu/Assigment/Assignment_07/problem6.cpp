#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data) root->left = insert(root->left, key);
    else root->right = insert(root->right, key);
    return root;
}

Node* findMin(Node* root) {
    while (root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (!root->left) return root->right;
        if (!root->right) return root->left;
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    int initial[] = {98, 2, 48, 12, 56, 32, 4, 67, 23, 87, 23, 55, 46};
    int add[] = {21, 39, 45, 54, 63};
    int remove[] = {23, 56, 2, 45};

    Node* root = nullptr;
    for (int v : initial) root = insert(root, v);
    for (int v : add) root = insert(root, v);
    for (int v : remove) root = deleteNode(root, v);

    inorder(root); cout << endl;
    return 0;
}

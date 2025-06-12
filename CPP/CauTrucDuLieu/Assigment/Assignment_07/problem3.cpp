#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    Node(char d) : data(d), left(nullptr), right(nullptr) {}
};

int main() {
    Node* root = new Node('-');
    root->left = new Node('/');
    root->right = new Node('*');
    root->left->left = new Node('a');
    root->left->right = new Node('b');
    root->right->left = new Node('+');
    root->right->right = new Node('d');
    root->right->left->left = new Node('b');
    root->right->left->right = new Node('c');

    cout << "((a/b)-((b+c)*d))" << endl;
    return 0;
}



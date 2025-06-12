#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    Node(char d) : data(d), left(nullptr), right(nullptr) {}
};

void inorder(Node* root) {
    if (!root) return;
    if (root->left || root->right) cout << "(";
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
    if (root->left || root->right) cout << ")";
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

int evaluate(Node* root, int a, int b, int c, int d, int e) {
    if (!root->left && !root->right) {
        if (root->data == 'a') return a;
        if (root->data == 'b') return b;
        if (root->data == 'c') return c;
        if (root->data == 'd') return d;
        if (root->data == 'e') return e;
        return root->data - '0';
    }
    int l = evaluate(root->left, a, b, c, d, e);
    int r = evaluate(root->right, a, b, c, d, e);
    switch (root->data) {
        case '+': return l + r;
        case '-': return l - r;
        case '*': return l * r;
        case '/': return l / r;
    }
    return 0;
}

int main() {
    Node* root = new Node('/');
    root->left = new Node('*');
    root->right = new Node('e');
    root->left->left = new Node('+');
    root->left->right = new Node('d');
    root->left->left->left = new Node('a');
    root->left->left->right = new Node('b');

    inorder(root); cout << endl;
    preorder(root); cout << endl;
    postorder(root); cout << endl;
    cout << evaluate(root, 30, 10, 2, 30, 10) << endl;
    return 0;
}

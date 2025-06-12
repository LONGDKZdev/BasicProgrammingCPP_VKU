#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
    Node(string d) : data(d), left(nullptr), right(nullptr) {}
};

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (!root) return;
    if (root->left || root->right) cout << "(";
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
    if (root->left || root->right) cout << ")";
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int evaluate(Node* root) {
    if (!root->left && !root->right) return stoi(root->data);

    int l = evaluate(root->left);
    int r = evaluate(root->right);
    if (root->data == "+") return l + r;
    if (root->data == "-") return l - r;
    if (root->data == "*") return l * r;
    if (root->data == "/") return l / r;
    return 0;
}

int main() {
    Node* root = new Node("*");
    root->left = new Node("-");
    root->right = new Node("/");

    root->left->left = new Node("8");
    root->left->right = new Node("5");

    root->right->left = new Node("+");
    root->right->right = new Node("3");

    root->right->left->left = new Node("4");
    root->right->left->right = new Node("2");

    preorder(root); cout << endl;
    inorder(root); cout << endl;
    postorder(root); cout << endl;
    cout << evaluate(root) << endl;

    return 0;
}

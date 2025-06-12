#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == nullptr)
        return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int findMin(Node* root) {
    while (root && root->left)
        root = root->left;
    return root ? root->data : -1;
}

int findMax(Node* root) {
    while (root && root->right)
        root = root->right;
    return root ? root->data : -1;
}

bool search(Node* root, int value) {
    if (!root) return false;
    if (value == root->data) return true;
    if (value < root->data)
        return search(root->left, value);
    else
        return search(root->right, value);
}

int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countInternalNodes(Node* root) {
    if (!root || (!root->left && !root->right))
        return 0;
    return 1 + countInternalNodes(root->left) + countInternalNodes(root->right);
}

int height(Node* root) {
    if (!root) return -1;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

Node* findMinNode(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int value) {
    if (!root) return nullptr;
    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        if (!root->left) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (!root->right) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    Node* root = nullptr;

    // a) Thêm node vào cây
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) {
        root = insert(root, v);
    }

    // b) Duyệt cây
    cout << "Inorder: "; inorder(root); cout << endl;
    cout << "Preorder: "; preorder(root); cout << endl;
    cout << "Postorder: "; postorder(root); cout << endl;

    // c) Tìm min/max
    cout << "Min: " << findMin(root) << endl;
    cout << "Max: " << findMax(root) << endl;

    // d) Tìm giá trị
    cout << "Search 60: " << (search(root, 60) ? "Found" : "Not Found") << endl;

    // e) Đếm tổng số node
    cout << "Total nodes: " << countNodes(root) << endl;

    // f) Đếm số node nội bộ
    cout << "Internal nodes: " << countInternalNodes(root) << endl;

    // g) Tính chiều cao
    cout << "Height: " << height(root) << endl;

    // h) Xoá một node
    cout << "Deleting 70\n";
    root = deleteNode(root, 70);
    cout << "Inorder after deletion: "; inorder(root); cout << endl;

    return 0;
}


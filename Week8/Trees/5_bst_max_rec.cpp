#include <iostream>
using namespace std;

// Definition of a BST node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Insert a node in BST (for demonstration)
Node* insert(Node* root, int key) {
    if (root == nullptr) return new Node(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

// Find maximum value node recursively
Node* findMaxRecursive(Node* root) {
    if (root == nullptr || root->right == nullptr)
        return root;
    return findMaxRecursive(root->right);
}

int main() {
    Node* root = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int val : values) {
        root = insert(root, val);
    }

    Node* maxNode = findMaxRecursive(root);
    if (maxNode)
        cout << "Recursive: Maximum key in BST is " << maxNode->data << endl;
    else
        cout << "Recursive: BST is empty." << endl;

    return 0;
}
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

// Find minimum value node non-recursively
Node* findMinNonRecursive(Node* root) {
    if (root == nullptr) return nullptr;
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

int main() {
    Node* root = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int val : values) {
        root = insert(root, val);
    }

    Node* minNode = findMinNonRecursive(root);
    if (minNode)
        cout << "Non-recursive: Minimum key in BST is " << minNode->data << endl;
    else
        cout << "Non-recursive: BST is empty." << endl;

    return 0;
}
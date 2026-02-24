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

// Recursive search in BST
Node* searchBSTRecursive(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return searchBSTRecursive(root->left, key);
    }
    return searchBSTRecursive(root->right, key);
}

int main() {
    Node* root = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int val : values) {
        root = insert(root, val);
    }

    int searchKey = 40;
    Node* found = searchBSTRecursive(root, searchKey);
    if (found)
        cout << "Recursive: Found node with key " << found->data << endl;
    else
        cout << "Recursive: Key " << searchKey << " not found in BST." << endl;

    return 0;
}
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

// Non-recursive search in BST
Node* searchBST(Node* root, int key) {
    while (root != nullptr) {
        if (key == root->data) {
            return root;
        } else if (key < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return nullptr;
}

int main() {
    Node* root = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int val : values) {
        root = insert(root, val);
    }

    int searchKey = 40;
    Node* found = searchBST(root, searchKey);
    if (found)
        cout << "Non-recursive: Found node with key " << found->data << endl;
    else
        cout << "Non-recursive: Key " << searchKey << " not found in BST." << endl;

    return 0;
}
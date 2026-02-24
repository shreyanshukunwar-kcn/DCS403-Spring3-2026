#include <iostream>
using namespace std;

// Definition of a BST node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Non-recursive (iterative) insert into BST
Node* insert(Node* root, int key) {
    Node* newNode = new Node(key);
    if (root == nullptr)
        return newNode;

    Node* parent = nullptr;
    Node* curr = root;
    while (curr != nullptr) {
        parent = curr;
        if (key < curr->data)
            curr = curr->left;
        else if (key > curr->data)
            curr = curr->right;
        else {
            // Duplicate key, do not insert
            delete newNode;
            return root;
        }
    }
    if (key < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

// Inorder traversal to show tree structure
void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    int n, val;
    cout << "How many nodes do you want to insert? ";
    cin >> n;
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "BST Inorder (non-recursive insert): ";
    inorder(root);
    cout << endl;
    return 0;
}
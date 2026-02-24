#include <iostream>
using namespace std;

// Definition of a BST node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Recursive insert into BST
Node* insert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
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

// Helper: Find minimum value node in BST
Node* findMin(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

// Delete node function
Node* deleteNode(Node* root, int key) {
    if (!root)
        return nullptr;
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node found
        // Case 1: No child or only right child
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // Case 2: Only left child
        else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    Node* root = nullptr;
    int n, val, toDelete;
    cout << "How many nodes do you want to insert? ";
    cin >> n;
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        root = insert(root, val);
    }
    cout << "Inorder traversal before deletion: ";
    inorder(root);
    cout << endl;
    
    cout << "Enter value to delete: ";
    cin >> toDelete;
    root = deleteNode(root, toDelete);
    
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;
    return 0;
}
/*
 * Example 1: Node Structure for a Linked List
 * Defines the basic Node structure used to create a linked list.
 */

#include <iostream>
using namespace std;

// Definition of the Node
struct Node {
    int data;     // Stores the node data (can be any type)
    Node* next;   // Pointer to the next node in the list
};

int main() {
    // Create a single node with data
    Node* node = new Node{10, nullptr};

    cout << "Node data: " << node->data << endl;
    cout << "Node next pointer: " << node->next << endl;

    delete node; // Cleanup
    return 0;
}
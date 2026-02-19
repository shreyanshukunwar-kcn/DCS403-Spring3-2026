/*
 * Simple Doubly Linked List Example
 * Demonstrates:
 *  - Node structure (with prev and next)
 *  - Insertion at the end
 *  - Traversal forward and backward
 */

#include <iostream>
using namespace std;

// Doubly linked list node
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert at the end of the doubly linked list
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node{val, nullptr, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Print list forward
void printForward(Node* head) {
    cout << "Forward: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        if (!temp->next) break; // Store last node for backward print
        temp = temp->next;
    }
    cout << endl;
}

// Print list backward from tail
void printBackward(Node* head) {
    if (!head) return;
    // Go to last node
    Node* temp = head;
    while (temp->next) temp = temp->next;
    cout << "Backward: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// Free the entire list
void freeList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 11);
    insertAtEnd(head, 22);
    insertAtEnd(head, 33);

    printForward(head);   // Output: Forward: 11 22 33
    printBackward(head);  // Output: Backward: 33 22 11

    freeList(head);       // Cleanup
    return 0;
}
/*
 * Simple Circular Linked List Example
 * Demonstrates:
 *  - Node structure
 *  - Insertion at end
 *  - Traversal (printing the list)
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at end in circular linked list
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node{val, nullptr};
    if (!head) {
        head = newNode;
        newNode->next = head; // Point to itself
        return;
    }
    Node* temp = head;
    while (temp->next != head) temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

// Print the circular linked list
void printList(Node* head) {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    cout << "Circular List: ";
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Free the circular list memory
void freeList(Node*& head) {
    if (!head) return;
    Node* temp = head->next;
    while (temp != head) {
        Node* toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }
    delete head;
    head = nullptr;
}

int main() {
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    printList(head); // Output: Circular List: 10 20 30

    freeList(head);
    return 0;
}
/*
 * Example 4: Insert a Node at the Beginning of the Linked List
 *
 * This example demonstrates the insertion of a node at the start (head) of the list.
 */

#include <iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;
};

// Function to insert at beginning
Node* insertAtBeginning(Node* head, int new_data) {
    Node* new_node = new Node{new_data, head};
    return new_node;
}

void printList(Node* head) {
    Node* temp = head;
    cout << "Current List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    // Insert nodes at beginning: final list 30 -> 20 -> 10
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    printList(head);

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
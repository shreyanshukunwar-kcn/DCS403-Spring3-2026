/*
 * Insertion at the Beginning of a Linked List
 * This program inserts new nodes at the start (head) of the list.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node{val, head}; // newNode points to current head
    head = newNode;                      // head now points to newNode
}

void printList(Node* head) {
    cout << "List: ";
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);
    printList(head); // Output: 10 20 30

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
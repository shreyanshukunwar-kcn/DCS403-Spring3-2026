/*
 * Insertion at the End of a Linked List
 * This program shows how to insert a node at the end (tail) of the list.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node{val, nullptr};
    if (head == nullptr) { // If list is empty
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
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
    insertAtEnd(head, 5);
    insertAtEnd(head, 15);
    insertAtEnd(head, 25);
    printList(head); // Output: 5 15 25

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
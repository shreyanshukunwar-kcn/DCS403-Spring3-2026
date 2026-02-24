/*
 * Deletion at the Beginning of a Linked List
 * This program deletes the first node (head) of the list.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is already empty.\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Deleted node at the beginning.\n";
}

void printList(Node* head) {
    cout << "List: ";
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Setup: 1->2->3
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    printList(head);
    deleteAtBeginning(head);
    printList(head);

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
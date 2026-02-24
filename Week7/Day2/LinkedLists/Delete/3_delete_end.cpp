/*
 * Deletion at the End of a Linked List
 * This program deletes the last node (tail) of the list.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtEnd(Node*& head) {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    if (!head->next) { // Only one node
        delete head;
        head = nullptr;
        cout << "Deleted the only node; list is now empty.\n";
        return;
    }
    Node* temp = head;
    while (temp->next->next)
        temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
    cout << "Deleted node at end.\n";
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
    // Setup: a->b->c
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    printList(head);
    deleteAtEnd(head);
    printList(head);

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
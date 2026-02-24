/*
 * Deletion in an Empty/Singly-node Linked List
 * This program deletes the only node in the list and handles empty list appropriately.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteOnlyNode(Node*& head) {
    if (head == nullptr) {
        cout << "List is already empty.\n";
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        cout << "Single node deleted; list is now empty.\n";
        return;
    }
    cout << "More than one node in the list; this function is for single-node list only.\n";
}

void printList(Node* head) {
    cout << "List: ";
    if (!head) {
        cout << "(empty)" << endl;
        return;
    }
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{99, nullptr};

    printList(head);
    deleteOnlyNode(head);
    printList(head);

    // No further cleanup needed; head is nullptr
    return 0;
}
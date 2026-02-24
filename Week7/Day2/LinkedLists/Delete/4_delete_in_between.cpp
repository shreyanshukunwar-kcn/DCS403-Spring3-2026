/*
 * Deletion of a Node in Between List Nodes (by Value)
 * This program deletes the first node that matches a given value (not head).
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Deletes first node with matching value (not at head)
void deleteInBetween(Node*& head, int val) {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    if (head->data == val) {
        cout << "Value found at head; use deleteAtBeginning instead if that's the intent.\n";
        return;
    }
    Node* prev = head;
    Node* curr = head->next;
    while (curr && curr->data != val) {
        prev = curr;
        curr = curr->next;
    }
    if (curr) {
        prev->next = curr->next;
        delete curr;
        cout << "Deleted node with value " << val << " from the list.\n";
    } else {
        cout << "Value " << val << " not found in the list (or it was at head).\n";
    }
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
    // Setup: 1->2->3->4
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};

    printList(head);
    deleteInBetween(head, 3); // Delete node with value 3
    printList(head);

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
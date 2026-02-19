/*
 * Example 7: Reversing a Linked List
 *
 * This example shows how to reverse a linked list, changing its direction.
 *
 * Original: 1 -> 2 -> 3
 * Reversed: 3 -> 2 -> 1
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Reverse function
Node* reverseList(Node* head) {
    Node *prev = nullptr, *curr = head, *next = nullptr;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    cout << "Original list: ";
    printList(head);

    head = reverseList(head);
    cout << "Reversed list: ";
    printList(head);

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
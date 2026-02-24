/*
 * Insertion in an Empty Linked List
 * This program creates and initializes a linked list by inserting into an empty list.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertInEmptyList(Node*& head, int val) {
    if (head != nullptr) {
        cout << "List is not empty! Cannot use this function.\n";
        return;
    }
    head = new Node{val, nullptr};
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
    insertInEmptyList(head, 42);
    printList(head); // Output: 42

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
/*
 * Example 2: Creating and Printing a Simple Linked List
 *
 * This example shows how to build a linked list with 3 nodes,
 * and how to print its elements.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Creating nodes and manually linking them
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    // Print the list
    cout << "Linked list elements: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Cleanup: deallocate memory for all nodes
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
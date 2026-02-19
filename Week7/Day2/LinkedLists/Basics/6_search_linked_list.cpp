/*
 * Example 6: Searching for a Value in the Linked List
 *
 * This example demonstrates how to search for an element in the list.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Search for key in list
bool search(Node* head, int key) {
    Node* temp = head;
    while (temp) {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node{7, nullptr};
    head->next = new Node{14, nullptr};
    head->next->next = new Node{21, nullptr};

    int val = 14;
    cout << "Searching for " << val << ": ";
    if (search(head, val))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    val = 100;
    cout << "Searching for " << val << ": ";
    if (search(head, val))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
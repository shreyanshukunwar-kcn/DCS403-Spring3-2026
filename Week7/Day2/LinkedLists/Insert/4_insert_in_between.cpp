/*
 * Insertion Between List Nodes
 * This program inserts a new node after a specified position (1-based index).
 * For example, inserting after position 2 in 10->20->30 gives 10->20->X->30
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert val after 'position' (1-based)
void insertAfterPosition(Node*& head, int val, int position) {
    if (position < 1) {
        cout << "Invalid position.\n";
        return;
    }
    Node* temp = head;
    int count = 1;
    // Traverse to the position-th node
    while (temp && count < position) {
        temp = temp->next;
        ++count;
    }
    if (!temp) {
        cout << "Position out of bounds.\n";
        return;
    }
    Node* newNode = new Node{val, temp->next};
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
    // Setup: 10->20->30
    head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    printList(head); // Original

    insertAfterPosition(head, 99, 2); // After node at position 2 (i.e., after 20)
    printList(head); // Output: 10 20 99 30

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
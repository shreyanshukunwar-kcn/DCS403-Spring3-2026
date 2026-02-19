/*
 * Example 5: Deleting a Node from the Linked List
 *
 * This example shows how to delete the first occurrence of a value in the list.
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Delete node by value
Node* deleteNode(Node* head, int key) {
    if (!head) return head;
    // If head needs to be deleted
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *curr = head, *prev = nullptr;
    while (curr && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }
    if (curr) {
        prev->next = curr->next;
        delete curr;
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    cout << "List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    head = new Node{100, nullptr};
    head->next = new Node{200, nullptr};
    head->next->next = new Node{300, nullptr};

    cout << "Original ";
    printList(head);

    head = deleteNode(head, 200);
    cout << "After deleting 200: ";
    printList(head);

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
/*
 * Menu-driven Linked List Operations:
 * - Insert a node at the end with user input
 * - Delete a node by value through user input
 * - Search for a node by value
 * - Display the linked list
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert a node at the end of the list
void insert(Node*& head, int val) {
    Node* newNode = new Node{val, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Delete the first node with value 'val'
void deleteNode(Node*& head, int val) {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        cout << "Deleted " << val << " from the list.\n";
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != val)
        temp = temp->next;
    if (temp->next && temp->next->data == val) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << "Deleted " << val << " from the list.\n";
    } else {
        cout << val << " not found in the list.\n";
    }
}

// Search for a node with value 'val'
bool search(Node* head, int val) {
    Node* temp = head;
    while (temp) {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

// Display the entire list
void display(Node* head) {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Free all nodes (cleanup)
void freeList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int choice, val;
    cout << "Menu-driven Linked List Operations\n";
    cout << "1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n";
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                insert(head, val);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> val;
                deleteNode(head, val);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> val;
                if (search(head, val))
                    cout << val << " found in the list.\n";
                else
                    cout << val << " not found in the list.\n";
                break;
            case 4:
                display(head);
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    freeList(head); // Cleanup memory
    return 0;
}
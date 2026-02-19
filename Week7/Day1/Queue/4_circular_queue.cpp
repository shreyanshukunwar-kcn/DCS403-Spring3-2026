#include <iostream>
#define SIZE 5
using namespace std;

class CircularQueue {
    int items[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Insert an element
    void enqueue(int value) {
        if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1))) {
            cout << "Queue is Full!\n";
            return;
        }
        if (front == -1) { // Empty queue
            front = rear = 0;
        } else if (rear == SIZE - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        items[rear] = value;
        cout << value << " inserted.\n";
    }

    // Delete an element
    void dequeue() {
        if (front == -1) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << items[front] << " deleted.\n";
        if (front == rear) { // One element left
            front = rear = -1;
        } else if (front == SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    // Display the queue
    void display() {
        if (front == -1) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << items[i] << " ";
        } else {
            for (int i = front; i < SIZE; i++)
                cout << items[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    int choice, value;
    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exit...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}
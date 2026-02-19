#include <iostream>
#define MAX_SIZE 3
using namespace std;

class Queue {
    int arr[MAX_SIZE];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }
    
    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << val << endl;
            return;
        }
        if (front == -1) front = 0; // First insertion
        arr[++rear] = val;
        cout << "Inserted " << val << " into queue." << endl;
        displayFrontRear();
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot delete." << endl;
            return;
        }
        cout << "Deleted " << arr[front] << " from queue." << endl;
        // If this was the last element, reset the queue
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        displayFrontRear();
    }
    
    void displayFrontRear() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Front index: " << front << ", value: " << arr[front]
                    << " | Rear index: " << rear << ", value: " << arr[rear] << endl;
        }
    }
    
    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue contents: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
        displayFrontRear();
    }
};

int main() {
    Queue q;
    int choice, val;
    
    do {
        cout << "\n1. Insert (Enqueue)\n2. Delete (Dequeue)\n3. Display Queue\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                q.enqueue(val);
                break;
                
            case 2:
                q.dequeue();
                break;
            
            case 3:
                q.displayQueue();
                break;
                
            case 4:
                cout << "Exiting...\n";
                break;
                
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
#include <iostream>
#define MAX_SIZE 5
using namespace std;

class Stack {
    int arr[MAX_SIZE];
    int top;
public:
    Stack() {
        top = -1;
    }
    
    bool isEmpty() {
        return top == -1;
    }
    
    bool isFull() {
        return top == MAX_SIZE - 1;
    }
    
    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << val << endl;
            return;
        }
        arr[++top] = val;
        cout << "Pushed " << val << " onto stack." << endl;
        displayTop();
    }
    
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return;
        }
        cout << "Popped " << arr[top] << " from stack." << endl;
        top--;
        displayTop();
    }
    
    void displayTop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top index: " << top << ", value: " << arr[top] << endl;
        }
    }
    
    void displayStack() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack contents (from bottom to top): ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
        displayTop();
    }
};

int main() {
    Stack s;
    int choice, val;
    
    do {
        cout << "\n1. Push\n2. Pop\n3. Display Stack\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
                
            case 2:
                s.pop();
                break;
            
            case 3:
                s.displayStack();
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
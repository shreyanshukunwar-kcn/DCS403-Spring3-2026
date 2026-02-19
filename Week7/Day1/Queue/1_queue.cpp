// Queue using C++ STL

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue (push elements)
    q.push(10);
    q.push(20);
    q.push(30);

    // Access front and back
    cout << "Front: " << q.front() << endl; // Output: 10
    cout << "Back: " << q.back() << endl;   // Output: 30

    // Size of queue
    cout << "Size: " << q.size() << endl;   // Output: 3

    // Dequeue (pop elements)
    q.pop();
    cout << "After pop, Front: " << q.front() << endl; // Output: 20

    // Empty check
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    // Output: 20 30
    return 0;
}
// Example using STL priority_queue

#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Max Heap by default (highest numbers served first)
    priority_queue<int> pq;

    pq.push(10); // Insert with priority (value)
    pq.push(20);
    pq.push(5);

    cout << "Priority Queue contents (serving highest priority first):\n";
    while (!pq.empty()) {
        cout << pq.top() << " "; // Shows the highest priority item
        pq.pop();
    }
    // Output: 20 10 5
    return 0;
}
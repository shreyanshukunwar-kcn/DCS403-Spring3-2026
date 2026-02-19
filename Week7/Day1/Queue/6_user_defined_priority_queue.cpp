#include <iostream>
#include <queue>
using namespace std;

struct Job {
    int id;
    int priority;
    // Highest priority first
    bool operator<(const Job& other) const {
        return priority < other.priority;
    }
};

int main() {
    priority_queue<Job> jobs;

    jobs.push({1, 2});  // id=1, priority=2
    jobs.push({2, 5});  // id=2, priority=5
    jobs.push({3, 1});  // id=3, priority=1

    while (!jobs.empty()) {
        Job job = jobs.top();
        cout << "Job ID: " << job.id << ", Priority: " << job.priority << endl;
        jobs.pop();
    }
    return 0;
}
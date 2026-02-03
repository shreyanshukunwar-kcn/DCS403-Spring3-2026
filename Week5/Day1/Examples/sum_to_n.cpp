#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 1) 
        return 1;               // base case
    else
        return n + sum(n - 1);  // recursive call
}

int main() {
    cout << "The sum of numbers upto 10 is: " << sum(10);
}
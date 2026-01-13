#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0)
            cout << "Positive even number";
        else
            cout << "Positive odd number";
    } else if (num < 0) {
        cout << "Negative number";
    } else {
        cout << "Zero";
    }

    return 0;
}

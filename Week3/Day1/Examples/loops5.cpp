#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "Loop stopped at i = 5" << endl;
            break;  // Exit the loop
        }
        cout << i << " ";
    }
    return 0;
}

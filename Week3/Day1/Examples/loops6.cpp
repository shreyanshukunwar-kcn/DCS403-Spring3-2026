#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip when i == 3
        }
        cout << i << " ";
    }
    return 0;
}

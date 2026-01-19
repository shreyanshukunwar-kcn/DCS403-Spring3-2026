#include <iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << "(" << row << "," << col << ") ";
        }
        cout << endl;       // Move to next line after each row
    }
    return 0;
}

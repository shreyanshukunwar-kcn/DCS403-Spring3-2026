#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice (1–4): ";
    cin >> choice;

    int a = 10, b = 5;

    switch (choice) {
        case 1:
            cout << "Sum = " << a + b << endl;
            break;
        case 2:
            cout << "Difference = " << a - b << endl;
            break;
        case 3:
            cout << "Product = " << a * b << endl;
            break;
        case 4:
            cout << "Quotient = " << a / b << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

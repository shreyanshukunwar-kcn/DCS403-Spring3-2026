#include <iostream>
using namespace std;

int main() {
    char hex;
    cout << "Enter a hex digit (0–F): ";
    cin >> hex;

    int decimal;
    if (hex >= '0' && hex <= '9')               //‘A’ → ASCII 65 → 10 + (65 – 65) = 10
        decimal = hex - '0';
    else if (hex >= 'A' && hex <= 'F')
        decimal = 10 + (hex - 'A');
    else
        cout << "Invalid input" << endl;

    cout << "Decimal value: " << decimal << endl;
}

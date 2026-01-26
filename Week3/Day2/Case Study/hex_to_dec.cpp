#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int hexToDecimal(const string &hex) {
    int decimal = 0;
    for (int i = 0; i < hex.length(); i++) {
        char ch = toupper(hex[i]);
        if (ch >= 'A' && ch <= 'F')
            decimal = decimal * 16 + (ch - 'A' + 10);
        else
            decimal = decimal * 16 + (ch - '0');
    }
    return decimal;
}

int main() {
    string hex;
    cout << "Enter hex: ";
    cin >> hex;
    cout << "Decimal = " << hexToDecimal(hex);
}


#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    const int SIZE = 26;
    int counts[SIZE] = {0};
    string line;

    cout << "Enter a string: " << flush;
    if (!getline(cin, line)) return 0;

    for (char ch : line) {
        unsigned char uch = static_cast<unsigned char>(ch);
        if (isalpha(uch))
            counts[tolower(uch) - 'a']++;
    }

    for (int i = 0; i < SIZE; i++)
        cout << char('a' + i) << ": " << counts[i] << endl;
}
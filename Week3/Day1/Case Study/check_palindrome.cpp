#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a word: ";
    cin >> text;
    bool isPalindrome = true;

    for (int i = 0, j = text.length() - 1; i < j; i++, j--) {
        if (text[i] != text[j]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << text << " is a palindrome.";
    else
        cout << text << " is not a palindrome.";
}
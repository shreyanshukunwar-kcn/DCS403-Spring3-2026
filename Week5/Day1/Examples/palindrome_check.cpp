#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s, int low, int high) {
    if (low >= high) return true;                   // base case
    if (s[low] != s[high]) return false;            // mismatch
    return isPalindrome(s, low + 1, high - 1);      // recursive case
}

bool isPalindrome(const string& s) {
    return isPalindrome(s, 0, s.length() - 1);      // helper function call
}

int main() {
    string word = "level";
    cout << (isPalindrome(word) ? "Palindrome" : "Not Palindrome");
}

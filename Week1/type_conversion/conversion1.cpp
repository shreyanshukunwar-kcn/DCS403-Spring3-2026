#include <iostream>
using namespace std;

int main() {
    int a = 5;
    double b = 2.5;

    double result = a + b;                  // int 'a' is implicitly converted to double
    cout << "Result: " << result << endl;   // 7.5
}

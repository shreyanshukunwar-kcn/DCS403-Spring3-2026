//  C++ - style static_cast type conversion example

#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 4;
    double result;

    result = static_cast<double>(x) / y;    // x converted to double
    cout << "Result: " << result << endl;   // 2.5
}

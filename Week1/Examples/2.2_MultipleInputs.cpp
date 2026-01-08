// Program to calculate the average of three numbers.

#include <iostream>
using namespace std;

int main() {

    double number1, number2, number3;

    cout << "Enter three numbers:";
    cin >> number1 >> number2 >> number3;       //Taking multiple inputs in a single line

    double average = (number1 + number2 + number3) / 3;

    cout << "Average of " << number1 << ", " << number2 << ", and " << number3 << " is: " << average << endl;

    return 0;
}
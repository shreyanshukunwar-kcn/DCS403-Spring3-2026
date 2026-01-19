
#include <iostream>
#include <iomanip>   // for setting decimal precision
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter your weight (kg): ";
    cin >> weight;
    cout << "Enter your height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(2);
    cout << "Your BMI is: " << bmi << endl;

    // Classify BMI
    if (bmi < 18.5)
        cout << "Category: Underweight" << endl;
    else if (bmi < 25)
        cout << "Category: Normal weight" << endl;
    else if (bmi < 30)
        cout << "Category: Overweight" << endl;
    else
        cout << "Category: Obesity" << endl;

    return 0;
}

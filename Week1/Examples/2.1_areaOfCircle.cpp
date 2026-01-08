// Program to calculate area of circle with user input for radius

#include <iostream>

using namespace std;

int main() {
    double radius;                      
    double area;                        

    cout << "Enter radius of circle: "; 
    cin >> radius;                      

    area = 3.1415 * radius * radius;    

    cout << "Area of Circle is: " << area << endl;

    return 0;
}
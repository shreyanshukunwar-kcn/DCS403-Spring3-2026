// Program to calculate area of circle with hardcoded radius value

#include <iostream>

using namespace std;

int main() {
    double radius;                      //Declaration of variable radius
    double area;                        //Declaration of variable area

    radius = 20;                        //Assigning value to radius or Initialization of radius
    area = 3.1415 * radius * radius;    //Calculating area of circle

    cout << "Area of Circle is: " << area << endl;   //Displaying area of circle

    return 0;
}
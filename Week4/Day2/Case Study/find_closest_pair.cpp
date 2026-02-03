#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int NUM_POINTS = 8;
    double points[NUM_POINTS][2] = {
        {1, 2}, {2, 3}, {3, 4}, {5, 5},
        {1, 3}, {2, 2.5}, {4, 2}, {2, 1}
    };

    int p1 = 0, p2 = 1;
    double shortest = sqrt(pow(points[0][0]-points[1][0],2) +
                           pow(points[0][1]-points[1][1],2));

    for (int i = 0; i < NUM_POINTS; i++) {
        for (int j = i+1; j < NUM_POINTS; j++) {
            double dist = sqrt(pow(points[i][0]-points[j][0],2) +
                               pow(points[i][1]-points[j][1],2));
            if (dist < shortest) {
                shortest = dist;
                p1 = i; p2 = j;
            }
        }
    }

    cout << "Closest points: (" << points[p1][0] << "," << points[p1][1]
         << ") and (" << points[p2][0] << "," << points[p2][1]
         << ") Distance = " << shortest;
}

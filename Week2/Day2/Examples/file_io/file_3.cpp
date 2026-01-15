// Add more data without erasing old content using ios::app.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt", ios::app); // open file in append mode
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << "This line was appended later.\n";
    file.close();

    cout << "Data appended successfully!" << endl;
    return 0;
}

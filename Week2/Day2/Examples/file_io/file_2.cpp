// Read content from a file using ifstream.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");  // open file for reading
    string line;

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    cout << "File contents:\n";
    while (getline(file, line)) {   // read line by line
        cout << line << endl;
    }

    file.close();
    return 0;
}

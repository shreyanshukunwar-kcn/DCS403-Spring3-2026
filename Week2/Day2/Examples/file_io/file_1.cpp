// Write text into a file using ofstream.

#include <iostream>
#include <fstream>   // for file operations
using namespace std;

int main() {
    ofstream file("example.txt");  // create and open file for writing

    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    file << "Hello, this is a test file.\n";
    file << "File I/O in C++ is easy!" << endl;

    file.close();  // close file after writing
    cout << "Data written successfully!" << endl;

    return 0;
}

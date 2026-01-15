// 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");
    string word;
    int wordCount = 0, lineCount = 0;
    string line;

    while (getline(file, line)) {
        lineCount++;
        for (int i = 0; i < line.size(); i++) {
            if (isspace(line[i])) wordCount++;
        }
        wordCount++;  // for last word in the line
    }

    cout << "Lines: " << lineCount << endl;
    cout << "Approximate words: " << wordCount << endl;

    file.close();
    return 0;
}

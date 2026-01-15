#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                             // seed once
    char ch = 'A' + rand() % 26;                // random A–Z
    cout << "Random letter: " << ch << endl;
    return 0;
}

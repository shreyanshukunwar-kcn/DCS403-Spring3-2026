#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 8, QUESTIONS = 10;
    char answers[STUDENTS][QUESTIONS] = {
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };
    char key[QUESTIONS] = {'D','B','D','C','C','D','A','E','A','D'};

    for (int i = 0; i < STUDENTS; i++) {
        int correct = 0;
        for (int j = 0; j < QUESTIONS; j++)
            if (answers[i][j] == key[j]) correct++;
        cout << "Student " << i << " score: " << correct << endl;
    }
}

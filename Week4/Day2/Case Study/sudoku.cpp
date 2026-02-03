#include <iostream>
using namespace std;

const int SIZE = 9;

bool isValid(int grid[SIZE][SIZE]) {
    
    //Check rows
    for (int row = 0; row < SIZE; row++) {
        bool digits[SIZE] = {false};
        for (int col = 0; col < SIZE; col++) {
            int num = grid[row][col];
            if (num < 1 || num > 9 || digits[num - 1])
                return false;
            digits[num - 1] = true;
        }
    }

    //Check columns
    for (int col = 0; col < SIZE; col++) {
        bool digits[SIZE] = {false};
        for (int row = 0; row < SIZE; row++) {
            int num = grid[row][col];
            if (num < 1 || num > 9 || digits[num - 1])
                return false;
            digits[num - 1] = true;
        }
    }

    //Check 3×3 subgrids
    for (int boxRow = 0; boxRow < SIZE; boxRow += 3) {
        for (int boxCol = 0; boxCol < SIZE; boxCol += 3) {
            bool digits[SIZE] = {false};
            for (int r = 0; r < 3; r++) {
                for (int c = 0; c < 3; c++) {
                    int num = grid[boxRow + r][boxCol + c];
                    if (num < 1 || num > 9 || digits[num - 1])
                        return false;
                    digits[num - 1] = true;
                }
            }
        }
    }
    
    return true;
}

int main() {
    int sudoku[SIZE][SIZE] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };

    if (isValid(sudoku))
        cout << "Sudoku solution is valid!" << endl;
    else
        cout << "Sudoku solution is invalid!" << endl;

    return 0;
}

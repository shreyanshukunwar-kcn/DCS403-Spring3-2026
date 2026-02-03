#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int DECK_SIZE = 52;
    int deck[DECK_SIZE];

    for (int i = 0; i < DECK_SIZE; i++)
        deck[i] = i;

    // Shuffle
    for (int i = 0; i < DECK_SIZE; i++) {
        int index = rand() % DECK_SIZE;
        int temp = deck[i];
        deck[i] = deck[index];
        deck[index] = temp;
    }

    string suits[] = {"Spades", "Hearts", "Clubs", "Diamonds"};
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    for (int i = 0; i < 4; i++) {
        cout << ranks[deck[i] % 13] << " of " << suits[deck[i] / 13] << endl;
    }
}

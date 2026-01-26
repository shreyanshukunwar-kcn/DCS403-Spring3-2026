#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Display primes up to: ";
    cin >> limit;

    for (int num = 2; num <= limit; num++) {
        bool isPrime = true;
        for (int divisor = 2; divisor <= num / 2; divisor++) {
            if (num % divisor == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << num << " ";
    }
}

#include <iostream>
using namespace std;

/*
    Function to perform Bubble Sort on an array
    arr[] : the array to be sorted
    n     : number of elements in the array
*/
void bubbleSort(int arr[], int n) {
    // Outer loop runs for each pass
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // Optimization: check if any swap happens in this pass

        // Inner loop compares adjacent elements
        // After each pass, the largest element moves to the end
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next one, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        // If no two elements were swapped in this pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

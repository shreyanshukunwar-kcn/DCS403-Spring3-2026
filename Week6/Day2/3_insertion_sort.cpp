#include <iostream>
using namespace std;

/*
    Function to perform Insertion Sort on an array
    arr[] : the array to be sorted
    n     : number of elements in the array
*/
void insertionSort(int arr[], int n) {
    // Start from the second element (index 1)
    // The first element is considered already sorted
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // The element to be inserted in the sorted part
        int j = i - 1;

        // Move elements of the sorted part that are greater than key
        // one position ahead to make space for key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key at its correct position
        arr[j + 1] = key;
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
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

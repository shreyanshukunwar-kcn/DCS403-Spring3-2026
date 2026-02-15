#include <iostream>
using namespace std;

/*
    Partition function (Lomuto partition scheme)
    It takes the last element as pivot, places it at the correct position,
    and places all smaller elements to the left of pivot and all greater
    elements to the right of pivot.

    Returns the index of the pivot after partitioning.
*/
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // Choose the last element as pivot
    int i = low - 1;         // Index of smaller element

    // Traverse through all elements from low to high-1
    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;  // Move index of smaller element
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place the pivot in its correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  // Return pivot index
}

/*
    Recursive Quick Sort function
    arr[] : array to be sorted
    low   : starting index
    high  : ending index
*/
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);   // Left of pivot
        quickSort(arr, pi + 1, high);  // Right of pivot
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
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

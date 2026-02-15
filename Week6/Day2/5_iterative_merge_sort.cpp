#include <iostream>
using namespace std;

/*
    Merges two sorted subarrays of arr[]
    First subarray: arr[left ... mid]
    Second subarray: arr[mid+1 ... right]
*/
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;   // Size of left subarray
    int n2 = right - mid;      // Size of right subarray

    // Create temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left...right]
    int i = 0;      // Index for L[]
    int j = 0;      // Index for R[]
    int k = left;   // Index for merged array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free allocated memory
    delete[] L;
    delete[] R;
}

/*
    Function to perform Bottom-Up (Iterative) Merge Sort
    arr[] : array to be sorted
    n     : number of elements
*/
void mergeSortIterative(int arr[], int n) {
    // currSize: size of subarrays to be merged
    // Starts with 1 (single elements) and doubles each iteration
    for (int currSize = 1; currSize < n; currSize *= 2) {

        // Pick starting point of different subarrays of current size
        for (int leftStart = 0; leftStart < n - 1; leftStart += 2 * currSize) {

            // Find mid point and right end of the subarray
            int mid = min(leftStart + currSize - 1, n - 1);
            int rightEnd = min(leftStart + 2 * currSize - 1, n - 1);

            // Merge subarrays arr[leftStart...mid] and arr[mid+1...rightEnd]
            if (mid < rightEnd) {
                merge(arr, leftStart, mid, rightEnd);
            }
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
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    mergeSortIterative(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

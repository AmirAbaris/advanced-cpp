#include <iostream>
using namespace std;

// Function to swap two numbers
void swap(float *first, float *second) {
    float temp = *first;
    *first = *second;
    *second = temp;
}

// Bubble Sort function to sort an array in descending order
void bubbleSortDescending(float array[], int size) {
    bool isSorted; // Flag to track if the array is already sorted

    for (int pass = size - 1; pass >= 1; pass--) { // Outer loop for passes
        isSorted = true; // Assume the array is sorted

        for (int index = 0; index < pass; index++) { // Inner loop to compare adjacent elements
            if (array[index] < array[index + 1]) { // If elements are in the wrong order
                swap(&array[index], &array[index + 1]); // Swap them
                isSorted = false; // Mark as not sorted
            }
        }

        if (isSorted) { // If no swaps occurred in this pass, the array is sorted
            break;
        }
    }
}

// Binary Search function to find an element in a sorted array
int binarySearch(float array[], int size, float target) {
    int left = 0;             // Lower bound of the search range
    int right = size - 1;     // Upper bound of the search range
    int middle;               // Middle index

    while (left <= right) {
        middle = (left + right) / 2; // Calculate the middle index

        if (array[middle] == target) { // Target found
            return middle;
        } else if (array[middle] > target) { // Target is smaller, search left half
            left = middle + 1;
        } else { // Target is larger, search right half
            right = middle - 1;
        }
    }

    return -1; // Target not found
}

// Main function
int main() {
    // Example arrays
    float arrayA[20] = {2.3, 5.1, 9.7, 1.4, 8.2, 3.6, 0.4, 7.8, 6.9, 10.1, 4.3, 8.8, 9.0, 3.5, 6.1, 7.3, 2.1, 1.9, 5.0, 0.6};
    float arrayB[100]; // Placeholder for testing with more data
    float arrayC[50];  // Placeholder for testing with smaller data
    int searchResult;

    // Sort arrays using Bubble Sort
    bubbleSortDescending(arrayA, 20);

    // Print sorted arrayA
    cout << "Sorted array (descending order):" << endl;
    for (int i = 0; i < 20; i++) {
        cout << arrayA[i] << " ";
    }
    cout << endl;

    // Perform binary search for target value 17.5 in arrayA
    searchResult = binarySearch(arrayA, 20, 17.5);
    if (searchResult == -1) {
        cout << "17.5 not found in arrayA." << endl;
    } else {
        cout << "17.5 found at index " << searchResult << " in arrayA." << endl;
    }

    // Perform binary search for target value 19.7 in arrayC
    searchResult = binarySearch(arrayC, 50, 19.7);
    if (searchResult == -1) {
        cout << "19.7 not found in arrayC." << endl;
    } else {
        cout << "19.7 found at index " << searchResult << " in arrayC." << endl;
    }

    return 0;
}
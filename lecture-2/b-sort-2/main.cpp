#include <iostream>
#include <vector>
using namespace std;

// Function to swap two numbers
void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

// Bubble Sort function to sort an array in descending order
void bubbleSort(vector<float> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) { // Outer loop for passes
        bool swapped = false; // Track whether a swap occurred
        for (int j = 0; j < n - i - 1; j++) { // Inner loop to compare adjacent elements
            if (arr[j] < arr[j + 1]) { // Swap if the current element is smaller than the next
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) { // If no swaps occurred, the array is already sorted
            break;
        }
    }
}

int main() {
    // Example array
    vector<float> a = {2.3, 5.1, 9.7, 1.4, 8.2, 3.6, 0.4, 7.8, 6.9, 10.1, 4.3, 8.8, 9.0, 3.5, 6.1, 7.3, 2.1, 1.9, 5.0, 0.6};

    // Call the bubbleSort function
    bubbleSort(a);

    // Print sorted array
    cout << "Sorted array in descending order:" << endl;
    for (float num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
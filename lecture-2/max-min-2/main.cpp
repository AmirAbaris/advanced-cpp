#include <iostream>
using namespace std;

// Function to find the maximum and minimum values in an array
void maxMin(float x[], int n, float *M, float *m) {
    float max, min;
    max = min = x[0]; // Initialize max and min with the first element of the array

    for (int i = 1; i < n; i++) { // Loop through the array starting from the second element
        if (x[i] > max) {
            max = x[i]; // Update max if the current element is greater
        } else if (x[i] < min) {
            min = x[i]; // Update min if the current element is smaller
        }
    }

    *M = max; // Store the maximum value at the memory location pointed by M
    *m = min; // Store the minimum value at the memory location pointed by m
}

int main() {
    float a[100], Max, Min; // Array of 100 elements, and variables to hold max and min values
    int i;

    // Input the array elements
    cout << "Enter 100 float numbers: " << endl;
    for (i = 0; i < 100; i++) {
        cin >> a[i];
    }

    // Call the MaxMin function
    maxMin(a, 100, &Max, &Min);

    // Output the results
    cout << "Max = " << Max << endl;
    cout << "Min = " << Min << endl;

    return 0;
}
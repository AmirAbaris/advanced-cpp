#include <iostream>
using namespace std;

// Recursive Fibonacci Function
int fibonacci(int n) {
    if (n == 0) 
        return 0; // Base case: Fibonacci of 0 is 0
    if (n == 1 || n == 2) 
        return 1; // Base case: Fibonacci of 1 or 2 is 1

    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int position;

    // Input: Read the position of Fibonacci sequence
    cout << "Enter the position in Fibonacci sequence: ";
    cin >> position;

    // Output: Display the Fibonacci number at the given position
    cout << "Fibonacci number at position " << position << " is " << fibonacci(position) << endl;

    return 0;
}
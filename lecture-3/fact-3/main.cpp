#include <iostream>
using namespace std;

// Function to calculate factorial iteratively
int factorialIterative(int number) {
    int factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}

// Function to calculate factorial recursively
int factorialRecursive(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return number * factorialRecursive(number - 1);
}

int main() {
    int choice, number;

    cout << "Choose Factorial Calculation Method:\n";
    cout << "1. Iterative\n";
    cout << "2. Recursive\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return 1;
    }

    if (choice == 1) {
        cout << "Factorial (Iterative): " << factorialIterative(number) << endl;
    } else if (choice == 2) {
        cout << "Factorial (Recursive): " << factorialRecursive(number) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
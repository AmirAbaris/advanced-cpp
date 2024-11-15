#include <iostream>
using namespace std;

// Iterative GCD (Greatest Common Divisor) Function
int iterativeGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a; // GCD is stored in 'a'
}

// Recursive GCD (Greatest Common Divisor) Function
int recursiveGCD(int a, int b) {
    if (b == 0)
        return a; // Base case: GCD is 'a' when 'b' becomes 0
    return recursiveGCD(b, a % b); // Recursive call
}

int main() {
    int num1 = 24, num2 = 18;

    // Using the Iterative GCD Function
    cout << "GCD of " << num1 << " and " << num2 << " (Iterative): " << iterativeGCD(num1, num2) << endl;

    // Using the Recursive GCD Function
    cout << "GCD of " << num1 << " and " << num2 << " (Recursive): " << recursiveGCD(num1, num2) << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Function to calculate power using exponentiation by squaring
float calculatePower(float base, int exponent) {
    if (exponent == 0)
        return 1; // Base case: Any number to the power of 0 is 1

    float halfPower = calculatePower(base, exponent / 2);

    if (exponent % 2 == 0)
        return halfPower * halfPower; // If exponent is even: base^(n) = (base^(n/2))^2
    else
        return base * halfPower * halfPower; // If exponent is odd: base^(n) = base * (base^(n/2))^2
}

int main() {
    float base;
    int exponent;

    // Input: Read base and exponent
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Output: Display the result of base^exponent
    cout << base << "^" << exponent << " = " << calculatePower(base, exponent) << endl;

    return 0;
}
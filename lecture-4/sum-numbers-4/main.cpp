#include <iostream>
using namespace std;

int sum(int number)
{
    if (number == 0) // Base case: when the number becomes 0, stop recursion.
        return 0;
        
    return (number % 10) + sum(number / 10); // Recursive case: add the last digit to the sum of the rest.
}

int main()
{
    int number = sum(152); // Calculate the sum of digits of 152.
    cout << number; // Output the result.
    return 0;
}
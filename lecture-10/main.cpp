#include <iostream>
using namespace std;

// friend function -> not a part of the class but can access the private members of the class
// ex -> multiple 2 numbers using friend function

class Multiply
{
private:
    int a, b;
public:
    // friend function
    friend int mulNumbers(int a, int b);
};

int mulNumbers(int a, int b) {
    return a * b;
};

int main()
{
    int a = 2;
    int b = 3;
    cout << mulNumbers(a, b) << endl;
    return 0;
}
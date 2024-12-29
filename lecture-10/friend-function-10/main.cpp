#include <iostream>
using namespace std;

// friend function -> not a part of the class but can access the private members of the class
// ex -> multiple 2 numbers using friend function

class Multiply
{
private:
    int a, b;
public:
    Multiply(int x, int y) : a(x), b(y) {}
    // friend function
    friend int mulNumbers(Multiply &m);
};

int mulNumbers(Multiply &m) {
    return m.a * m.b;
};

int main()
{
    Multiply m(2, 3);
    cout << mulNumbers(m) << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// TODO: fix bugs
// TODO: add other operations
// TODO: adade mokhtalet - matris

struct Ratio
{
    int numerator;
    int denominator;
};

class RationClass {
    friend Ratio &operator*(const Ratio &lhs, const Ratio &rhs);
}

Ratio &operator*=(Ratio &lhs, const Ratio &rhs) {
    lhs.numerator *= rhs.numerator;
    lhs.denominator *= rhs.denominator;
    return lhs;
}


int main() {
    return 0;
}
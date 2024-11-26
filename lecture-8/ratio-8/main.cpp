#include <iostream>
using namespace std;

class Ratio 
{
    private:
    int numerator;
    int denominator;

    public:
    // constructor
    Ratio(int num, int denom)
    {
        if (denom == 0)
            throw invalid_argument("Denominator cannot be zero.");

        numerator = num;
        denominator = denom;
    }

    void invert() 
    {
        if (numerator == 0) 
            throw invalid_argument("Numerator cannot be zero for inversion.");
        
        swap(numerator, denominator); // Swap numerator and denominator
    }

    // no need to get deep with this one!
    void display() const 
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    try {
        Ratio r(1, 2); // Create a ratio 1/2
        cout << "Original ratio: ";
        r.display();

        r.invert(); // Invert the ratio
        cout << "Inverted ratio: ";
        r.display();
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
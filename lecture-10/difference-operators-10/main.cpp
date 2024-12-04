#include <iostream>
using namespace std;

// Struct to represent a set of numbers
struct NumberStruct {
    int num1;
    int num2;
    int num3;
};

// Class to represent a number set
class NumberClass {
private:
    int num1;
    int num2;
    int num3;

public:
    // Constructor for easy initialization
    NumberClass(int n1 = 0, int n2 = 0, int n3 = 0) : num1(n1), num2(n2), num3(n3) {}

    // Overloaded '==' operator as a member function to compare with NumberStruct
    bool operator==(const NumberStruct& other) const {
        return num1 == other.num1 && num2 == other.num2 && num3 == other.num3;
    }
};

int main() {
    // Create an instance of NumberStruct
    NumberStruct structNum = {1, 2, 3};
    
    // Create an instance of NumberClass
    NumberClass classNum(1, 2, 3);

    // Check if the NumberClass instance is equal to the NumberStruct instance
    if (classNum == structNum) {
        cout << "The NumberClass and NumberStruct instances are equal." << endl;
    } else {
        cout << "The NumberClass and NumberStruct instances are not equal." << endl;
    }

    return 0;
}

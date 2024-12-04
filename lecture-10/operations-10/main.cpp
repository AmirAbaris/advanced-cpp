#include <iostream>
#include <string>
using namespace std;

// we use operations to introduce a functionality for ex string1 + string2 => ali + reza = alireza

struct PersonStruct {
    string name;
    int age;
    int height;
};

class PersonClass {
private:
    string name;
    int age;
    int height;
public:
string stickNames(string name1, string name2) {
    return name1 + name2;
}

string refactor(string name1) {
    PersonStruct person1;
    person1.name = name1;
    return person1.name;
}

};

int main()
{
    // Example of working with the struct
    PersonStruct person2;
    person2.name = "john";
    person2.age = 25;
    person2.height = 170;

    cout << "Person Struct Name: " << person2.name << endl;
    cout << "Person Struct Age: " << person2.age << endl;
    cout << "Person Struct Height: " << person2.height << " cm" << endl;

    // Example of working with the class
    string name1 = "ali";
    string name2 = "reza";
    PersonClass person1;
    cout << "Concatenated Names: " << person1.stickNames(name1, name2) << endl;
    cout << "Refactored Name: " << person1.refactor(name1) << endl;

    return 0;
}
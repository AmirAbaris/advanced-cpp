#include <iostream>
#include <string>
using namespace std;

// Struct to represent a person
struct PersonStruct {
    string name;
    int age;
    int height;
};

// Class to manage person operations
class PersonClass {
private:
    string name;
    int age;
    int height;

public:
    // Method to set the name using chaining
    PersonClass& setName(string newName) {
        this->name = newName;
        return *this; // Enables chaining
    }

    // Method to set the age using chaining
    PersonClass& setAge(int newAge) {
        this->age = newAge;
        return *this; // Enables chaining
    }

    // Method to set the height using chaining
    PersonClass& setHeight(int newHeight) {
        this->height = newHeight;
        return *this; // Enables chaining
    }

    // Method to display the person details
    void display() const {
        cout << "PersonClass Name: " << name << endl;
        cout << "PersonClass Age: " << age << endl;
        cout << "PersonClass Height: " << height << " cm" << endl;
    }

    // Concatenates two names
    string stickNames(string name1, string name2) {
        return name1 + name2;
    }

    // Refactors and returns a name
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

    // Chaining with 'this' pointer
    person1.setName("Ali Reza")
           .setAge(30)
           .setHeight(180)
           .display();

    // Using other methods
    cout << "Concatenated Names: " << person1.stickNames(name1, name2) << endl;
    cout << "Refactored Name: " << person1.refactor(name1) << endl;

    return 0;
}

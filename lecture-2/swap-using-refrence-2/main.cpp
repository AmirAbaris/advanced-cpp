#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[50];
    float grades[3];
    float average;
};

// Swap function using references
void swapStudents(Student &a, Student &b) {
    Student temp = a; // Create a temporary copy of `a`
    a = b;            // Assign `b` to `a`
    b = temp;         // Assign the temporary copy (original `a`) to `b`
}

int main() {
    // Create two students
    Student s1 = {101, "Alice", {90, 85, 88}, 87.67};
    Student s2 = {102, "Bob", {78, 80, 82}, 80.00};

    cout << "Before Swap:" << endl;
    cout << "Student 1: " << s1.name << ", ID: " << s1.id << ", Average: " << s1.average << endl;
    cout << "Student 2: " << s2.name << ", ID: " << s2.id << ", Average: " << s2.average << endl;

    // Swap the students
    swapStudents(s1, s2);

    cout << "\nAfter Swap:" << endl;
    cout << "Student 1: " << s1.name << ", ID: " << s1.id << ", Average: " << s1.average << endl;
    cout << "Student 2: " << s2.name << ", ID: " << s2.id << ", Average: " << s2.average << endl;

    return 0;
}
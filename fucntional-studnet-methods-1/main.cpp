#include <iostream>
#include <cstring>
using namespace std;

// advanced coding - section 1
// the purpose of this section is to use the functions in the main program

struct Student
{
    int id;
    char name[50];
    float grades[3];
    float average;
};

// Function Prototypes
Student readStudents();
void sortDescendingAve(Student student[]);
void print(Student student[], int size);
int findStudentById(Student student[], int size, int id);

int main()
{
    const int size = 4; // Number of students
    Student student[size];
    
    // Read students
    for (int i = 0; i < size; i++)
    {
        cout << "Enter details for student " << i + 1 << " (name, id, and 3 grades): " << endl;
        student[i] = readStudents();
    }

    // Sort students by descending average
    sortDescendingAve(student);

    // Print sorted students
    cout << "Students sorted by descending average:" << endl;
    print(student, size);

    // Find a student by ID
    int searchId;
    cout << "Enter student ID to search for: ";
    cin >> searchId;

    int index = findStudentById(student, size, searchId);
    if (index != -1)
    {
        cout << "Student found:" << endl;
        cout << "Name: " << student[index].name << ", ID: " << student[index].id
             << ", Average: " << student[index].average << endl;
    }
    else
    {
        cout << "Student with ID " << searchId << " not found." << endl;
    }

    return 0;
}

// Function to read a single student's data
Student readStudents()
{
    Student student;
    float sum = 0;

    cin >> student.name >> student.id;
    cout << "Enter 3 grades for " << student.name << ": ";
    for (int i = 0; i < 3; i++)
    {
        cin >> student.grades[i];
        sum += student.grades[i];
    }

    student.average = sum / 3;
    return student;
}

// Function to sort students by descending average
void sortDescendingAve(Student student[])
{
    Student temp;

    for (int i = 0; i < 4; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (student[j].average > student[maxIndex].average)
            {
                maxIndex = j;
            }
        }

        temp = student[i];
        student[i] = student[maxIndex];
        student[maxIndex] = temp;
    }
}

// Function to print all students
void print(Student student[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << student[i].name << ", ID: " << student[i].id
             << ", Average: " << student[i].average << endl;
    }
}

// Function to find a student by their ID
int findStudentById(Student student[], int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (student[i].id == id)
        {
            return i; // Return the index of the found student
        }
    }
    return -1; // Return -1 if the student is not found
}
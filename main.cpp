#include <iostream>
#include <string>
using namespace std;

#pragma region structs
struct Student
{
    int id;
    string name;
    float gpa;
};

#pragma endregion

#pragma region main methods
// Write a method which reads items of an array and multiplies them.
int multiplyNumbers(int arr[], int size)
{
    // Init result var
    int product = 1; // Initialize to 1 for multiplication
    // Iterate over all the array items
    for (int i = 0; i < size; i++)
    {
        // Multiply items
        product *= arr[i];
    }

    cout << "Size of array: " << size << endl;
    return product;
}

// Write a method which reads items of an array and sums them.
int sumsNumbers(int arr[], int size)
{
    // Init result var
    int product = 0; // Initialize to 1 for multiplication
    // Iterate over all the array items
    for (int i = 0; i < size; i++)
    {
        // sum items
        product += arr[i];
    }

    cout << "Size of array: " << size << endl;
    return product;
}

// write a program which sorts the array (ascending or descending)
void bubbleSort(int arr[], int size)
{
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// write a method which reads the number and returns the inverts of the numbers
int invertNumbers(int number)
{
    int invertedNumber = 0;

    while (number)
    {
        int lastDigit = number % 10;
        invertedNumber = invertedNumber * 10 + lastDigit;
        number = number / 10;
    }

    return invertedNumber;
}

void inputStudent(Student student, int id, string name, float gpa)
{
    student.id = id;
    student.name = name;
    student.gpa = gpa;
}

void displayStudent(Student student)
{
    cout << "Student ID: " << student.id << endl;
    cout << "Student Name: " << student.name << endl;
    cout << "Student GPA: " << student.gpa << endl;
}
#pragma endregion

int main()
{
#pragma region properties
    Student student;
    
    int number = 12345;
    int numbers[] = {2, 11, 12, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int id = 123;
    string name = "John Doe";
    float gpa = 3.75;
#pragma endregion

#pragma region method action
    int mulResult = multiplyNumbers(numbers, size);
    int sumResult = sumsNumbers(numbers, size);
    int invertNumbResult = invertNumbers(number);
    inputStudent(student, id, name, gpa);
    displayStudent(student);
#pragma endregion

#pragma region outputs
    cout << "The mul product of the array elements is: " << mulResult << endl;
    cout << "The sum product of the array elements is: " << sumResult << endl;
    cout << "The invert product of the array elements is: " << invertNumbResult << endl;
#pragma endregion

    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student 
{
    string name;
    int marks;
};

void inputStudentData(Student*& students, int& numStudents) 
{
    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0) 
    {
        cout << "Invalid number of students. Please enter a positive value.\n";
        return;
    }

    students = new Student[numStudents]; 

    for (int i = 0; i < numStudents; ++i) 
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, students[i].name); 
        cout << "Marks: ";
        cin >> students[i].marks;
    }
}

void displayStudentData(const Student* students, int numStudents) 
{
    cout << setw(20)  << "Name" << setw(10) << "Marks" << endl;
    for (int i = 0; i < numStudents; ++i) 
    {
        cout << setw(20)  << students[i].name << setw(10) << students[i].marks << endl;
    }
}

double calculateAverageMarks(const Student* students, int numStudents) 
{
    int totalMarks = 0;
    for (int i = 0; i < numStudents; ++i) 
    {
        totalMarks += students[i].marks;
    }
    return static_cast<double>(totalMarks) / numStudents;
}

void findStudentWithHighestMark(const Student* students, int numStudents) 
{
    int highestMark = 0, highestMarkIndex = 0;
    for (int i = 0; i < numStudents; ++i) 
    {
        if (students[i].marks > highestMark) 
        {
            highestMark = students[i].marks;
            highestMarkIndex = i;
        }
    }
    cout << "Student with the highest mark (" << highestMark << "):\n";
    cout << setw(20) << "Name" << setw(10) << "Marks" << endl;
    
    cout << setw(20)  << students[highestMarkIndex].name << setw(10) << highestMark << endl;
}

int main() 
{
    int numStudents = 0;
    Student* students = nullptr;

    inputStudentData(students, numStudents);
    displayStudentData(students, numStudents);

    double averageMark = calculateAverageMarks(students, numStudents);
    cout << "Average mark: " << fixed << setprecision(2) << averageMark << endl;

    findStudentWithHighestMark(students, numStudents);

    delete[] students;

    return 0;
}

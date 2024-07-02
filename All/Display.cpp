 #include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    int marks;
};

void Studentdetail(Student students[], int numStudents)
{
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Enter details for student : " << i + 1 << "\n";
        cout << "\\tName: ";
        cin.ignore(); 
        getline(cin, students[i].name);
        cout << "\tMarks: ";
        cin >> students[i].marks;
    }
}

void display(const Student students[], int numStudents)
{
    cout << setw(20) << "Name" << setw(10) << "Marks" << endl;
    for (int i = 0; i < numStudents; ++i)
    {
        cout << setw(20) << students[i].name << setw(10) << students[i].marks << endl;
    }
}

double Average(const Student students[], int numStudents)
{
    if (numStudents == 0)
    {
        return 0.0;
    }

    int totalMarks = 0;
    for (int i = 0; i < numStudents; ++i)
    {
        totalMarks += students[i].marks;
    }
    return static_cast<double>(totalMarks) / numStudents;
}

void HighestMark(const Student students[], int numStudents)
{
    if (numStudents == 0)
    {
        cout << "No students to find.\n";
        return;
    }

    int highestMark = students[0].marks, highestMarkIndex = 0;
    for (int i = 1; i < numStudents; ++i)
    {
        if (students[i].marks > highestMark)
        {
            highestMark = students[i].marks;
            highestMarkIndex = i;
        }
    }
    cout << "Student with the highest mark (" << highestMark << "):\n";
    cout <<"Name" <<": " << "Marks" << endl;

    cout << students[highestMarkIndex].name << " : "  << highestMark << endl;
}

int main()
{
    const int MaxStudents = 100; 
    Student students[MaxStudents];
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > MaxStudents)
    {
        cout << "Invalid number of students. Please enter a positive value less than or equal to " << MaxStudents << ".\n";
        return 1;
    }

    Studentdetail(students, numStudents);
    display(students, numStudents);

    double averageMark = Average(students, numStudents);
    cout << "Average mark: " << fixed << " : " << averageMark << endl;

    HighestMark(students, numStudents);

    return 0;
}

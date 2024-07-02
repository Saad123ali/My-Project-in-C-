// #include<iostream>
// #include<iomanip>
// #include<string>
// using namespace std;

// int main()
// {
//     int rows = 3;
//     int cols = 4;

//     string **array = new string*[rows];
//     for(int i = 0; i < rows; i++)
//     {
//         array[i] = new string[cols];
//     }

//     for(int i = 0; i < rows; i++)
//     {
//         cout << "Enter Data of Employee: " << i + 1 << endl;
//         for(int j = 0; j < cols; j++)
//         {
//             if(j == 0)
//             {
//                 cout << "Enter Name: ";
//             }
//             else if(j == 1)
//             {
//                 cout << "Enter Salary: ";
//             }
//             else if(j == 2)
//             {
//                 cout << "Enter Experience: ";
//             }
//             else if(j == 3)
//             {
//                 cout << "Enter Tax: ";
//             }
//             getline(cin, array[i][j]);
//         }
//     }

//     system("cls");
//     cout << setw(15) << "Name" << setw(15) << "Salary" << setw(15) << "Experience" << setw(15) << "Tax" << endl;
//     for(int i = 0; i < rows; i++)
//     {
//         for(int j = 0; j < cols; j++)
//         {
//             cout << setw(15) << array[i][j];
//         }
//         cout << endl;
//     }

//     for(int i = 0; i < rows; i++)
//     {
//         delete[] array[i];
//     }
//     delete[] array;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 100;
double employees[MAX_EMPLOYEES][4]; // Each row represents an employee: [name, salary, experience, taxRate]
int empCount = 0;

void addData()
{
    if (empCount < MAX_EMPLOYEES)
    {
        cout << "\nEnter Name of Employee: ";
        cin.ignore(); // Clear the input buffer
        string name; // Using string for employee name
        getline(cin, name);
        employees[empCount][0] = name; // Store the name in the array
        cout << "Enter Salary of Employee: ";
        cin >> employees[empCount][1];
        cin.ignore();
        cout << "Enter Experience of Employee (years): ";
        cin >> employees[empCount][2];
        cout << "Enter tax rate of Employee (%): ";
        cin >> employees[empCount][3];
        empCount++;
        cout << "\nEmployee Added Successfully.\n";
    }
    else
    {
        cout << "\nMaximum employee limit reached.\n";
    }
}

void showData()
{
    if (empCount == 0)
    {
        cout << "\nPlease Add at least one Employee\n";
    }
    else
    {
        cout << "\n\tName\tSalary\tExperience\tTax\n";
        for (int i = 0; i < empCount; i++)
        {
            double tax = employees[i][1] * (employees[i][3] / 100);
            cout << "\t" << employees[i][0] << "\t" << employees[i][1] << "\t"
                 << employees[i][2] << " years\t" << tax << " %\n";
        }
    }
}

void calculateSalary()
{
    if (empCount == 0)
    {
        cout << "\nPlease Add at least one Employee\n";
    }
    else
    {
        int id;
        cout << "\nEnter Employee Id: ";
        cin >> id;
        if (id >= 1 && id <= empCount)
        {
            double tax = employees[id - 1][1] * (employees[id - 1][3] / 100);
            double totalSalary = employees[id - 1][1] - tax;
            cout << "\nEmployee Id: " << id;
            cout << "\nName: " << employees[id - 1][0];
            cout << "\nSalary: " << employees[id - 1][1];
            cout << "\nTax: " << tax;
            cout << "\nTotal Salary: " << totalSalary << "\n";
        }
        else
        {
            cout << "\nInvalid Employee Id\n";
        }
    }
}

int main()
{
    while (true)
    {
        string choice;
        cout << "\n[1] Add Data";
        cout << "\n[2] Calculate Salary";
        cout << "\n[3] Show Data";
        cout << "\n[0] Exit";
        cout << "\n--> ";
        cin >> choice;
        if (choice == "1")
        {
            addData();
        }
        else if (choice == "2")
        {
            calculateSalary();
        }
        else if (choice == "3")
        {
            showData();
        }
        else if (choice == "0")
        {
            cout << "\nGoodbye!\n";
            break;
        }
        else
        {
            cout << "\nInvalid Choice\n";
        }
    }
}
#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 100;
double employees[MAX_EMPLOYEES][4]; // Each row represents an employee: [name, salary, experience, taxRate]
int empCount = 0;

void addData()
{
    if (empCount < MAX_EMPLOYEES)
    {
        cout << "\nEnter Name of Employee: ";
        string name; // Using string for employee name
        getline(cin, name);
        employees[empCount][0] = name; // Store the name in the array
        cout << "Enter Salary of Employee: ";
        cin >> employees[empCount][1];
        cout << "Enter Experience of Employee (years): ";
        cin >> employees[empCount][2];
        cout << "Enter tax rate of Employee (%): ";
        cin >> employees[empCount][3];
        empCount++;
        cout << "\nEmployee Added Successfully.\n";
    }
    else
    {
        cout << "\nMaximum employee limit reached.\n";
    }
}

void showData()
{
    if (empCount == 0)
    {
        cout << "\nPlease Add at least one Employee\n";
    }
    else
    {
        cout << "\n\tName\tSalary\tExperience\tTax\n";
        for (int i = 0; i < empCount; i++)
        {
            double tax = employees[i][1] * (employees[i][3] / 100);
            cout << "\t" << employees[i][0] << "\t" << employees[i][1] << "\t"
                 << employees[i][2] << " years\t" << tax << " %\n";
        }
    }
}

void calculateSalary()
{
    if (empCount == 0)
    {
        cout << "\nPlease Add at least one Employee\n";
    }
    else
    {
        int id;
        cout << "\nEnter Employee Id: ";
        cin >> id;
        if (id >= 1 && id <= empCount)
        {
            double tax = employees[id - 1][1] * (employees[id - 1][3] / 100);
            double totalSalary = employees[id - 1][1] - tax;
            cout << "\nEmployee Id: " << id;
            cout << "\nName: " << employees[id - 1][0];
            cout << "\nSalary: " << employees[id - 1][1];
            cout << "\nTax: " << tax;
            cout << "\nTotal Salary: " << totalSalary << "\n";
        }
        else
        {
            cout << "\nInvalid Employee Id\n";
        }
    }
}

int main()
{
    while (true)
    {
        string choice;
        cout << "\n[1] Add Data";
        cout << "\n[2] Calculate Salary";
        cout << "\n[3] Show Data";
        cout << "\n[0] Exit";
        cout << "\n--> ";
        cin >> choice;
        if (choice == "1")
        {
            addData();
        }
        else if (choice == "2")
        {
            calculateSalary();
        }
        else if (choice == "3")
        {
            showData();
        }
        else if (choice == "0")
        {
            cout << "\nGoodbye!\n";
            break;
        }
        else
        {
            cout << "\nInvalid Choice\n";
        }
    }
    return 0;
}

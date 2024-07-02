// #include<iostream>
// #include<string>
// using namespace std;
// struct Student
// {
//     string name;
//     int marks;
// };
// int max =100;
// struct Student students[max];
// void Studentdetail()
// {
//     for(int i = 0; i < 100; i++)
//     {
//         cout<<"Enter the details of the student:"<<i+1<<endl;
//         cout<<"\nName: ";
//         cin.ignore();
//         getline(cin, students[i].name);
//         cout<<"\nMarks"<<endl;
//         cin>>students[i].marks;
//     }
// }
// void dispaly()
// {
//     cout<<"\n\tName\t\tMarks"<<endl;
//     for(int i=0;i<100;i++)
//     {
//         cout<<students[i].name<<endl;
//         cout<<students[i].marks<<endl;
//     }
// }
// double average()
// {
//     if (max == 0)
//     {
//         return 0.0;
//     }
//     int total = 0;
//     for(int i=0; i< 100; i++)
//     {
//         total += students[i].marks;
//     }
//     return static_cast<double>(total)/max;
// }
// void highestMark()
// {
//     if (max == 0)
//     {
//         cout<<"No students found"<<endl;
//         return;
//     }
//     int highest = students[0].marks, highestMarkIndex = 0;
//     for(int i=0; i< 100; i++)
//     {
//         if(students[i].marks>highest)
//         {
//             highest = students[i].marks;
//             highestMarkIndex = i;
//         }
//     }
//     cout<<"Student with highest marks: "<<highestMarkIndex<<endl;
//     cout<<"Name\t Marks"<<endl;
//     cout<<students[highestMarkIndex].name<<endl;
//     cout<<students[highestMarkIndex].marks<<endl;
// }
// #include<iostream>
// #include<string>
// using namespace std;

// struct Student
// {
//     string name;
//     int marks;
// };

// const int maxStudents = 100;
// struct Student students[maxStudents];

// void Studentdetail(int numStudents)
// {
//     for (int i = 0; i < numStudents; i++)
//     {
//         cout << "Enter the details of student " << i + 1 << ":" << endl;
//         cout << "Name: ";
//         cin.ignore();
//         getline(cin, students[i].name);
//         cout << "Marks: ";
//         cin >> students[i].marks;
//     }
// }

// void display(int numStudents)
// {
//     cout << "\n\tName\t\tMarks" << endl;
//     for (int i = 0; i < numStudents; i++)
//     {
//         cout << students[i].name << "\t" << students[i].marks << endl;
//     }
// }

// double average(int numStudents)
// {
//     if (numStudents == 0)
//     {
//         return 0.0;
//     }
//     int total = 0;
//     for (int i = 0; i < numStudents; i++)
//     {
//         total += students[i].marks;
//     }
//     return static_cast<double>(total) / numStudents;
// }

// void highestMark(int numStudents)
// {
//     if (numStudents == 0)
//     {
//         cout << "No students found" << endl;
//         return;
//     }
//     int highest = students[0].marks, highestMarkIndex = 0;
//     for (int i = 0; i < numStudents; i++)
//     {
//         if (students[i].marks > highest)
//         {
//             highest = students[i].marks;
//             highestMarkIndex = i;
//         }
//     }
//     cout << "Student with the highest marks:" << endl;
//     cout << "Name: " << students[highestMarkIndex].name << endl;
//     cout << "Marks: " << students[highestMarkIndex].marks << endl;
// }

// int main()
// {
//     int numStudents;

//     cout << "How many student details do you want to input? ";
//     cin >> numStudents;

//     if (numStudents <= 0 || numStudents > maxStudents)
//     {
//         cout << "Invalid number of students!" << endl;
//         return 1; // Indicate an error
//     }

//     Studentdetail(numStudents);
//     display(numStudents);

//     double avg = average(numStudents);
//     cout << "Average Marks: " << avg << endl;

//     highestMark(numStudents);

//     return 0;
// }

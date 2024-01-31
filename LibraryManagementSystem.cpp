#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
const int MAX_BOOKS = 100;
const int MAX_STUDENTS =50;

// Book structure
struct Book
{
    int id;
    string name;
    string author;
    bool isIssued;
};

// Student structure
struct Student
{
    int id;
    string name;
    int issuedBookCount;
    Book issuedBooks[MAX_BOOKS];
};
Book books[MAX_BOOKS];
int bookCount = 0;
Student students[MAX_STUDENTS];
int studentCount = 0;

// generate Book id
int generatedBookId()
{
    static int nextID = 1;
    return nextID++;
}

// generate student id
int generatedStudentId()
{
    static int nextID = 1;
    return nextID++;
}

// add book
void addBook()
{
    system("cls");
    if ( bookCount == MAX_BOOKS )
    {
        cout<<"Book Storage Full."<<endl;
        return;
    }

    Book book;
    book.id =generatedBookId();
    cout<<"Enter book name: ";
    cin.ignore();
    getline(cin, book.name);
    cout<<"Enter author name: ";
    getline(cin, book.author);
    book.isIssued = false;
    books[bookCount++]=book;
    cout<<"Book added successfully!"<<endl;
}

// add student
void addStudent()
{
    system("cls");
    if ( studentCount == MAX_STUDENTS )
    {
        cout<<"Student Storage Full."<<endl;
        return;
    }

    Student student;
    student.id = generatedStudentId();
    cout<<"Enter student name: ";
    cin.ignore();
    getline(cin, student.name);
    student.issuedBookCount = 0;
    students[studentCount++] = student;
    cout<<"Student added successfully!"<<endl;
}

// dispaly all books
void displayAllBooks() 
{
    system("cls");
    if (bookCount == 0)
    {
        cout<<"No books in the library!"<<endl;
        return;
    }

    cout<<"Book in the library:"<<endl;
    for( int i= 0; i < bookCount; i++ )
    {
        cout<<"Book id: "<<books[i].id <<endl;
        cout<<"Book name: "<<books[i].name<<endl;
        cout<<"Book author: "<<books[i].author<<endl;
        if (books[i].isIssued)
        {
            cout<<"Issued"<<endl;
        }
        cout<<endl;
    }
}

// display all students
void displayAllStudents()
{
    system("cls");
    if ( studentCount == 0 )
    {
        cout<<"No students in the system!"<<endl;
        return;
    }

    cout<<"Students in the system:"<<endl;
    for( int i=0; i<studentCount; i++ )
    {
        cout<<"Student id: "<< students[i].id<<endl;
        cout<<"Name: "<< students[i].name<<endl;
        cout<<"Issued books: "<< students[i].issuedBookCount<<endl;
        cout<<endl;
    }
}

// search book by name
void searchBookByName()
{
    system("cls");
    if (bookCount == 0)
    {
        cout << "No books in the library." << endl;
        return;
    }

    string searchName;
    cout << "Enter the name of the book to search: ";
    cin.ignore();
    getline(cin, searchName);

    bool bookFound = false; 

    // search book by name loop
    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].name == searchName)
        {
            cout << "\tBook found!" << endl;
            cout << "\tBook id: " << books[i].id << endl;
            cout << "\tBook name: " << books[i].name << endl;
            cout << "\tAuthor: " << books[i].author << endl;
            if (books[i].isIssued)
            {
                cout << "\tIssued";
            }
            cout << endl;

            bookFound = true;
            break; 
        }
    }

    if (!bookFound)
    {
        cout << "Book not found for the name: " << searchName << endl;
    }
}


// display book by author
void displayBooksByAuthor()
{
    system("cls");
    if (bookCount == 0)
    {
        cout << "No books in the library!" << endl;
        return;
    }

    string searchAuthor;
    cout << "Enter the author name: ";
    cin.ignore();
    getline(cin, searchAuthor);

    bool booksFound = false; 

    cout << "Books by " << searchAuthor << " :" << endl;

    // search book by name of author  loop
    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].author == searchAuthor)
        {
            cout << "Book id: " << books[i].id << endl;
            cout << "Name: " << books[i].name << endl;
            cout << "Author: " << books[i].author << endl;
            if (books[i].isIssued)
            {
                cout << "Issued";
            }
            cout << endl;

            booksFound = true; 
        }
    }

    if (!booksFound)
    {
        cout << "No books found for the author: " << searchAuthor << endl;
    }
}


// search student by name
void searchStudentByName() 
{
    system("cls");
    if (studentCount == 0) 
    {
        cout<<"No students in the system."<<endl;
        return;
    }

    string searchName;
    cout<<"Enter the name of the student to search: ";
    cin.ignore(); 
    getline(cin, searchName);
    // search student loop
    for (int i = 0; i < studentCount; ++i) 
    {
        if (students[i].name == searchName) 
        {
            cout<<"Student found!"<<endl;
            cout<<"Student ID: "<<students[i].id<<endl;
            cout<<"Name: " <<students[i].name<<endl;
            cout<<"Issued Books: " << students[i].issuedBookCount<<endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

// issue book
void issueBook()
{
    system("cls");
    if ( bookCount == 0 || studentCount == 0 )
    {
        cout<<"No books or students in the system."<<endl;
        return;
    }

    int studentid , bookid;
    cout<<"Enter the student id: ";
    cin>>studentid;
    // find the studdent
    int studentIndex = -1;
    for( int i=0; i<studentCount; i++ )
    {
        if (students[i].id == studentid)
        {
            studentIndex = i;
            break;
        }
    }
    // else student not found
    if ( studentIndex == -1 )
    {
        cout<<"Student not found!"<<endl;
        return;
    }

    cout<<"Enter book id to issue: ";
    cin>>bookid;
    // find the book
    int bookIndex = -1;
    for( int i = 0; i<bookCount; i++ )
    {
        if(bookid == books[i].id)
        {
            bookIndex = i;
            break;
        }
    }
    // else  book not found
    if ( bookIndex == -1 )
    {
        cout<<"Book not found!"<<endl;
        return;
    }

    // check if book already issued
    if(books[bookIndex].isIssued)
    {
        cout<<"Book already issued!"<<endl;
        return;
    }

    // chek if student has reached maximum allowed issued book
    if(students[studentIndex].issuedBookCount == MAX_BOOKS)
    {
        cout<<"Student has reached maximum allowed issued book!"<<endl;
        return;
    }

    // issue book to the student
    books[bookIndex].isIssued = true;
    students[studentIndex].issuedBooks[students[studentIndex].issuedBookCount++] = books[bookIndex];
    cout<<"Book issued successfully!"<<endl;
}

// return book 
void returnBook()
{
    system("cls");
    if (bookCount == 0 || studentCount == 0) 
    {
        cout << "No books or students in the system." << endl;
        return;
    }

    int studentid , bookid;
    cout<<"Enter student id: ";
    cin>>studentid;
    // find the student
    int studentIndex = -1;
    for(int i=0; i<studentCount; i++)
    {
        if( students[i].id == studentid )
        {
            studentIndex = i;
            break;
        }
    }
    // else student not found
    if ( studentIndex == -1 )
    {
        cout<<"Student not found!"<<endl;
        return;
    }

    cout<<"Enter book id to return: ";
    cin>>bookid;
    // find the book 
    int bookIndex = -1;
    for(int i=0; i<bookCount; i++)
    {
        if( bookid == books[i].id )
        {
            bookIndex = i;
            break;
        }
    }
    // else book not found
    if ( bookIndex == -1 )
    {
        cout<<"Book not found!"<<endl;
        return;
    }

    // check if the book actually issued to the student
    bool bookIssuedToStudent = false;
    for( int i=0; i<students[studentIndex].issuedBookCount; i++ )
    {
        if ( students[studentIndex].issuedBooks[i].id == bookid )
        {
            bookIssuedToStudent = true;
            break;
        }
    }
    // if book is not issued to student
    if (!bookIssuedToStudent)
    {
        cout<<"The book is not issued to student!"<<endl;
        return;
    }

    // return the book
    books[bookIndex].isIssued = false;
    students[studentIndex].issuedBookCount--;
    cout<<"Book returned successfully!"<<endl;
}

// delete student from record
void deleteStudent(int studentID) 
{
    system("cls");
    int studentIndex = -1;
    for (int i = 0; i < studentCount; ++i) 
    {
        if (students[i].id == studentID) 
        {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex == -1) 
    {
        cout << "Student not found." << endl;
        return;
    }

    // replace arrray position with delete position
    students[studentIndex] = students[--studentCount];

    cout << "Student deleted successfully!" << endl;
}

// delete book from record
void deleteBook(int bookID) 
{
    system("cls");
    int bookIndex = -1;
    for (int i = 0; i < bookCount; ++i) 
    {
        if (books[i].id == bookID) 
        {
            bookIndex = i;
            break;
        }
    }

    if (bookIndex == -1) 
    {
        cout << "Book not found." << endl;
        return;
    }

    // replace arrray position with delete position
    books[bookIndex] = books[--bookCount];

    cout << "Book deleted successfully!" << endl;
}

// delete all books record
void deleteAllBooks() 
{
    system("cls");
    bookCount = 0;
    cout << "All books deleted successfully!" << endl;
}

// delete all students record
void deleteAllStudents() 
{
    system("cls");
    studentCount = 0;
    cout << "All students deleted successfully!" << endl;
}

int main()
{
    string choice;
    do
    {
        cout << "\n\t\t ______________________________________________\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t| [1]   |     Add Book" << setw(27) << "|\n";
        cout << "\t\t| [2]   |     Add Student" << setw(24) << "|\n";
        cout << "\t\t| [3]   |     Issue Book" << setw(25) << "|\n";
        cout << "\t\t| [4]   |     Return Book" << setw(24) << "|\n";
        cout << "\t\t| [5]   |     Search Book by Name" << setw(16) << "|\n";
        cout << "\t\t| [6]   |     Search Student by Name" << setw(13) << "|\n";
        cout << "\t\t| [7]   |     Display All Books" << setw(18) << "|\n";
        cout << "\t\t| [8]   |     Display All Students" << setw(15) << "|\n";
        cout << "\t\t| [9]   |     Display Books by Author" << setw(12) << "|\n";
        cout << "\t\t| [10]  |     Delete Book Record" << setw(17) << "|\n";
        cout << "\t\t| [11]  |     Delete Student Record" << setw(14) << "|\n";
        cout << "\t\t| [0]   |     Exit" << setw(31) << "|\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t|_______|______________________________________|\n";
        cout << "\n\t\tEnter your choice ... ";
        cin >> choice;

        if (choice == "1")
        {
            addBook();
        }
        else if (choice == "2")
        {
            addStudent();
        }
        else if (choice == "3")
        {
            issueBook();
        }
        else if (choice == "4")
        {
            returnBook();
        }
        else if (choice == "5")
        {
            searchBookByName();
        }
        else if (choice == "6")
        {
            searchStudentByName();
        }
        else if (choice == "7")
        {
            displayAllBooks();
        }
        else if (choice == "8")
        {
            displayAllStudents();
        }
        else if (choice == "9")
        {
            displayBooksByAuthor();
        }
        else if (choice == "10")
        {
            system("cls");
            string dell;
            cout << "\n\t\t ______________________________________________\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t| [1]   |     Specific Book record" << setw(15) << "|\n";
            cout << "\t\t| [2]   |     Delete All Book record" << setw(13) << "|\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t|_______|______________________________________|\n";
            cout << "\n\t\tEnter your choice ... ";
            cin >> dell;
            if (dell == "1")
            {
                int deleteBookid;
                cout << "Enter book id to delete: ";
                cin >> deleteBookid;
                deleteBook(deleteBookid);
            }
            else if (dell == "2")
            {
                deleteAllBooks();
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
        }
        else if (choice == "11")
        {
            system("cls");
            string dells;
            cout << "\n\t\t ______________________________________________\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t| [1]   |     Specific Book record" << setw(15) << "|\n";
            cout << "\t\t| [2]   |     Delete All Book record" << setw(13) << "|\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t|_______|______________________________________|\n";
            cout << "\n\t\tEnter your choice ... ";
            cin >> dells;
            if (dells == "1")
            {
                int deleteStudentID;
                cout << "Enter Student ID to delete: ";
                cin >> deleteStudentID;
                deleteStudent(deleteStudentID);
            }
            else if (dells == "2")
            {
                deleteAllStudents();
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
        }
        else if (choice == "0")
        {
            cout << "Thanks for using this code" << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != "0");

    return 0;
}
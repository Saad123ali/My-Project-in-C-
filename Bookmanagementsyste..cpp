#include<iostream>
#include<string>
#include<iomanip>
#include<cctype>
using namespace std;

// Books structure
struct Book
{
    string title;
    string author;
    string isbn;
    string genre;
    bool available;
};

Book* bookArray = new Book[1]; // Array to store books, initially with size 1
int numbooks = 0; // Number of books currently in the system

// Display all books function
void displaybook()
{
    system("cls");
    // If no books in the system
    if (numbooks == 0)
    {
        cout << "No books in the system.\n";
    }
    else // Display all books in the system
    {
        cout << "\n\n\t\t\t\t\tAll books in the system.\n\n";
        cout << setw(10) << "Book Title" << setw(30) << "Book Author" << setw(30) << "Book ISBN" << setw(30) << "Book Genre" << setw(30) << "Available\n";
        cout << "__________________________________________________________________________________________________________________________________\n" << endl;
        for (int i = 0; i < numbooks; i++)
        {
            cout << setw(5) << bookArray[i].title << setw(26) << bookArray[i].author << setw(31) << bookArray[i].isbn << setw(33) << bookArray[i].genre << setw(28) << (bookArray[i].available ? "YES" : "NO") << "\n";
        }
    }
}

// Issue book function
void borrowbook()
{
    system("cls");
    if ( numbooks == 0 )
    {
        cout<<"Not book available to borrow.\n";
    }
    else
    {
        bool found = false;
        string Title;
        string ISBN;
        
        do {
            cout << "Enter the title of the book to borrow: ";
            cin.ignore();
            getline(cin, Title);

            cout << "Enter the ISBN of the book: ";
            getline(cin, ISBN);

            if (Title.empty() || ISBN.empty()) {
                cout << "\nInvalid input! Please enter both the title and ISBN.\n";
            }
        } while (Title.empty() || ISBN.empty());

        for(int i=0; i<numbooks; i++)
        {
            if(bookArray[i].title == Title && bookArray[i].isbn == ISBN) // match title and ISBN
            {
                if(bookArray[i].available) // search if book is available or not
                {
                    bookArray[i].available = false;
                    found = true;
                    cout << "\nBook borrowed successfully.\n";
                    break;
                }
                else
                {
                    cout << "\nBook not available for borrowing.\n";
                    found = true;
                    break;
                }
            }
        }
        if(!found)
        {
            cout << "\nBook not found in the library.\n";
        }
    }
}

// Return book function
void returnbook()
{
    system("cls");
    bool search = false;
    string Title;
    string ISBN;

    do {
        cout << "Enter the title of the book to return: ";
        cin.ignore();
        getline(cin, Title);

        cout << "Enter the ISBN of the book: ";
        getline(cin, ISBN);

        if (Title.empty() || ISBN.empty()) {
            cout << "\nInvalid input! Please enter both the title and ISBN.\n";
        }
    } while (Title.empty() || ISBN.empty());
    
    for(int i = 0; i < numbooks; i++)
    {
        if(bookArray[i].title == Title && bookArray[i].isbn == ISBN) // match title and ISBN
        {
            if(!bookArray[i].available) // search if book is not available
            {
                bookArray[i].available = true;
                search = true;
                cout << "\nBook returned successfully.\n";
                break;
            }
            else
            {
                cout << "\nBook is already available in the system.\n";
                search = true;
                break;
            }
        }
    }
    if(!search)
    {
        cout << "Book not found in the library.\n";
    }
}


// Display all available books function
void availablebook()  
{
    bool available = false;
    system("cls");
    if (numbooks == 0)  // if no books are available
    {
        cout<<"No books available in the system.\n";
    }
    else 
    {
        for(int i=0; i<numbooks; i++)
        {
            if(bookArray[i].available)
            {
                available = true;
                break;
            }
        }

        if (!available)
        {
            cout << "No books available for borrowing.\n";
        }
        else 
        {
            cout<<"\n\n\t\t\t\t\tAvailable books in this system.\n\n";
            cout<<setw(10) <<"Book title "<<setw(30) <<"Book author "<<setw(30) <<"Book ISBN "<<setw(30) <<"Book Genre"<<"\n";
            cout<<"______________________________________________________________________________________________________\n"<<endl; 
            for(int i=0; i<numbooks; i++)
            {
                if(bookArray[i].available)
                {
                    cout<<setw(5)<<bookArray[i].title<<setw(26)<<bookArray[i].author<<setw(31)<<bookArray[i].isbn<<setw(33)<<bookArray[i].genre<<"\n";
                }
            }
        }
    }
}


// Add book function
void addbook()
{
    system("cls");
    int numBooksToAdd = 0;

    // Loop until valid input is provided
    while (true)
    {
        cout << "How many books do you want to add? ";
        string numBooksStr;
        cin >> numBooksStr;

        // Check if the input contains only digits and is greater than zero
        bool validInput = true;
        for (int i = 0; i < numBooksStr.length(); ++i) 
        {
            if (!isdigit(numBooksStr[i])) 
            {
                validInput = false;
                break;
            }
        }

        if (validInput)
        {
            numBooksToAdd = stoi(numBooksStr);
            if (numBooksToAdd > 0) {
                break; // Exit loop if input is valid and greater than zero
            } else {
                cout << "Invalid input! Please enter a number greater than zero.\n";
            }
        }
        else
        {
            cout << "Invalid input! Please enter a valid number.\n";
        }
    }

    // Resize the array to accommodate more books
    Book *tempArray = new Book[numbooks + numBooksToAdd];
    for (int i = 0; i < numbooks; ++i)
    {
        tempArray[i] = bookArray[i];
    }
    delete[] bookArray;
    bookArray = tempArray;
    
    cin.ignore(); // Clear input buffer

    for (int i = 0; i < numBooksToAdd; ++i)
    {
        cout << "Enter details for Book " << i + 1 << ":\n";
        Book newBook;
        cout << "Enter Book Title: ";
        getline(cin, newBook.title);
        cout << "Enter Book Author name: ";
        getline(cin, newBook.author);
        cout << "Enter Book Genre (Style): ";
        getline(cin, newBook.genre);
        
        bool validISBN = false;
        while (!validISBN) {
            cout << "Enter Book ISBN (International Standard Book Number): ";
            getline(cin, newBook.isbn);

            validISBN = true; // Assume the ISBN is valid initially

            // Check if the book already exists based on ISBN
            for (int j = 0; j < numbooks; ++j)
            {
                if (bookArray[j].isbn == newBook.isbn)
                {
                    cout << "A book with this ISBN already exists in the system. Please enter a different ISBN.\n";
                    validISBN = false; // Set to false if ISBN is not unique
                    break;
                }
            }
        }

        if (newBook.title.empty() || newBook.author.empty() || newBook.genre.empty() || newBook.isbn.empty())
        {
            cout << "Error: All book details must be provided. Please try again.\n";
            --i; // Go back to re-enter details for the same book
        }
        else
        {
            newBook.available = true;
            bookArray[numbooks++] = newBook;
            cout << "Book added successfully.\n";
        }
    }
}


int main()
{
    while(true)
    {
        cout << "\n\t\t ______________________________________________\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t| [1]   |     Add Book" << setw(27) << "|\n";
        cout << "\t\t| [2]   |     Display Books" << setw(22) << "|\n";
        cout << "\t\t| [3]   |     Borrow Book" << setw(24) << "|\n";
        cout << "\t\t| [4]   |     Return Book" << setw(24) << "|\n";
        cout << "\t\t| [0]   |     Exit" << setw(31) << "|\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t|_______|______________________________________|\n";
        cout << "\n\t\tEnter your choice ... ";
        string choice;
        cin >> choice;
        if( choice == "1")
        {
            addbook();
        }
        else if( choice == "2")
        {
            system("cls");
            cout << "\n\t\t ______________________________________________\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t| [1]   |     Display All Books" << setw(18) << "|\n";
            cout << "\t\t| [2]   |     Available Books" << setw(20) << "|\n";
            cout << "\t\t| [0]   |     Main Page" << setw(26) << "|\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t|_______|______________________________________|\n";
            cout << "\n\t\tEnter your choice ... ";
            string all;
            cin >> all;
            if ( all == "1")
            {
                displaybook();
            }
            else if ( all == "2" )
            {
                availablebook();
            }
            else if ( all == "0" )
            {
                system("cls");
                main();
            }
            else
            {
                cout<<"\nInvalid choice! Please Enter valid choice.\n";
            }
        }
        else if ( choice == "3")
        {
            borrowbook();
        }
        else if ( choice == "4")
        {
            returnbook();
        }
        else if ( choice == "0")
        {
            cout<<"\n\t\t\t\tCode by Saad Ali on Earth.\n";
            exit(0);
        }
        else
        {
            cout<<"\nInvalid choice! Please Enter valid choice.\n";
        }
    }
    return 0;
}

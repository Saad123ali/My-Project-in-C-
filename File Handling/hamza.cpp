#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cctype>
#include <windows.h>
using namespace std;

const int MAX_IGNORE = 10000; // A sufficiently large value to replace INT_MAX

class Validations
{
public:
    bool idValidation(string idString)
    {
        if (idString.empty())
        {
            return false;
        }
        for (char c : idString)
        {
            if (!isdigit(c) || c == ' ')
            {
                return false;
            }
        }
        return true;
    }

    bool stringValidation(string str)
    {
        if (str.empty())
        {
            return false;
        }
        for (char c : str)
        {
            if (c != ' ')
            {
                return true;
            }
        }
        return false;
    }

    bool adminStringValidation(string str)
    {
        if (str.empty())
        {
            return false;
        }
        for (char c : str)
        {
            if (c == ' ')
            {
                return false;
            }
        }
        return true;
    }
};

class Movie
{
public:
    string title;
    string director;
    string genre;
    int year;

    Movie() : year(0) {}

    Movie(string title, string director, string genre, int year) : title(title), director(director), genre(genre), year(year) {}

    void display()
    {
        cout << "\tTitle: " << title << endl;
        cout << "\tDirector: " << director << endl;
        cout << "\tGenre: " << genre << endl;
        cout << "\tYear: " << year << endl;
    }
};

class Time
{
public:
    void display_time()
    {
        time_t now = time(0);
        char *dt = ctime(&now);
        cout << "\n\tCurrent Time: " << dt << endl;
    }
};

class Payment
{
public:
    double amount;

    Payment() : amount(0.0) {}

    void makePayment(double amount)
    {
        this->amount = amount;
        cout << "\n\tPayment of $" << amount << " made successfully!" << endl;
    }
};

class Person : public Validations
{
protected:
    string name;
    string username;
    string password;
    string contact;
    string email;
    string cnic;

public:
    Person() {}

    void getDetails()
    {
        cout << "\n\tEnter Name: ";
        getline(cin, name);
        while (!stringValidation(name))
        {
            cout << "\n\tInvalid Name. Please enter again: ";
            getline(cin, name);
        }

        cout << "\tEnter Email: ";
        getline(cin, email);
        while (!stringValidation(email))
        {
            cout << "\n\tInvalid Email. Please enter again: ";
            getline(cin, email);
        }

        cout << "\tEnter Contact (11 digits): ";
        getline(cin, contact);
        while (!idValidation(contact) || contact.length() != 11)
        {
            cout << "\n\tInvalid Contact. Please enter again: ";
            getline(cin, contact);
        }

        cout << "\tEnter CNIC (13 digits): ";
        getline(cin, cnic);
        while (!idValidation(cnic) || cnic.length() != 13)
        {
            cout << "\n\tInvalid CNIC. Please enter again: ";
            getline(cin, cnic);
        }
    }

    void displayDetails()
    {
        cout << "\n\tCustomer Details:" << endl;
        cout << "\n\t-----------------" << endl;
        cout << "\n\tName: " << name << endl;
        cout << "\n\tEmail: " << email << endl;
        cout << "\n\tContact: " << contact << endl;
        cout << "\n\tCNIC: " << cnic << endl;
        cout << "\n\t-----------------" << endl;
    }
};

class AdminFile
{
protected:
    string oldUserNames[100];
    string oldPasswords[100];
    int adminCount;

public:
    AdminFile() : adminCount(0) {}

    void writeAdminDetails(string newUserName, string newPassword)
    {
        ofstream outfile("admins.txt", ios_base::app);
        outfile << newUserName << " " << newPassword << "\n";
        outfile.close();
    }

    void readAdminDetails()
    {
        ifstream infile("admins.txt");
        adminCount = 0;
        string adminRecordLine;
        while (getline(infile, adminRecordLine))
        {
            stringstream is(adminRecordLine);
            string userName, password;
            is >> userName >> password;
            oldUserNames[adminCount] = userName;
            oldPasswords[adminCount] = password;
            adminCount++;
        }
        infile.close();
    }
};

class Admin : public Person, protected AdminFile
{
public:
    int maxMovies;
    Movie *movies;
    Time timet;
    int movieCount;
    Payment payment;

    Admin() : maxMovies(100), movieCount(0)
    {
        movies = new Movie[maxMovies];
    }

    ~Admin()
    {
        delete[] movies;
    }

    bool login()
    {
        readAdminDetails();
        system("cls");
        while (true)
        {
            cout << "\n\tAdmin Login\n";
            while (true)
            {
                cout << "\n\tEnter Admin Username: ";
                getline(cin, username);
                if (adminStringValidation(username))
                {
                    break;
                }
                cout << "\n\tInvalid username!";
            }

            for (int i = 0; i < adminCount; ++i)
            {
                if (username == oldUserNames[i])
                {
                    while (true)
                    {
                        cout << "\tEnter Admin Password: ";
                        getline(cin, password);
                        if (adminStringValidation(password))
                        {
                            break;
                        }
                        cout << "\n\tInvalid Input!\n";
                    }
                    if (password == oldPasswords[i])
                    {
                        cout << "\n\tAdmin Log-In ";
                        for (int i = 0; i < 5; i++)
                        {
                            cout << ".";
                            Sleep(400);
                        }
                        cout << "\n\tLog-In Successful!";
                        return true;
                    }
                    else
                    {
                        cout << "\n\tInvalid Password!";
                        return false;
                    }
                }
            }
            cout << "\n\tAdmin Not Found!";
            return false;
        }
    }

    void addAdmin()
    {
        while (true)
        {
            cout << "\n\tEnter Admin Username: ";
            getline(cin, username);
            if (adminStringValidation(username))
            {
                readAdminDetails();
                bool found = false;
                for (int i = 0; i < adminCount; ++i)
                {
                    if (username == oldUserNames[i])
                    {
                        found = true;
                        break;
                    }
                }
                if (found)
                {
                    cout << "\n\tAdmin username already exists!";
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout << "\n\tInvalid Username!";
            }
        }
        while (true)
        {
            cout << "\tEnter Admin Password: ";
            getline(cin, password);
            if (adminStringValidation(password))
            {
                break;
            }
            cout << "\n\tInvalid Input!\n";
        }
        writeAdminDetails(username, password);
        cout << "\n\tRegistration ";
        for (int i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(400);
        }
        cout << "\n\tRegistration Successful!";
    }

    void editAdmin()
    {
        readAdminDetails();
        string tempFile = "temp.txt";
        ofstream outFile(tempFile);
        if (!outFile)
        {
            cout << "\n\tError opening file!" << endl;
            return;
        }

        cout << "\n\tEnter Admin Username to Edit: ";
        string editUsername;
        getline(cin, editUsername);

        bool found = false;
        for (int i = 0; i < adminCount; ++i)
        {
            if (oldUserNames[i] == editUsername)
            {
                cout << "\n\tEnter New Password: ";
                getline(cin, oldPasswords[i]);
                found = true;
            }
            outFile << oldUserNames[i] << " " << oldPasswords[i] << "\n";
        }
        outFile.close();

        if (!found)
        {
            cout << "\n\tAdmin not found!" << endl;
        }
        else
        {
            remove("admins.txt");
            rename(tempFile.c_str(), "admins.txt");
            cout << "\n\tAdmin Updated Successfully!" << endl;
        }
        cout << endl;
    }

    void removeAdmin()
    {
        readAdminDetails();
        string tempFile = "temp.txt";
        ofstream outFile(tempFile);
        if (!outFile)
        {
            cout << "\n\tError opening file!" << endl;
            return;
        }

        cout << "\n\tEnter Admin Username to Remove: ";
        string removeUsername;
        getline(cin, removeUsername);

        bool found = false;
        for (int i = 0; i < adminCount; ++i)
        {
            if (oldUserNames[i] != removeUsername)
            {
                outFile << oldUserNames[i] << " " << oldPasswords[i] << "\n";
            }
            else
            {
                found = true;
            }
        }
        outFile.close();

        if (!found)
        {
            cout << "\n\tAdmin not found!" << endl;
        }
        else
        {
            remove("admins.txt");
            rename(tempFile.c_str(), "admins.txt");
            cout << "\n\tAdmin Removed Successfully!" << endl;
        }
        cout << endl;
    }

    void viewAllAdmins()
    {
        readAdminDetails();
        cout << "\n\tList of Admins:" << endl;
        for (int i = 0; i < adminCount; ++i)
        {
            cout << "- " << oldUserNames[i] << endl;
        }
        cout << endl;
    }

    void addMovie()
    {
        if (movieCount >= maxMovies)
        {
            cout << "\n\tCannot add more movies. Array is full!" << endl;
            return;
        }

        cout << "\n\tEnter Movie Title: ";
        string title;
        getline(cin, title);
        while (!stringValidation(title))
        {
            cout << "\n\tInvalid Title. Please enter again: ";
            getline(cin, title);
        }

        cout << "\tEnter Movie Director: ";
        string director;
        getline(cin, director);
        while (!stringValidation(director))
        {
            cout << "\n\tInvalid Director. Please enter again: ";
            getline(cin, director);
        }

        cout << "\tEnter Movie Genre: ";
        string genre;
        getline(cin, genre);
        while (!stringValidation(genre))
        {
            cout << "\n\tInvalid Genre. Please enter again: ";
            getline(cin, genre);
        }

        cout << "\tEnter Movie Year: ";
        string yearStr;
        getline(cin, yearStr);
        while (!idValidation(yearStr))
        {
            cout << "\n\tInvalid Year. Please enter again: ";
            getline(cin, yearStr);
        }
        int year = stoi(yearStr);

        movies[movieCount] = Movie(title, director, genre, year);
        movieCount++;
        cout << "\n\tMovie Added Successfully!" << endl;
    }

    void displayAllMovies()
    {
        if (movieCount == 0)
        {
            cout << "\n\tNo movies available." << endl;
            return;
        }

        cout << "\n\tList of Movies:" << endl;
        for (int i = 0; i < movieCount; ++i)
        {
            cout << "\n\tMovie " << i + 1 << ":" << endl;
            movies[i].display();
        }
    }

    void removeMovie(string titleToRemove)
    {
        bool found = false;
        for (int i = 0; i < movieCount; ++i)
        {
            if (movies[i].title == titleToRemove)
            {
                for (int j = i; j < movieCount - 1; ++j)
                {
                    movies[j] = movies[j + 1];
                }
                movieCount--;
                found = true;
                cout << "\n\tMovie Removed Successfully!" << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "\n\tMovie not found!" << endl;
        }
    }

    void editMovie(string titleToEdit)
    {
        bool found = false;
        for (int i = 0; i < movieCount; ++i)
        {
            if (movies[i].title == titleToEdit)
            {
                cout << "\n\tEnter New Title: ";
                getline(cin, movies[i].title);
                while (!stringValidation(movies[i].title))
                {
                    cout << "\n\tInvalid Title. Please enter again: ";
                    getline(cin, movies[i].title);
                }

                cout << "\tEnter New Director: ";
                getline(cin, movies[i].director);
                while (!stringValidation(movies[i].director))
                {
                    cout << "\n\tInvalid Director. Please enter again: ";
                    getline(cin, movies[i].director);
                }

                cout << "\tEnter New Genre: ";
                getline(cin, movies[i].genre);
                while (!stringValidation(movies[i].genre))
                {
                    cout << "\n\tInvalid Genre. Please enter again: ";
                    getline(cin, movies[i].genre);
                }

                cout << "\tEnter New Year: ";
                string yearStr;
                getline(cin, yearStr);
                while (!idValidation(yearStr))
                {
                    cout << "\n\tInvalid Year. Please enter again: ";
                    getline(cin, yearStr);
                }
                movies[i].year = stoi(yearStr);

                found = true;
                cout << "\tMovie Edited Successfully!" << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "\n\tMovie not found!" << endl;
        }
    }
};

const int MAX_ROWS = 100;
const int MAX_SEATS = 10;

class CinemaHall
{
private:
    string name;
    int totalRows;
    int totalSeatsPerRow;
    int bookedSeats;
    bool seats[MAX_ROWS][MAX_SEATS];

public:
    CinemaHall(string name, int initialSeatsPerRow)
    {
        this->name = name;
        this->totalRows = MAX_ROWS;
        this->totalSeatsPerRow = initialSeatsPerRow;
        this->bookedSeats = 0;
        for (int i = 0; i < MAX_ROWS; ++i)
        {
            for (int j = 0; j < MAX_SEATS; ++j)
            {
                seats[i][j] = false;
            }
        }
    }

    void addSeats(int additionalSeats)
    {
        if (totalSeatsPerRow + additionalSeats > 150)
        {
            cout << "Cannot add more seats. Maximum seats reached." << endl;
            return;
        }

        totalSeatsPerRow += additionalSeats;
        cout << " \n\t" << additionalSeats << " Seats added successfully." << endl;
    }

    void bookSeat(int row, int seatNumber)
    {
        if (row < 1 || row > totalRows || seatNumber < 1 || seatNumber > totalSeatsPerRow)
        {
            cout << "Invalid seat number or row number." << endl;
            return;
        }

        if (seats[row - 1][seatNumber - 1])
        {
            cout << "Seat already booked. Please select another seat." << endl;
            return;
        }

        seats[row - 1][seatNumber - 1] = true;
        bookedSeats++;
        cout << "Seat booked successfully." << endl;
    }

    void cancelSeat(int row, int seatNumber)
    {
        if (row < 1 || row > totalRows || seatNumber < 1 || seatNumber > totalSeatsPerRow)
        {
            cout << "Invalid seat number or row number." << endl;
            return;
        }

        if (!seats[row - 1][seatNumber - 1])
        {
            cout << "Seat is not booked." << endl;
            return;
        }

        seats[row - 1][seatNumber - 1] = false;
        bookedSeats--;
        cout << "Seat canceled successfully." << endl;
    }

    void displayBookedSeats()
    {
        if (bookedSeats > 0)
        {
            cout << "Booked seats:" << endl;
            for (int i = 0; i < totalRows; ++i)
            {
                for (int j = 0; j < totalSeatsPerRow; ++j)
                {
                    if (seats[i][j])
                    {
                        cout << "Row " << i + 1 << ", Seat " << j + 1 << endl;
                    }
                }
            }
        }
        else
        {
            cout << "\n\tNo Seat Booked " << endl;
        }
    }

    int availableSeats()
    {
        return totalSeatsPerRow - bookedSeats;
    }
};

class User : public Person
{
private:
    Payment payment;

public:
    User() {}

    void displayMovies(Admin &admin)
    {
        admin.displayAllMovies();
    }

    void bookSeat(CinemaHall &hall)
    {
        int row, seatNumber;
        cout << "\n\tEnter the row number: ";
        cin >> row;
        while (cin.fail() || row < 1 || row > MAX_ROWS)
        {
            cin.clear();
            cin.ignore(MAX_IGNORE, '\n');
            cout << "\n\tInvalid row number. Please enter again: ";
            cin >> row;
        }

        cout << "\tEnter the seat number: ";
        cin >> seatNumber;
        while (cin.fail() || seatNumber < 1 || seatNumber > MAX_SEATS)
        {
            cin.clear();
            cin.ignore(MAX_IGNORE, '\n');
            cout << "\n\tInvalid seat number. Please enter again: ";
            cin >> seatNumber;
        }
        hall.bookSeat(row, seatNumber);
    }

    void searchMovie(Admin &admin)
    {
        if (admin.movieCount == 0)
        {
            cout << "\n\tNo movies available to search." << endl;
            return;
        }

        string searchTitle;
        cout << "\n\tEnter the title of the movie to search: ";
        cin.ignore();
        getline(cin, searchTitle);

        bool found = false;
        for (int i = 0; i < admin.movieCount; ++i)
        {
            if (admin.movies[i].title.find(searchTitle) != string::npos)
            {
                cout << "\n\tMovie found:" << endl;
                admin.movies[i].display();
                found = true;
            }
        }

        if (!found)
        {
            cout << "\n\tMovie not found." << endl;
        }
    }

    void generateTicket(Admin &admin, CinemaHall &hall)
    {
        if (admin.movieCount == 0)
        {
            cout << "\n\tNo movies available to generate tickets." << endl;
            return;
        }

        string selectedMovie;
        cout << "\n\tEnter the title of the selected movie: ";
        cin.ignore();
        getline(cin, selectedMovie);
        bool found = false;
        for (int i = 0; i < admin.movieCount; ++i)
        {
            if (admin.movies[i].title == selectedMovie)
            {
                found = true;
                int seat1;
                cout << "\n\tEnter Seat Number: ";
                cin >> seat1;
                while (cin.fail() || seat1 < 1 || seat1 > MAX_SEATS)
                {
                    cin.clear();
                    cin.ignore(MAX_IGNORE, '\n');
                    cout << "\n\tInvalid seat number. Please enter again: ";
                    cin >> seat1;
                }

                int row1;
                cout << "\n\tEnter Row Number: ";
                cin >> row1;
                while (cin.fail() || row1 < 1 || row1 > MAX_ROWS)
                {
                    cin.clear();
                    cin.ignore(MAX_IGNORE, '\n');
                    cout << "\n\tInvalid row number. Please enter again: ";
                    cin >> row1;
                }

                cout << "\n\tEnter Hall Name: ";
                string hallName;
                cin.ignore();
                getline(cin, hallName);

                cout << " \n\t |---------------------------|" << endl;
                cout << "\n\t|Ticket Details:            |" << endl;
                cout << "\n\t|-----------------          |" << endl;
                cout << "\n\t|Movie Title: " << admin.movies[i].title << "|" << endl;
                cout << "\n\t|Director: " << admin.movies[i].director << "|" << endl;
                cout << "\n\t|Genre: " << admin.movies[i].genre << "|" << endl;
                cout << "\n\t|Year: " << admin.movies[i].year << "|" << endl;
                cout << "\n\t|Cinema Hall: " << hallName << "|" << endl;
                cout << "\n\t|Seat: Row " << row1 << ", Seat " << seat1 << "|" << endl;
                displayDetails();
                cout << "\n\t|----------------------------------|" << endl;
                cout << "\n\t| --*Ticket generated successfully!*|" << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "\n\tMovie not found!" << endl;
        }
    }

    void makePayment(Admin &admin)
    {
        if (admin.movieCount == 0)
        {
            cout << "\n\tNo movies available to make a payment." << endl;
            return;
        }

        double amount;
        cout << "\n\tEnter payment amount: ";
        cin >> amount;
        while (cin.fail() || amount <= 0)
        {
            cin.clear();
            cin.ignore(MAX_IGNORE, '\n');
            cout << "\n\tInvalid amount. Please enter again: ";
            cin >> amount;
        }
        payment.makePayment(amount);
    }
};

int main()
{
    string hallName = "Default Hall";
    int initialSeats = 10; // Default initial seats
    CinemaHall hall(hallName, initialSeats);
    Admin admin;
    User user;

    while (true)
    {
        cout << "\n\t\t ______________________________________________\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t| [1]   |     Admin" << setw(30) << "|\n";
        cout << "\t\t| [2]   |     User" << setw(31) << "|\n";
        cout << "\t\t| [3]   |     Exit" << setw(31) << "|\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t||_|\n";
        cout << "\n\t\tEnter your choice ... ";
        string opt;
        cin >> opt;
        cin.ignore();

        if (opt == "1")
        {
            if (admin.login())
            {
                while (true)
                {
                    string reply;
                    do
                    {
                        cout << "\n\t\t ______________________________________________\n";
                        cout << "\t\t|       |" << setw(40) << "|\n";
                        cout << "\t\t| [1]   |     Admin Detail" << setw(23) << "|\n";
                        cout << "\t\t| [2]   |     Movies Detail" << setw(22) << "|\n";
                        cout << "\t\t| [3]   |     CinemaHall Detail" << setw(18) << "|\n";
                        cout << "\t\t| [4]   |     Exit" << setw(31) << "|\n";
                        cout << "\t\t||_|\n";
                        cout << "\n\t\tEnter your choice ... ";

                        getline(cin, reply);

                        if (reply == "1")
                        {
                            string choice;
                            do
                            {
                                cout << "\n\t\t ______________________________________________\n";
                                cout << "\t\t|       |" << setw(40) << "|\n";
                                cout << "\t\t| [1]   |     Add Admin" << setw(26) << "|\n";
                                cout << "\t\t| [2]   |     Edit Admin" << setw(25) << "|\n";
                                cout << "\t\t| [3]   |     Remove Admin" << setw(23) << "|\n";
                                cout << "\t\t| [4]   |     View All Admins" << setw(20) << "|\n";
                                cout << "\t\t| [5]   |     Exit" << setw(31) << "|\n";
                                cout << "\t\t|       |" << setw(40) << "|\n";
                                cout << "\t\t||_|\n";
                                cout << "\n\t\tEnter your choice ... ";

                                getline(cin, choice);

                                if (choice == "1")
                                {
                                    cout << "\n\tAdding new admin..." << endl;
                                    admin.addAdmin();
                                }
                                else if (choice == "2")
                                {
                                    cout << "\n\tEditing admin..." << endl;
                                    admin.editAdmin();
                                }
                                else if (choice == "3")
                                {
                                    cout << "\n\tRemoving admin..." << endl;
                                    admin.removeAdmin();
                                }
                                else if (choice == "4")
                                {
                                    cout << "\n\tViewing all admins..." << endl;
                                    admin.viewAllAdmins();
                                }
                                else if (choice == "5")
                                {
                                    cout << "\n\tExiting Admin Management..." << endl;
                                }
                                else
                                {
                                    cout << "\n\tInvalid choice! Please enter a number between 1 and 5." << endl;
                                }
                            } while (choice != "5");
                        }
                        else if (reply == "2")
                        {
                            string choice;
                            do
                            {
                                cout << "\n\t\t ______________________________________________\n";
                                cout << "\t\t|       |" << setw(40) << "|\n";
                                cout << "\t\t| [1]   |     Add Movie" << setw(26) << "|\n";
                                cout << "\t\t| [2]   |     Display All Movies" << setw(17) << "|\n";
                                cout << "\t\t| [3]   |     Remove Movie" << setw(23) << "|\n";
                                cout << "\t\t| [4]   |     Edit Movie" << setw(25) << "|\n";
                                cout << "\t\t| [5]   |     Exit" << setw(31) << "|\n";
                                cout << "\t\t|       |" << setw(40) << "|\n";
                                cout << "\t\t||_|\n";
                                cout << "\n\t\tEnter your choice ... ";
                                getline(cin, choice);

                                if (choice == "1")
                                {
                                    cout << "\n\tAdding new movie..." << endl;
                                    admin.addMovie();
                                }
                                else if (choice == "2")
                                {
                                    cout << "\n\tDisplaying all movies..." << endl;
                                    admin.displayAllMovies();
                                }
                                else if (choice == "3")
                                {
                                    string titleToRemove;
                                    cout << "\n\tEnter the title of the movie to remove: ";
                                    getline(cin, titleToRemove);
                                    admin.removeMovie(titleToRemove);
                                }
                                else if (choice == "4")
                                {
                                    string titleToEdit;
                                    cout << "\n\tEnter the title of the movie to edit: ";
                                    getline(cin, titleToEdit);
                                    admin.editMovie(titleToEdit);
                                }
                                else if (choice == "5")
                                {
                                    cout << "\n\tExiting Movie Management..." << endl;
                                }
                                else
                                {
                                    cout << "\n\tInvalid choice!" << endl;
                                }
                            } while (choice != "5");
                        }
                        else if (reply == "3")
                        {
                            cout << "\n\tEnter the name of the cinema hall: ";
                            getline(cin, hallName);

                            cout << "\n\tEnter the number of initial seats: ";
                            cin >> initialSeats;
                            cin.ignore();

                            CinemaHall hall(hallName, initialSeats);

                            string choice;
                            do
                            {
                                cout << "\n\t\t ______________________________________________\n";
                                cout << "\t\t|       |" << setw(40) << "|\n";
                                cout << "\t\t| [1]   |     Add Seats" << setw(26) << "|\n";
                                cout << "\t\t| [2]   |     Cancel Booked Seats" << setw(16) << "|\n";
                                cout << "\t\t| [3]   |     View Booked Seats" << setw(18) << "|\n";
                                cout << "\t\t| [4]   |     View Available Seats" << setw(15) << "|\n";
                                cout << "\t\t| [5]   |     Exit" << setw(31) << "|\n";
                                cout << "\t\t|       |" << setw(40) << "|\n";
                                cout << "\t\t||_|\n";
                                cout << "\n\t\tEnter your choice ... ";
                                getline(cin, choice);

                                if (choice == "1")
                                {
                                    int additionalSeats;
                                    cout << "\n\tEnter the number of seats to add: ";
                                    cin >> additionalSeats;
                                    cin.ignore();
                                    hall.addSeats(additionalSeats);
                                }
                                else if (choice == "2")
                                {
                                    int row, seatNumber;
                                    cout << "\n\tEnter the row number: ";
                                    cin >> row;
                                    cin.ignore();
                                    cout << "\n\tEnter the seat number: ";
                                    cin >> seatNumber;
                                    cin.ignore();
                                    hall.cancelSeat(row, seatNumber);
                                }
                                else if (choice == "3")
                                {
                                    hall.displayBookedSeats();
                                }
                                else if (choice == "4")
                                {
                                    cout << "\n\tAvailable seats: " << hall.availableSeats() << endl;
                                }
                                else if (choice == "5")
                                {
                                    cout << "\n\tExiting Cinema Hall Management..." << endl;
                                }
                                else
                                {
                                    cout << "\n\tInvalid choice. Please try again." << endl;
                                }
                            } while (choice != "5");
                        }
                        else if (reply == "4")
                        {
                            cout << "\n\tExiting ...... " << endl;
                            break;
                        }
                        else
                        {
                            cout << "\n\tInvalid choice! Please enter a number between 1 and 4." << endl;
                        }
                    } while (reply != "4");
                    break;
                }
            }
            else
            {
                cout << "\n\tInvalid Username and Password." << endl;
            }
        }
        else if (opt == "2")
        {
            user.getDetails();
            cout << "\n\tLoading Please Wait ";
            for (int i = 0; i < 5; i++)
            {
                cout << ".";
                Sleep(400);
            }
            cout << "\n\tLogin successfully !" << endl;
            while (true)
            {
                string choice;
                do
                {
                    cout << "\n\t\t ______________________________________________\n";
                    cout << "\t\t|       |" << setw(40) << "|\n";
                    cout << "\t\t| [1]   |     Display Movies" << setw(21) << "|\n";
                    cout << "\t\t| [2]   |     Book Seats" << setw(25) << "|\n";
                    cout << "\t\t| [3]   |     Search Movies" << setw(22) << "|\n";
                    cout << "\t\t| [4]   |     Generate Ticket" << setw(20) << "|\n";
                    cout << "\t\t| [5]   |     Make Payment" << setw(23) << "|\n";
                    cout << "\t\t| [6]   |     Exit" << setw(31) << "|\n";
                    cout << "\t\t|       |" << setw(40) << "|\n";
                    cout << "\t\t||_|\n";
                    cout << "\n\t\tEnter your choice ... ";

                    getline(cin, choice);

                    if (choice == "1")
                    {
                        cout << "\n\tDisplaying available movies..." << endl;
                        user.displayMovies(admin);
                    }
                    else if (choice == "2")
                    {
                        if (admin.movieCount > 0)
                        {
                            cout << "\n\tBooking seats..." << endl;
                            user.bookSeat(hall);
                        }
                        else
                        {
                            cout << "\n\tNo movies available to book seats." << endl;
                        }
                    }
                    else if (choice == "3")
                    {
                        cout << "\n\tSearching movies..." << endl;
                        user.searchMovie(admin);
                    }
                    else if (choice == "4")
                    {
                        cout << "\n\tGenerating ticket..." << endl;
                        user.generateTicket(admin, hall);
                    }
                    else if (choice == "5")
                    {
                        cout << "\n\tMaking payment..." << endl;
                        user.makePayment(admin);
                    }
                    else if (choice == "6")
                    {
                        cout << "\n\tExiting..." << endl;
                        break;
                    }
                    else
                    {
                        cout << "\n\tInvalid choice. Please try again." << endl;
                    }
                } while (choice != "6");
                break;
            }
        }
        else if (opt == "3")
        {
            cout << "\n\tExiting..." << endl;
            break;
        }
        else
        {
            cout << "\n\tINVALID CHOICE\n"
                 << endl;
        }
    }
    return 0;
}
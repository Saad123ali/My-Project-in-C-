#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>

using namespace std;

string username = "Saad Ali";
string password = "12345";
// title 
bool start = true;
void title()
{
    while (true)
    {
        cout << "\n\t\t******* Bus Reservation System*******\n\n";
        start = !(start);
        break;
    }
}

const int MAX_BUSES = 5;
const int MAX_SEATS = 20;

// structure bus
struct Bus
{
    string drivername;
    string busnumber;
    int totalseats;
    string arrivaltime;
    string departuretime;
    string to;
    string from;
    int bookseat[MAX_SEATS];
};

// structure customer
struct customer
{
    string name;
    string phno;
    int seatno;
};
// bus array
Bus buses[MAX_BUSES];

void Enterdetail()
{
    system("cls");

    int busNo;

    // Ask admin which bus data to fill
    do
    {
        cout << "Enter Bus Number to fill details: ";
        cin >> busNo;

        if (busNo <= 0 || busNo > MAX_BUSES)
        {
            cout << "Invalid Bus Number. Please enter a valid Bus Number.\n";
        }
        else if (!buses[busNo - 1].drivername.empty())
        {
            cout << "Bus details already entered. Please choose another Bus Number.\n";
            busNo = 0; // Reset busNo to prompt for input again
        }

    } while (busNo <= 0 || busNo > MAX_BUSES);

    cout << "\nBus No: " << busNo << endl;
    cout << "Driver name: ";
    cin.ignore();
    getline(cin, buses[busNo - 1].drivername);
    cout << "Bus Plate Number: ";
    getline(cin, buses[busNo - 1].busnumber);
    cout << "Departure time: ";
    getline(cin, buses[busNo - 1].departuretime);
    cout << "Arrival time: ";
    getline(cin, buses[busNo - 1].arrivaltime);
    cout << "From: ";
    getline(cin, buses[busNo - 1].from);
    cout << "To: ";
    getline(cin, buses[busNo - 1].to);
    cout << "Total seats: 20\n";
    buses[busNo - 1].totalseats = 20;

    cout << "\nBus details added successfully!\n";

    // Ask if the admin wants to add another bus
    char addAnother;
    cout << "\nDo you want to add another Bus detail?\n\nY (yes) or N (no): ";
    cin >> addAnother;

    if (addAnother == 'y' || addAnother == 'Y')
    {
        Enterdetail(); // Recursively call Enterdetail for the next bus
    }
}


// Display available bus
void Busdetail()
{
    system("cls");
    cout << "\n\n";
    cout << "\t\t ____________________________________________________________________________________________________________________________________________________\n";
    cout << "\t\t|       " << setw(143) << "|\n";
    cout << "\t\t|"<<setw(20)<<"Driver Name"<<setw(20)<<"Plate No"<<setw(17)<<"Bus Seats"<<setw(20)<<"Arrival Time"<<setw(23)<<"Departure Time"<<setw(20)<<"To"<<setw(20)<<"From"<<setw(10)<<"|\n";
    cout << "\t\t|____________________________________________________________________________________________________________________________________________________|\n";
    for (int i = 0; i < MAX_BUSES; ++i)
    {
        cout<<"Bus no: "<<i+1<<endl;
        if (!buses[i].drivername.empty()) // Check if bus details are entered
        {
            cout<<"\n";
            cout << "\t\t" << setw(18) << buses[i].drivername
                << "\t" << setw(16) << buses[i].busnumber
                << "\t" << setw(7) << buses[i].totalseats
                << "\t" << setw(16) << buses[i].arrivaltime
                << "\t" << setw(16) << buses[i].departuretime
                << "\t\t" << setw(12) << buses[i].to
                << "\t\t" << setw(10) << buses[i].from
                << "\t\t\n";
            cout << "\t\t_____________________________________________________________________________________________________________________________________________________\n";
        }
        if(buses[i].drivername.empty())
        {
            cout<<"\n\t\tNo Bus Available"<<endl;
        }
    }
}

// Delete bus detail
void DeleteBusDetail()
{
    system("cls");
    // Display available buses
    Busdetail();

    // Ask the user to choose a bus to delete
    cout << "\nEnter the Bus Number you want to delete: ";
    int chosenBus;
    cin >> chosenBus;

    // Check if the chosen bus number is valid
    if (chosenBus <= 0 || chosenBus > MAX_BUSES || buses[chosenBus - 1].drivername.empty())
    {
        cout << "Invalid Bus Number. Please try again." << endl;
        return;
    }

    // Clear the bus details
    buses[chosenBus - 1] = Bus();

    cout << "\nBus details deleted successfully!\n";
}

// book a tickets
void BookTicket()
{
    system("cls");
    // Display available buses
    Busdetail();

    // Ask the user to choose a bus
    cout << "\nEnter the Bus Number you want to book: ";
    int chosenBus;
    cin >> chosenBus;

    // Check if the chosen bus number is valid
    if (chosenBus <= 0 || chosenBus > MAX_BUSES || buses[chosenBus - 1].drivername.empty())
    {
        cout << "Invalid Bus Number. Please try again." << endl;
        return;
    }

    // Display available seats for the chosen bus
    cout << "\nAvailable seats for Bus " << chosenBus << ": ";
    for (int i = 0; i < MAX_SEATS; ++i)
    {
        if (buses[chosenBus - 1].bookseat[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }

    // Ask the user to choose a seat
    cout << "\nEnter the Seat Number you want to book: ";
    int chosenSeat;
    cin >> chosenSeat;

    // Check if the chosen seat number is valid
    if (chosenSeat <= 0 || chosenSeat > MAX_SEATS || buses[chosenBus - 1].bookseat[chosenSeat - 1] == 1)
    {
        cout << "Invalid Seat Number. Please try again." << endl;
        return;
    }

    // Update the booked seat status
    buses[chosenBus - 1].bookseat[chosenSeat - 1] = 1;
    buses[chosenBus - 1].totalseats--;

    // Get customer details
    customer newCustomer;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, newCustomer.name);

    cout << "Enter your phone number: ";
    getline(cin, newCustomer.phno);

    newCustomer.seatno = chosenSeat;

    // Display booking confirmation
    cout << "\nTicket generated! Please wait";
    for(int i = 0; i < 4; i++)
    {
        cout << ".";
        Sleep(700);
    }
    cout<<"\n";
    cout << "Bus Number: " << chosenBus << "\n";
    cout << "Seat Number: " << chosenSeat << "\n";
    cout << "Passenger Name: " << newCustomer.name << "\n";
    cout << "Phone Number: " << newCustomer.phno << "\n";
    cout << "From: " << buses[chosenBus-1].from << "\n";
    cout << "To: " << buses[chosenBus-1].to << "\n";
}

// Cancel a ticket
void Cancleticket() 
{
    system("cls");
    // Ask enter the bus number
    cout << "\nEnter the Bus Number for ticket cancellation: ";
    int chosenBus;
    cin >> chosenBus;

    // Check  bus number is valid
    if (chosenBus <= 0 || chosenBus > MAX_BUSES || buses[chosenBus - 1].drivername.empty()) 
    {
        cout << "Invalid Bus Number. Please try again." << endl;
    }

    // Ask enter seat for cancel
    cout << "\nEnter the Seat Number for ticket cancellation: ";
    int chosenSeat;
    cin >> chosenSeat;

    // Check if the chosen seat number is valid
    if (chosenSeat <= 0 || chosenSeat > MAX_SEATS || buses[chosenBus - 1].bookseat[chosenSeat - 1] == 0) 
    {
        cout << "Invalid Seat Number. Please try again." << endl;
    }

    // update the seat now
    buses[chosenBus - 1].bookseat[chosenSeat - 1] = 0;
    buses[chosenBus - 1].totalseats++;

    // Display cancell message
    if (buses[chosenBus - 1].bookseat[chosenSeat - 1] == 0) 
    {
        cout << "\nTicket cancellation! Please wait";
        for(int i = 0; i < 4; i++)
        {
            cout << ".";
            Sleep(700);
        }
        cout << "\nTicket canceled successfully!\n";
    } 
    else 
    {
        cout << "\nIncorrect information. Please check the details and try again.\n";
    }
}

// lock the admin database
void lock()
{
    string enteredUsername;
    string enteredPassword;

    cout<<"\n\n";
    cout << "Enter Admin Username: ";
    cin.ignore();
    getline(cin, enteredUsername);

    cout << "Enter Admin Password: ";
    getline(cin, enteredPassword);

    if (enteredUsername == username && enteredPassword == password)
    {
        cout << "\nAccess granted! Logging in";
        for(int i = 0; i < 4; i++)
        {
            cout << ".";
            Sleep(700);
        }
        while (true)
        {
            cout << "\n\t\t_______________________________________________\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t| [1]   |     Enter Bus Detail" << setw(19) << "|\n";
            cout << "\t\t| [2]   |     Show Bus Detail" << setw(20) << "|\n";
            cout << "\t\t| [3]   |     Delete Bus Detail" << setw(18) << "|\n";
            cout << "\t\t| [4]   |     Back to Main Menu" << setw(18) << "|\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t|_______|______________________________________|\n";
            cout << "\n\t\tEnter your choice ... ";
            string achoice;
            cin >> achoice;

            if (achoice == "1")
            {
                Enterdetail();
            }
            else if (achoice == "2")
            {
                Busdetail();
            }
            else if (achoice == "3")
            {
                DeleteBusDetail();
            }
            else if (achoice == "4")
            {
                system("cls");
                break;
            }
            else
            {
                cout << "\nInvalid Choice" << endl;
            }
        }
    }
    else
    {
        system("cls");
        cout << "\nIncorrect username or password. Access denied.\n";
    }
}

// main function
int main()
{
    while (start)
    {
        title();
    }

    while (true)
    {
        cout << "\n\t\t_______________________________________________\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t| [1]   |     Admin" << setw(30) << "|\n";
        cout << "\t\t| [2]   |     User" << setw(31) << "|\n";
        cout << "\t\t| [3]   |     Exit" << setw(31) << "|\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t|_______|______________________________________|\n";
        cout << "\n\t\tEnter your choice ... ";
        string choice;
        cin >> choice;

        if (choice == "1")
        {
            system("cls");
            lock();
        }
        else if (choice == "2")
        {
            // User submenu
            while (true)
            {
                cout << "\n\t\t ______________________________________________\n";
                cout << "\t\t|       |" << setw(40) << "|\n";
                cout << "\t\t| [1]   |     Display Available Bus " << setw(13) << "|\n";
                cout << "\t\t| [2]   |     Book a Ticket" << setw(22) << "|\n";
                cout << "\t\t| [3]   |     Cancel a Ticket" << setw(20) << "|\n";
                cout << "\t\t| [4]   |     Back to Main Menu" << setw(18) << "|\n";
                cout << "\t\t|       |" << setw(40) << "|\n";
                cout << "\t\t|_______|______________________________________|\n";
                cout << "\n\t\tEnter your choice ... ";
                string uchoice;
                cin >> uchoice;

                if (uchoice == "1")
                {
                    Busdetail();
                }
                else if (uchoice == "2")
                {
                    BookTicket();
                }
                else if (uchoice == "3")
                {
                    Cancleticket();
                }
                else if (uchoice == "4")
                {
                    system("cls");
                    break;
                }
                else
                {
                    cout << "\nInvalid Choice" << endl;
                }
            }
        }
        else if (choice == "3")
        {
            cout << "\n\tThanks for using this Code\n\t" << endl;
            break;
        }
        else
        {
            cout << "\nInvalid choice" << endl;
        }
    }

    return 0;
}

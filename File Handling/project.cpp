#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
class AdminFile
{
protected:
    string newUserName;
    string newPassword;
    string oldUserName;
    string oldPassword;

public:
    void writeAdminDetails()
    {
        ofstream outfile("Admin File.txt", ios_base::app);
        outfile << newUserName << " " << newPassword << "\n";
        outfile.close();
    }
    void readAdminDetails()
    {
        ifstream infile("Admin File.txt");
        string adminRecordLine;
        while (getline(infile, adminRecordLine))
        {
            stringstream iss(adminRecordLine);
            iss >> oldUserName >> oldPassword;
            cout << oldPassword << "\t" << oldUserName;
        }
        infile.close();
    }
};
class AdminLogin : protected AdminFile
{
private:
    string name;
    string password;

public:
    bool oldAdminLogin()
    {
        readAdminDetails();
        system("cls");
        while (true)
        {

            cout << "\n\tAdmin Login";
            cout << "\n\n\tEnter Admin Username :\t";
            cin >> name;
            if (name == oldUserName)
            {
                cout << "\tEnter Admin Password :\t";
                cin >> password;
                if (password == oldPassword)
                {
                    return true;
                    break;
                }
                else
                {
                    cout << "\n\tInvalid UserName or Password!";
                    return false;
                }
            }
            else
            {
                cout << "\n\tAdmin Not Found!";
                return false;
            }
        }
    }
    void newAdminRegistration()
    {
        system("cls");
        cout << "\n\tAdmin Registration";
        cout << "\n\n\tEnter Admin Username :\t";
        cin >> newUserName;
        cout << "\tEnter Admin Password :\t";
        cin >> newPassword;
        cout << "\n\tRegisteration ";
        writeAdminDetails();
        for (int i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(400);
        }
        cout << "\n\tRegistered Successfull!";
    }
};
// class AdminDriverClass : protected AdminLogin
// {
// private:
//     bool adminVerification;

// public:
    
// };
void storeName()
{
    system("cls");
    cout << "\t\n||||||      |||||| ||||||| ||\\\\    //|| ||\\\\    //|| ||||||| ||||||| |||||| ||||||";
    cout << "\t\n||          ||     ||   || || \\\\  // || || \\\\  // || ||      ||   || ||     ||";
    cout << "\t\n||||||  ||  ||     ||   || ||  \\\\//  || ||  \\\\//  || ||||||| ||||||| ||     ||||||";
    cout << "\t\n||          ||     ||   || ||        || ||        || ||      ||  \\\\  ||     ||";
    cout << "\t\n||||||      |||||| ||||||| ||        || ||        || ||||||| ||   \\\\ |||||| ||||||";
}
string mainPage()
{
    string choice;
    while (true)
    {
        cout << "\n\n\t _________________________________________\n";
        cout << "\t|\tE - COMMERCE Store   \t\t  |\n";
        cout << "\t|_________________________________________|\n";
        cout << "\t|   |" << setw(39) << "|\n";
        cout << "\t| 1 |  Admin  " << setw(30) << "|\n";
        cout << "\t| 2 |  User   " << setw(30) << "|\n";
        cout << "\t| 0 |  Exit " << setw(32) << "|\n";
        cout << "\t|   |" << setw(39) << "|\n";
        cout << "\t|___|_____________________________________|\n\n";
        cout << "\tPress a key to continue ... ";
        cin >> choice;
        if (choice == "1" || choice == "2" || choice == "0")
        {
            return choice;
            break;
        }
        else
        {
            cout << "\n\tInvalid Choice!\n";
        }
    }
}
int main()
{
    AdminLogin adminLogin;
    storeName();
    while (true)
    {
        string choice = mainPage();
        if (choice == "1")
        {
            bool adminVerification;
            adminVerification = adminLogin.oldAdminLogin();
            if (adminVerification == true)
            {
                string choice;
                while (true)
                {
                    cout << "\n\n\t _________________________________________\n";
                    cout << "\t|\t\tAdmin   \t\t  |\n";
                    cout << "\t|_________________________________________|\n";
                    cout << "\t|   |" << setw(39) << "|\n";
                    cout << "\t| 1 |  Available Products" << setw(19) << "|\n";
                    cout << "\t| 2 |  Add New Products" << setw(21) << "|\n";
                    cout << "\t| 3 |  Edit Existing Product" << setw(16) << "|\n";
                    cout << "\t| 4 |  Delete Products" << setw(22) << "|\n";
                    cout << "\t| 5 |  Payment Record" << setw(23) << "|\n";
                    cout << "\t| 6 |  Add Another Admin" << setw(20) << "|\n";
                    cout << "\t| 0 |  Log-Admin" << setw(28) << "|\n";
                    cout << "\t|   |" << setw(39) << "|\n";
                    cout << "\t|___|_____________________________________|\n\n";
                    cout << "\tPress a key to continue ... ";
                    cin >> choice;
                    if (choice == "1")
                    {
                        cout << "\n\tNo functionality Add";
                    }
                    else if (choice == "2")
                    {
                        system("cls");
                        cout << "\n\tNo functionality Add";
                    }
                    else if (choice == "3")
                    {

                        system("cls");

                        cout << "\n\tNo functionality Add";
                    }
                    else if (choice == "4")
                    {
                        system("cls");
                        cout << "\n\tNo functionality Add";
                    }
                    else if (choice == "5")
                    {
                        system("cls");
                        cout << "\n\tNo functionality Add";
                    }
                    else if (choice == "6")
                    {
                        system("cls");
                        adminLogin.newAdminRegistration();
                    }
                    else if (choice == "0")
                    {
                        break;
                    }
                    else // wronge option
                    {
                        system("cls");
                        cout << "\n\tWronge Option!\n";
                    }
                }
            }
        }

        else if (choice == "2")
        {
            string choice;
            while (true)
            {
                cout << "\n\n\t _________________________________________\n";
                cout << "\t|\t\tUser   \t\t\t  |\n";
                cout << "\t|_________________________________________|\n";
                cout << "\t|   |" << setw(39) << "|\n";
                cout << "\t| 1 |  Display Products" << setw(21) << "|\n";
                cout << "\t| 2 |  Browse Products" << setw(22) << "|\n";
                cout << "\t| 3 |  Your Cart" << setw(28) << "|\n";
                cout << "\t| 4 |  Check Out" << setw(28) << "|\n";
                cout << "\t| 5 |  Purchase Record" << setw(22) << "|\n";
                cout << "\t| 0 |  Exit" << setw(33) << "|\n";
                cout << "\t|   |" << setw(39) << "|\n";
                cout << "\t|___|_____________________________________|\n\n";
                cout << "\tPress a key to continue ... ";
                cin >> choice;
                if (choice == "1")
                {
                    cout << "\n\tNo functionality Add";
                }
                else if (choice == "2")
                {
                    system("cls");
                    cout << "\n\tNo functionality Add";
                }
                else if (choice == "3")
                {

                    system("cls");
                    cout << "\n\tNo functionality Add";
                }
                else if (choice == "4")
                {
                    system("cls");
                    cout << "\n\tNo functionality Add";
                }
                else if (choice == "5")
                {
                    system("cls");
                    cout << "\n\tNo functionality Add";
                }
                else if (choice == "6")
                {
                    system("cls");
                    cout << "\n\tNo functionality Add";
                }
                else if (choice == "0")
                {
                    break;
                }
                else // wronge option
                {
                    system("cls");
                    cout << "\n\tWronge Option!\n";
                }
            }
        }
        else if (choice == "0")
        {
            cout << "\n\n\t Thanks for using\n\t Good bye ... \n\n\n";
            break;
        }
    }
}
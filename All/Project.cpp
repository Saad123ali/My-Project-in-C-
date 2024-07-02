#include <iostream>
#include <string>
#include <array>
#include <iomanip>
using namespace std;
int numb = 0,
    max = 100,
    startup = 1;
string givenpassword = "Ali";
string names[100],
    numbers[100],
    emails[100];
int mainpage() // start choice options
{
    cout << "\n\n\t ____________________________________________\n";
    cout << "\t|\t\t   Phone Book\t\t     |\n";
    cout << "\t|____________________________________________|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t| 1 |  New Contact " << setw(28) << "|\n";
    cout << "\t| 2 |  Edit a contact " << setw(25) << "|\n";
    cout << "\t| 3 |  Search Contact " << setw(25) << "|\n";
    cout << "\t| 4 |  Delete Contact " << setw(25) << "|\n";
    cout << "\t| 5 |  List all Contacts " << setw(22) << "|\n";
    cout << "\t| 0 |  Exit " << setw(35) << "|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t|___|________________________________________|\n\n";
    cout << "\tPress a key to continue ... ";
}
int newcontact() // for new numbers
{
    bool main_page = false;
    system("cls");
    for (numb; numb < 100; numb++)
    {
        if (main_page == true)
        {
            break;
        }
        cin.ignore();
        cout << "\n\nPerson " << numb + 1 << " :";
        cout << "\n\t Name : \t";
        getline(cin,names[numb]);
        cout << "\t Number :\t";
        getline(cin,numbers[numb]);
        cout << "\t Email : \t";
        getline(cin,emails[numb]);
        cout << "\n\n";
        int z = 0;
        while (z < 100)
        {
            cout << "\tDo you want to add another (y/n): ";
            string a;
            cin >> a;
            if (a == "n" || a == "N")
            {
                system("cls");
                main_page = true;
                break;
            }
            else if (a == "Y" || a == "y")
            {
                z++;
                break;
            }
            else
            {
                cout << "\n\tInvalid Choice!\n";
                z++;
            }
        }
    }
}
int allcontacts() // All contacts
{
    int z = 0;
    while (z < 100)
    {
        if (names->empty())
        {
            cout << "\n\n\n\tNo contact found.Please add at least one!\n\n";
            break;
        }
        else
        {
            for (int i = 0; i < numb; i++)
            {

                cout << "\n\nPerson " << i + 1 << " :";
                cout << "\n\t Name : \t" << names[i];
                cout << "\n\t Number :\t" << numbers[i];
                cout << "\n\t Email : \t" << emails[i];
                cout << "\n";
            }
            break;
        }
    }
}
int deletecontacts() // Delete
{
    cout << "\n\n\t ____________________________________________\n";
    cout << "\t|\t\t   Phone Book\t\t     |\n";
    cout << "\t|____________________________________________|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t| 1 |  Delete All  " << setw(28) << "|\n";
    cout << "\t| 2 |  Delete Specific" << setw(25) << "|\n";
    cout << "\t| 0 |  Main page " << setw(30) << "|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t|___|________________________________________|\n\n";
    cout << "\tPress a key to continue ... ";
    string dell;
    cin >> dell;
    int z = 0;
    while (z < 100)
    {
        // if (dell == "1")
        // {
        //     cout << "\n\n\tEnter the name of person : \t";
        //     string deletebyname;
        //     cin >> deletebyname;
        //     for (int i = 0; i < 100; i++)
        //     {
        //         if (searchbyname.compare(names[i]) == true)
        //         {
        //             cout << "\n\nPerson " << i + 1 << " :";
        //             cout << "\n\t Name : \t" << names[i];
        //             cout << "\t Number :\t" << numbers[i];
        //             cout << "\t Email : \t" << emails[i];
        //             break;
        //         }
        //         else
        //         {
        //             system("cls");
        //             cout << "\n\n\n\tNo contact found! \n\n";
        //             goto dell;
        //         }
        //     }
        // }
        // else if (dell == "2")
        // {
        //     cout << "\n\n\tEnter the Number of person : \t";
        //     string searchbynumber;
        //     cin >> searchbynumber;
        //     for (int i = 0; i < 100; i++)
        //     {
        //         // if (searchbynumber == numbers[i])
        //         if (searchbynumber.compare(numbers[i]) == 0)
        //         {
        //             cout << "\n\nPerson " << i + 1 << " :";
        //             cout << "\n\t Name : \t" << names[i];
        //             cout << "\t Number :\t" << numbers[i];
        //             cout << "\t Email : \t" << emails[i];
        //         }
        //         else
        //         {
        //             system("cls");
        //             cout << "\n\n\n\tNo contact found! \n\n";
        //             goto dell;
        //         }
        //     }
        // }
        // else if (dell == "0")
        // {
        //     system("cls");
        //     break;
        // }

        // else
        // {
        //     system("cls");
        //     cout << "\n\n\tInvalid Choice!\n\n";
        //     goto dell;
        // }
    }
}
int searchingcontacts()  //searching contact
{
    bool back = false; //for terminating main loop for main
    while (back == false)
    {
        cout << "\n\n\t ____________________________________________\n";
        cout << "\t|\t\t   Phone Book\t\t     |\n";
        cout << "\t|____________________________________________|\n";
        cout << "\t|   |" << setw(42) << "|\n";
        cout << "\t| 1 |  Search By Name  " << setw(24) << "|\n";
        cout << "\t| 2 |  Search By Numbers" << setw(23) << "|\n";
        cout << "\t| 0 |  Main page " << setw(30) << "|\n";
        cout << "\t|   |" << setw(42) << "|\n";
        cout << "\t|   |" << setw(42) << "|\n";
        cout << "\t|   |" << setw(42) << "|\n";
        cout << "\t|___|________________________________________|\n\n";
        cout << "\tPress a key to continue ... ";
        string search;
        cin >> search;
        bool option = false; // for terminating interior loop
        bool srch = false;  // for else condition
        while (option == false)
        {
            if (search == "1")
            {
                string searchbyname;
                cin.ignore();
                cout << "\n\n\tEnter the name of person : \t";
                getline(cin,searchbyname);
                for (int i = 0; i < 100; i++)
                {
                    if (searchbyname == names[i])
                    {
                        system("cls");
                        cout << "\n\nPerson " << i + 1 << " :";
                        cout << "\n\t Name : \t" << names[i] << endl;
                        cout << "\t Number :\t" << numbers[i] << endl;
                        cout << "\t Email : \t" << emails[i] << endl;
                        srch = true;
                        option = true;
                        break;
                    }
                }
                if(srch == false)
                {
                    system("cls");
                    cout << "\n\n\n\tNo contact found! \n\n";
                    break;
                }
            }
            else if (search == "2")
            {
                cin.ignore();
                cout << "\n\n\tEnter the Number of person : \t";
                string searchbynumber;
                getline(cin,searchbynumber);
                for (int i = 0; i < 100; i++)
                {
                    if (searchbynumber == numbers[i])
                    {
                        system("cls");
                        cout << "\n\nPerson " << i + 1 << " :";
                        cout << "\n\t Name : \t" << names[i]<<endl;
                        cout << "\t Number :\t" << numbers[i]<<endl;
                        cout << "\t Email : \t" << emails[i]<<endl;
                        srch = true;
                        option=true;
                        break;
                    }
                }
                if (srch == false)
                {
                    system("cls");
                    cout << "\n\n\n\tNo contact found! \n\n";
                    srch = true;
                    break;
                }
            }
            else if (search == "0")
            {
                system("cls");
                back = true;
                break;
            }
            else
            {
                system("cls");
                cout << "\n\n\tInvalid Choice!\n\n";
                break;
            }
        }
    }
}
int main()
{
    while (startup == 1) // password
    {
        string password;
        cout << "\n\n\t Enter Startup Password : ";
        cin >> password;
        if (password == givenpassword)
        {
            system("cls");
            cout << "\n\n\t ******* Wellcome to Phone-book Project ******\n\n";
            startup++;
        }
        else
        {
            system("cls");
            cout << "\n\n\tWronge Password!";
        }
    }

    while (true)
    {
        mainpage();
        string startchoice;
        cin >> startchoice;
        if (startchoice == "1") // new contacts open
        {
            newcontact();
        }
        else if (startchoice == "2")
        {
        }
        else if (startchoice == "3") // searching contacts
        {
            system("cls");
            searchingcontacts();

        }
        else if (startchoice == "4")
        {
        }
        else if (startchoice == "5") // all list options
        {
            system("cls");
            allcontacts();
        }
        else if (startchoice == "0") // exit option
        {
            cout << "\n\n\t Thanks for using\n\t Good bye ... \n\n\n";
            break;
        }
        else // wronge option
        {
            system("cls");
            cout << "\n\tWronge Option!\n";
        }
    }
    return 0;
}
 
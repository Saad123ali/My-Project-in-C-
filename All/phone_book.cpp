#include <iostream>
#include <string>
#include <array>
#include <iomanip>
using namespace std;
int numb = 0, max = 100,wellcome=1;
string names[100], numbers[100], emails[100];
int mainpage();
int newcontact();
int allcontacts(); 
int main()
{
    while (wellcome==1)
    {
    cout << "\n\n\t ******* Wellcome to Phone-book Project ******\n\n";
    wellcome++;
    }
    
    char options;
start:
    mainpage();
    cin >> options;
    switch (options)
    {
    case '1':
    {
        newcontact();
        break;
    }
    case '2':
    {

        break;
    }
    case '3':
    {

        break;
    }
    case '4':
    {

        break;
    }
    case '5':
    {
        system("cls");
        allcontacts();
        break;
    }
    case '0':
    {
        cout<<"\n\n\t Thanks for using\n\t Good bye ... \n\n\n";
        return 0;
        break;
    }
    default:
    {
        system("cls");
        cout << "\n\tWronge Option!\n";
        goto start;
    }
    }

    cout << "\n\n\n";
    return 0;
}
int mainpage()
{
    cout << "\n\n\t ____________________________________________\n";
    cout << "\t|\t\t   Phone Book\t\t     |\n";
    cout << "\t|____________________________________________|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t| 1 |  New Contact " << setw(28) << "|\n";
    cout << "\t| 2 |  Edit a contact " << setw(25) << "|\n";
    cout << "\t| 4 |  Search Contact " << setw(25) << "|\n";
    cout << "\t| 3 |  Delete Contact " << setw(25) << "|\n";
    cout << "\t| 5 |  List all Contacts " << setw(22) << "|\n";
    cout << "\t| 0 |  Exit " << setw(35) << "|\n";
    cout << "\t|   |" << setw(42) << "|\n";
    cout << "\t|___|________________________________________|\n\n";
    cout << "\tPress a key to continue ... ";
}
int newcontact()
{
    system("cls");
    cin.ignore();
    for (numb; numb < 100; numb++)
    {
        cout << "\n\nPerson " << numb + 1 << " :";
        cout << "\n\t Name : \t";
        getline(cin, names[numb]);
        cout << "\t Number :\t";
        getline(cin, numbers[numb]);
        cout << "\t Email : \t";
        getline(cin, emails[numb]);
        cout << "\n\n";
    a:
        cout << "\tDo you want to add another (y/n): ";
        string a;
        cin >> a;
        if (a == "y" || a == "Y")
        {
            // system("cls");
            cin.ignore();
        }
        else if (a == "n" || a == "N")
        {
            system("cls");
            main();
        }
        else
        {
            cout << "\n\tInvalid Choice!\n";
            goto a;
        }
    }
}
int allcontacts()
{
    if(names->empty())
    {
        cout<<"\n\n\n\tNo contact found.Please add at least one!\n\n";
        main();
    }
    else
    {
        for(int i=0;i<=numb;i++)
        {

            cout << "\n\nPerson " << i + 1 << " :";
            cout << "\n\t Name : \t"<<names[i];
            cout << "\n\t Number :\t"<<numbers[i];
            cout << "\n\t Email : \t"<<emails[i];
            cout << "\n";
        }
        main();
    }
}
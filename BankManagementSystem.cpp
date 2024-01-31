#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
const int Max = 1024;
const int MaxHistory = 15;

// coustomer account structure
struct Customer
{
    int accNumber;
    string name;
    long double balance;
    // string accHistory[MaxHistory];
};

Customer customers[Max];
int numCustomers = 0;

bool startup = true;

// bank name
void bankName()
{
    while (true)
    {
        cout << "\n\t\t******* WELCOME TO SAAD CODE BANK *******\n";
        startup = !(startup);
        break;
    }
}

// new account create
void newAccount()
{
    system("cls");
    Customer newcustomer;
    cout<<"Enter account number: ";
    cin>>newcustomer.accNumber;
    cout<<"Enter Account holder name: ";
    cin.ignore();
    getline(cin, newcustomer.name);
    cout<<"Enter initial balance: ";
    cin>>newcustomer.balance;
    customers[numCustomers] = newcustomer;
    numCustomers++;
    cout<<"\n\tAccount created successfully"<<endl;
}

// deposit amount  to account
void deposit()
{
    system("cls");
    int accNumber;
    long double amount;
    cout<<"Enter the account number: ";
    cin>>accNumber;
    // search account loop
    bool foundAccount = false;
    for( int i = 0; i < numCustomers; i++)
    {
        if( customers[i].accNumber == accNumber)
        {
            cout<<"Enter the deposit amount: ";
            cin>>amount;
            customers[i].balance += amount;
            cout<<"Deposit amount successfully"<<endl;
            foundAccount = true;
            break;
        }
    }
    if( !foundAccount )
    {
        cout<<"Invalid account number"<<endl;
    }
}

// withdraw amount to account
void withdraw()
{
    system("cls");
    int accNumber;
    long double amount;
    cout<<"Enter the account number: ";
    cin>>accNumber;
    // search account loop
    bool foundAccount = false;
    for( int i = 0; i < numCustomers; i++)
    {
        if( customers[i].accNumber == accNumber)
        {
            cout<<"Enter the withdraw amount: ";
            cin>>amount;
            if ( amount <=customers[i].balance)
            {
                customers[i].balance -= amount;
                cout<<"Withdraw amount successfully"<<endl;
                foundAccount = true;
                break;
            }
            else
            {
                cout<<"Insufficient amount!"<<endl;
            }
        }
    }
    if( !foundAccount )
    {
        cout<<"Invalid account number"<<endl;
    }
}

// check account balance
void checkBalance()
{
    system("cls");
    int accNumber;
    cout<<"Enter the account number";
    cin>>accNumber;

    // search account loop
    bool foundAccount = false;
    for( int i = 0; i < numCustomers; i++ )
    {
        if( customers[i].accNumber == accNumber)
        {
            cout<<"Your current account balance: "<<customers[i].balance<<endl;
            foundAccount = true;
            break;
        }
    }
    if( !foundAccount )
    {
        cout<<"Invalid account number"<<endl;
    }
}

// check account balance by name
void checkBalancebyanme()
{
    system("cls");
    string name;
    cout<<"Enter the account holder name: ";
    cin.ignore();
    getline(cin, name);

    // search account loop
    bool foundAccount = false;
    for( int i = 0; i < numCustomers; i++ )
    {
        if( customers[i].name == name)
        {
            cout<<"Your current account balance: "<<customers[i].balance<<endl;
            foundAccount = true;
            break;
        }
    }
    if(!foundAccount)
    {
        cout<<"Invalid account number"<<endl;
    }
}
void Detail()
{
    system("cls");
    int accNumber;
    string name;
    cout<<"Enter the account number: ";
    cin>>accNumber;
    cout<<"Enter the account holder name: ";
    cin.ignore();
    getline(cin, name);
    // search foraccount detail loop
    bool accfound = false;
    for( int i = 0; i< numCustomers; i++ )
    {
        if( name == customers[i].name && accNumber == customers[i].accNumber )
        {
            cout<<"Account details found"<<endl;
            cout<<"Account Number: "<< customers[i].accNumber<<endl;
            cout<<"Account Holder name: "<< customers[i].name<<endl;
            cout<<"Current Account Balance: "<< customers[i].balance<<endl;
            accfound=true;
            break;
        }
    }
    if(!accfound)
    {
        cout<<"Account Not Found! "<< endl;
    }
}
void AllDetail()
{
    system("cls");
    if (numCustomers > 0)
    {
        cout << "Account details found" << endl;
        for (int i = 0; i < numCustomers; i++)
        {
            cout << "Account no:" << i + 1 << endl;
            cout << "Account Number: " << customers[i].accNumber << endl;
            cout << "Account Holder name: " << customers[i].name << endl;
            cout << "Current Account Balance: " << customers[i].balance << endl;
            cout << endl;
        }
    }
    else
    {
        cout << "No Account Detail Available" << endl;
    }
}


// delete account
void deleteAccount()
{
    system("cls");
    int accNumber;
    string name;
    cout << "Enter the Account Number: ";
    cin >> accNumber;
    cout << "Enter the Account Holder Name: ";
    cin.ignore();
    getline(cin, name);

    bool accountDeleted = false;
    for (int i = 0; i < numCustomers; i++)
    {
        if (name == customers[i].name && accNumber == customers[i].accNumber)
        {
            Customer* deletedAccount = &customers[i];

            for (int j = i; j < numCustomers - 1; j++)
            {
                customers[j] = customers[j + 1];
            }

            numCustomers--;

            delete deletedAccount;

            accountDeleted = true;
            cout << "Account Deleted Successfully!" << endl;
            break;
        }
    }

    if (!accountDeleted)
    {
        cout << "Account Not Found! " << endl;
    }
}

// delete all accounts
void deleteAllAccounts()
{
    system("cls");
    numCustomers = 0;
    cout << "All Accounts Deleted Successfully!" << endl;
}

// main function
int main()
{
    while(startup)
    {
        bankName();
    }
    while(true)
    {
        cout << "\n\t\t __________________________________________\n";
        cout << "\t\t|      |" << setw(37) << "|\n";
        cout << "\t\t| [1]  |     Create Account" << setw(18) << "|\n";
        cout << "\t\t| [2]  |     Deposit" << setw(25) << "|\n";
        cout << "\t\t| [3]  |     Withdraw" << setw(24) << "|\n";
        cout << "\t\t| [4]  |     Check Account Balance" << setw(11) << "|\n";
        cout << "\t\t| [5]  |     Check Account Detail" << setw(12) << "|\n";
        cout << "\t\t| [6]  |     Delete Account" << setw(18) << "|\n";
        cout << "\t\t| [0]  |     EXIT" << setw(28) << "|\n";
        cout << "\t\t|      |" << setw(37) << "|\n";
        cout << "\t\t|______|___________________________________|\n";
        cout << "\n\t\tEnter your choice ... ";
        string choice;
        cin>>choice;

        if (choice == "1") 
        {
            newAccount();
        } 
        else if (choice == "2") 
        {
            deposit();
        } 
        else if (choice == "3") 
        {
            withdraw();
        } 
        else if (choice == "4") 
        {
            system("cls");
            cout << "\n\t\t __________________________________________\n";
            cout << "\t\t|      |" << setw(37) << "|\n";
            cout << "\t\t| [1]  |     Check Balance by number" << setw(9) << "|\n";
            cout << "\t\t| [2]  |     Check Balance by name" << setw(11) << "|\n";
            cout << "\t\t|      |" << setw(37) << "|\n";
            cout << "\t\t|______|___________________________________|\n";
            cout << "\n\t\tEnter your choice ... ";
            string check;
            cin>>check;
            if( check == "1" )
            {
                checkBalance();
            }
            else if( check == "2" )
            {
                checkBalancebyanme();
            }
            else
            {
                cout<<"Invalid choice!"<<endl;
            }
        } 
        else if (choice == "5") 
        {
            system("cls");
            cout << "\n\t\t __________________________________________\n";
            cout << "\t\t|      |" << setw(37) << "|\n";
            cout << "\t\t| [1]  |     Specific Account" << setw(16) << "|\n";
            cout << "\t\t| [2]  |     All Account Detail" << setw(14) << "|\n";
            cout << "\t\t|      |" << setw(37) << "|\n";
            cout << "\t\t|______|___________________________________|\n";
            cout << "\n\t\tEnter your choice ... ";
            string det;
            cin>>det;
            if( det == "1")
            {
                Detail();
            }
            else if( det == "2")
            {
                AllDetail();
            }
            else
            {
                cout<<"Invalid Choice"<<endl;
            }
        }
        else if( choice == "6")
        {
            system("cls");
            cout << "\n\t\t __________________________________________\n";
            cout << "\t\t|      |" << setw(37) << "|\n";
            cout << "\t\t| [1]  |     Delete Specific Account" << setw(9) << "|\n";
            cout << "\t\t| [2]  |     Delete All Accounts" << setw(13) << "|\n";
            cout << "\t\t|      |" << setw(37) << "|\n";
            cout << "\t\t|______|___________________________________|\n";
            cout << "\n\t\tEnter your choice ... ";
            string deleteChoice;
            cin >> deleteChoice;
            if (deleteChoice == "1")
            {
                deleteAccount();
            }
            else if (deleteChoice == "2")
            {
                deleteAllAccounts();
            }
            else
            {
                cout << "Invalid Choice" << endl;
            }
        }
        else if (choice == "0")
        {
            cout<<"Thanks for using this code.\n"<<endl;
            break;
        }     
        else
        {
            cout<<"Invalid choice!"<<endl;
        }
    }
    return 0;
}
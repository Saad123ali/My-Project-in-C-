 #include <iostream>
#include <array>    
#include<iomanip>
using namespace std;

const int Max = 100; 
struct Customer
{
    int accountNumber;
    string name;
    double balance;
    array<string, 10> transactionHistory; 
};
 struct Customer customers[Max];
    int numCustomers = 0;
bool startup = true;
void Bankname()
{
    while(true)
    {
        cout<<"\n\t\t******* WELCOME TO SAAD CODE BANK *******\n";
        startup = !(startup);
        break;
    }
}
void Menu()
{
    cout << "\n\t\t __________________________________________\n";
    cout << "\t\t|      |" << setw(37) << "|\n";
    cout << "\t\t| [1]  |     Create Account" << setw(18) << "|\n";
    cout << "\t\t| [2]  |     Deposit" << setw(25) << "|\n";
    cout << "\t\t| [3]  |     Withdraw" << setw(24) << "|\n";
    cout << "\t\t| [4]  |     Check Balance" << setw(19) << "|\n";
    cout << "\t\t| [0]  |     EXIT" << setw(28) << "|\n";
    cout << "\t\t|      |" << setw(37) << "|\n";
    cout << "\t\t|______|___________________________________|\n";
    cout << "\n\t\tEnter your choice ... ";
}

 void newAccount(Customer customers[], int &numCustomers)
{
    cout << "\n\tEnter account number: ";
    cin >> customers[numCustomers].accountNumber;

    cout << "\n\tEnter name: ";
    cin.ignore(); 
    getline(cin, customers[numCustomers].name);

    cout << "\n\tEnter initial balance: ";
    cin >> customers[numCustomers].balance;

    cout << "\n\n\tAccount created successfully!\n";
    numCustomers++;
}

void Deposit(Customer customers[], int numCustomers)
{
    int accNumber;
    double amount;
    cout << "\n\tPlease enter account number: ";
    cin >> accNumber;

    for (int i = 0; i < numCustomers; i++)
    {
        if (customers[i].accountNumber == accNumber)
        {
            cout << "\n\tEnter deposit amount: ";
            cin >> amount;
            customers[i].balance += amount;
            cout << "\n\n\tDeposit successful! \n\n\tNew balance: " << customers[i].balance << endl;
            break;
        }
        else
        {
            cout<<"\n\nInvalid account number\n\n"<<endl;
        }
    }
}

void withdraw(Customer customers[], int numCustomers)
{
 
    int accNumber;
    double amount;
    cout << "\n\tEnter account number: ";
    cin >> accNumber;

    for (int i = 0; i < numCustomers; i++)
    {
        if (customers[i].accountNumber == accNumber)
        {
            cout << "\n\tPlease enter withdrawal amount: ";
            cin >> amount;
            if (amount <= customers[i].balance)
            {
                customers[i].balance -= amount;
                cout << "\n\tWithdrawal successful! \n\n\tNew balance: " << customers[i].balance << endl;
            }
            else
            {
                cout << "\n\n\tInsufficient funds!\n";
            }
            break;
        }
    }
}

void CheckBalance(Customer customers[], int numCustomers)
{
 
    int accNumber;
    cout << "\n\tEnter account number: ";
    cin >> accNumber;

    for (int i = 0; i < numCustomers; i++)
    {
        if (customers[i].accountNumber == accNumber)
        {
            cout<<"\n\tYour Current Account Balance is : " << customers[i].balance << endl;
            break;
        }
        else
        {
            cout<<"\n\nInvalid account number\n\n"<<endl;
        }
    }
}
int main()
{
    while(startup)
    {
        Bankname();
    }
    while(true)
    {
        Menu();
        string choice;
        cin>>choice;
        if(choice == "1")
        {
           newAccount(customers, numCustomers);  
        }
        else if(choice == "2")
        { 
            Deposit(customers, numCustomers);    
        }
        else if(choice == "3")
        {
            withdraw(customers, numCustomers);
        }
        else if(choice == "4")
        {
            CheckBalance(customers, numCustomers);           
        }
        else if(choice == "0")
        {
            cout<<"\n\tThanks for using \n\tGood bye...\n";
            break;
        }
        else
        {
            cout<<"\n\tInvalid choice!\n\n";
        }
    }
    
    
    return 0;
}


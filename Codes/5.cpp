#include <iostream>
#include <array>
#include <iomanip>
#include <string>

using namespace std;
int Cus = 0;

struct customer
{
    int account_id;
    string customer_name;
    double balance;
};

struct customer Account[100]; 


void Bankname()
{
    cout << "\n\t\t***** WELCOME TO SAAD CODE BANK *****\n";
}

void menu()
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

void NewAccount()
{
    system("cls");
    cout << "\n\tEnter Your Name : ";
    cin.ignore();
    getline(cin, Account[Cus].customer_name);
    cout << "\n\tEnter the new account number : ";
    cin >> Account[Cus].account_id;
    cout << "\n\tEnter the initial balance : ";
    cin >> Account[Cus].balance;
    cout << "\n\tAccount Created Successfully! ";
    Cus++;
}

void deposit()
{
    system("cls");
    int Accnum;
    double amount;
    cout << "\n\tEnter the Account Number : ";
    cin >> Accnum;
    for (int i = 0; i < Cus; i++)
    {
        if (Account[i].account_id == Accnum)
        {
            cout << "\n\tEnter the Deposit amount : ";
            cin >> amount;
            Account[i].balance += amount;
            cout << "\n\tDeposit Successfully!\n";
            return; 
        }
    }
    cout << "\n\tInvalid Account Number!\n";
}

void withdraw()
{
    system("cls");
    int Accnum;
    double amount;
    cout << "\n\tEnter the Account Number : ";
    cin >> Accnum;
    for (int i = 0; i < Cus; i++)
    {
        if (Account[i].account_id == Accnum)
        {
            cout << "\n\tPlease enter withdraw amount : ";
            cin >> amount;
            if (Account[i].balance >= amount)
            {
                Account[i].balance -= amount;
                cout << "\n\tWithdraw Successfully!\n";
            }
            else
            {
                cout << "\n\tInsufficient funds for withdrawal!\n";
            }
            return; 
        }
    }
    cout << "\n\tInvalid Account Number!\n";
}

void Checkbalance()
{
    system("cls");
    int Accnum;
    cout << "\n\tEnter the Account Number: ";
    cin >> Accnum;
    for (int i = 0; i < Cus; i++)
    {
        if (Account[i].account_id == Accnum)
        {
            cout << "\n\tYour Current Balance is : " << Account[i].balance << "\n";
            return; 
        }
    }
    cout << "\n\tInvalid Account Number!\n";
}

int main()
{
    Bankname();
    while (true)
    {
        menu();
        string choice;
        cin >> choice;
        if (choice == "1")
        {
            NewAccount();
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
            Checkbalance();
        }
        else if (choice == "0")
        {
            cout << "\n\tThanks for using\n\tGoodbye...\n";
            break;
        }
        else
        {
            cout << "\n\tInvalid choice!\n";
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int Max = 100;
const int MaxHistorySize = 10;

struct Customer {
    int accountNumber;
    string name;
    double balance;
    string transactionHistory[MaxHistorySize];
};

Customer customers[Max];
int numCustomers = 0;
bool startup = true;

void Bankname() {
    while (true) {
        cout << "\n\t\t******* WELCOME TO SAAD CODE BANK *******\n";
        startup = !(startup);
        break;
    }
}

void Menu() {
    cout << "\n\t\t __________________________________________\n";
    cout << "\t\t|      |" << setw(37) << "|\n";
    cout << "\t\t| [1]  |     Create Account" << setw(18) << "|\n";
    cout << "\t\t| [2]  |     Deposit" << setw(25) << "|\n";
    cout << "\t\t| [3]  |     Withdraw" << setw(24) << "|\n";
    cout << "\t\t| [4]  |     Check Balance" << setw(19) << "|\n";
    cout << "\t\t| [5]  |     Check History" << setw(19) << "|\n";
    cout << "\t\t| [0]  |     EXIT" << setw(28) << "|\n";
    cout << "\t\t|      |" << setw(37) << "|\n";
    cout << "\t\t|______|___________________________________|\n";
    cout << "\n\t\tEnter your choice ... ";
}

void newAccount() {
    Customer newCustomer;
    cout << "\n\tEnter account number: ";
    cin >> newCustomer.accountNumber;

    cout << "\n\tEnter name: ";
    cin.ignore();
    getline(cin, newCustomer.name);

    cout << "\n\tEnter initial balance: ";
    cin >> newCustomer.balance;

    customers[numCustomers] = newCustomer;
    numCustomers++;

    cout << "\n\n\tAccount created successfully!\n";
}

void Deposit() {
    int accNumber;
    double amount;
    cout << "\n\tPlease enter account number: ";
    cin >> accNumber;

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accNumber) {
            cout << "\n\tEnter deposit amount: ";
            cin >> amount;
            customers[i].balance += amount;

            // Shift transaction history elements to make room for the new transaction
            for (int j = MaxHistorySize - 1; j > 0; j--) {
                customers[i].transactionHistory[j] = customers[i].transactionHistory[j - 1];
            }
            customers[i].transactionHistory[0] = "Deposit: +" + to_string(amount);

            cout << "\n\n\tDeposit successful! \n\n\tNew balance: " << customers[i].balance << endl;
            return;
        }
    }

    cout << "\n\nInvalid account number\n\n" << endl;
}

void withdraw() {
    int accNumber;
    double amount;
    cout << "\n\tEnter account number: ";
    cin >> accNumber;

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accNumber) {
            cout << "\n\tPlease enter withdrawal amount: ";
            cin >> amount;
            if (amount <= customers[i].balance) {
                customers[i].balance -= amount;

                // Shift transaction history elements to make room for the new transaction
                for (int j = MaxHistorySize - 1; j > 0; j--) {
                    customers[i].transactionHistory[j] = customers[i].transactionHistory[j - 1];
                }
                customers[i].transactionHistory[0] = "Withdrawal: -" + to_string(amount);

                cout << "\n\tWithdrawal successful! \n\n\tNew balance: " << customers[i].balance << endl;
                return;
            } else {
                cout << "\n\n\tInsufficient funds!\n";
                return;
            }
        }
    }

    cout << "\n\nInvalid account number\n\n" << endl;
}

void CheckBalance() {
    int accNumber;
    cout << "\n\tEnter account number: ";
    cin >> accNumber;

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accNumber) {
            cout << "\n\tYour Current Account Balance is : " << customers[i].balance << endl;
            return;
        }
    }

    cout << "\n\nInvalid account number\n\n" << endl;
}

void CheckHistory() {
    int accNumber;
    cout << "\n\tEnter account number to check history: ";
    cin >> accNumber;

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accNumber) {
            cout << "\n\tTransaction History for Account " << accNumber << ":\n";
            for (int j = 0; j < MaxHistorySize; j++) {
                if (!customers[i].transactionHistory[j].empty()) {
                    cout << "\t- " << customers[i].transactionHistory[j] << endl;
                }
            }
            return;
        }
    }

    cout << "\n\nInvalid account number\n\n" << endl;
}

int main() {
    while (startup) {
        Bankname();
    }

    while (true) {
        Menu();
        string choice;
        cin >> choice;
        if (choice == "1") {
            newAccount();
        } else if (choice == "2") {
            Deposit();
        } else if (choice == "3") {
            withdraw();
        } else if (choice == "4") {
            CheckBalance();
        } else if (choice == "5") {
            CheckHistory();
        } else if (choice == "0") {
            cout << "\n\tThanks for using \n\tGood bye...\n";
            break;
        } else {
            cout << "\n\tInvalid choice!\n\n";
        }
    }

    return 0;
}

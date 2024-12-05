#include <iostream>
#include <unordered_map>
#include <vector>
#include <ctime>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;

bool phoneValidation(string input)
{
    if (input.empty())
    {
        return false;
    }
    if (input[0] != '0')
    {
        return false;
    }

    if (input.size() > 1 && input[1] != '3')
    {
        return false;
    }

    for (int i = 0; i < input.size(); ++i)
    {
        if (!isdigit(input[i]) && input[i] == ' ')
        {
            return false;
        }
    }
    if (input.size() == 11)
    {
        return true;
    }
    return false;
}

bool menuChoice(string choice)
{
    for (int i = 0; i < choice.size(); ++i)
    {
        if (!isdigit(choice[i]))
        {
            return false;
        }
    }
    if (choice.empty())
    {
        return false;
    }
    for (int i = 0; i < choice.size(); ++i)
    {
        if (choice[i] == ' ')
        {
            return false;
        }
    }
    return true;
}

bool amountValid(string &amount)
{
    if (amount.empty())
    {
        return false;
    }

    for (char c : amount)
    {
        if (!isdigit(c)) // Only digits are allowed
        {
            return false;
        }
    }

    return true;
}

void passLogic(string &password, string promptText)
{
    char pass[32] = {0};
    char ch;
    bool enter = false;
    int i = 0;
    bool show = false;

    cout << promptText;

    while (!enter)
    {
        ch = _getch();

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            pass[i] = ch;
            if (show)
            {
                cout << ch;
            }
            else
            {
                cout << "*";
            }
            i++;
        }

        if (ch == '\b' && i >= 1)
        {
            cout << "\b \b";
            i--;
        }

        if (ch == '\r')
        {
            enter = true;
        }

        if (ch == '\t')
        {
            show = !show;
            cout << "\r" << promptText;
            for (int j = 0; j < i; j++)
            {
                cout << (show ? pass[j] : '*');
            }
        }
    }

    pass[i] = '\0';
    password = pass;
}

bool pinValid(string token)
{
    if (token.empty())
    {
        return false;
    }
    for (int i = 0; i < token.size(); ++i)
    {
        if (!isdigit(token[i]) && token[i] == ' ')
        {
            return false;
        }
    }
    if (token.size() == 4)
    {
        return true;
    }
    return false;
}

bool cnicValid(string token)
{
    if (token.empty())
    {
        return false;
    }
    for (int i = 0; i < token.size(); ++i)
    {
        if (!isdigit(token[i]) && token[i] == ' ')
        {
            return false;
        }
    }
    if (token.size() == 13)
    {
        return true;
    }
    return false;
}

bool accValid(string token)
{
    if (token.empty())
    {
        return false;
    }
    for (int i = 0; i < token.size(); ++i)
    {
        if (!isdigit(token[i]) && token[i] == ' ')
        {
            return false;
        }
    }
    if (token.size() == 7)
    {
        return true;
    }
    return false;
}


bool nameValid(const string &name)
{
    if (name.empty())  // If name is empty, return false
    {
        return false;
    }

    for (char ch : name)  // Loop through each character in the name
    {
        if (!isalpha(ch) && ch != ' ')  // Check if character is not an alphabet and not a space
        {
            return false;  // Invalid character found
        }
    }
    return true;  // All characters are valid (either alphabet or space)
}

class Account
{

public:
    string name;
    string accountNo;
    string pin;
    string cnic;
    double balance;
    string cellNo;
    vector<string> transactionHistory;
    bool loanRequested;
    bool loanApproved;
    double loanAmountRequested; // New variable to store requested loan amount

    // Default constructor
    Account()
        : name(""), accountNo(""), pin(""), cnic(""), balance(0.0), cellNo(""), loanRequested(false), loanApproved(false), loanAmountRequested(0.0) {}

    Account(string name, string accNo, string accPin, string accCnic, string accCellNo, double initialBalance)
        : name(name), // Initialize the 'name' field
          accountNo(accNo),
          pin(accPin),
          cnic(accCnic),
          cellNo(accCellNo),
          balance(initialBalance),
          loanRequested(false),
          loanApproved(false),
          loanAmountRequested(0.0)
    {
    }

    void addTransaction(const string &transaction)
    {
        stringstream ss;
        time_t now = time(0);
        tm *localtm = localtime(&now);
        ss << asctime(localtm) << ": " << transaction;
        transactionHistory.push_back(ss.str());
    }

    void requestLoan(double amount);

    int loanRequestsCount() const;

    void repayLoan(double amount);
};

void Account::requestLoan(double amount)
{
    // Check if the amount is valid and positive
    if (amount > 0)
    {
        // Check if there are already 5 loan requests
        if (loanRequestsCount() >= 5)
        {
            cout << "You have reached the maximum number of loan requests (5).\n";
            return;
        }

        // Check if a loan is already requested
        if (loanRequested)
        {
            cout << "Loan has already been requested for this account.\n";
            return;
        }

        // Mark the loan request as true
        loanRequested = true;
        loanAmountRequested = amount;

        // Log the loan request in transaction history
        transactionHistory.push_back("Loan request for Rs. " + to_string(amount));

        cout << "Loan request for Rs. " << amount << " has been made.\n";
    }
    else
    {
        cout << "Invalid loan amount.\n";
    }
}

// Helper function to count the number of loan requests in the transaction history
int Account::loanRequestsCount() const
{
    int count = 0;
    for (const string &transaction : transactionHistory)
    {
        if (transaction.find("Loan request") != string::npos)
        {
            count++;
        }
    }
    return count;
}

void Account::repayLoan(double amount)
{
    // Check if the loan is approved and the user has an outstanding loan
    if (loanApproved && loanAmountRequested > 0)
    {
        if (amount <= 0)
        {
            cout << "Invalid repayment amount. Please enter a positive value.\n";
            return;
        }

        if (amount > loanAmountRequested)
        {
            cout << "You cannot repay more than the requested loan amount.\n";
            return;
        }

        // Deduct the repayment from the loan amount and account balance
        loanAmountRequested -= amount;
        balance -= amount;

        // If the loan is fully repaid, mark it as completed
        if (loanAmountRequested == 0)
        {
            loanApproved = false; // Loan is cleared, no longer approved
            cout << "Loan fully repaid. The loan status is now cleared.\n";
        }
        else
        {
            cout << "Repayment of Rs. " << amount << " successful. Remaining loan amount: Rs. " << loanAmountRequested << "\n";
        }

        // Log the repayment in the transaction history
        transactionHistory.push_back("Loan repayment of Rs. " + to_string(amount));
    }
    else
    {
        cout << "No loan to repay or loan is not yet approved.\n";
    }
}

class Bank
{
private:
    unordered_map<string, Account> accounts;     // Account number to Account object
    unordered_map<string, string> cnicToAccount; // CNIC to Account number

public:
    // Customer operations
    void createAccount(const string &name, const string &accPin, const string &accCnic, const string &accCellNo, double initialBalance);
    string generateAccountNumber();
    string forgotPin(const string &cnic);
    void showAccountDetails(const string &accNo);
    void showTransactionHistory(const string &accNo);
    void requestLoan(const string &accNo);

    // Admin operations
    void deleteAccount(const string &accNo);
    void searchAccount(const string &accNo);
    void approveLoan(const string &accNo);
    void showAllAccounts();

    // ATM operations
    bool authenticate(const string &accNo, const string &pin);
    void withdraw(const string &accNo, double amount);
    void deposit(const string &accNo, double amount);
    void atmInterface();

    // Panels
    void userPanel();
    void adminPanel();

    // Utility functions
    bool accountExists(const string &accNo);
    bool verifyPin(const string &accNo, const string &pin);

    int loanRequestsCount(Account &acc);

    void repayLoan(const string &accNo, double amount);
};

string Bank::forgotPin(const string &cnic)
{
    if (cnicToAccount.find(cnic) != cnicToAccount.end())
    {
        string accNo = cnicToAccount[cnic];
        return accounts[accNo].pin;
    }
    return "CNIC not found.";
}

bool Bank::authenticate(const string &accNo, const string &pin)
{
    return verifyPin(accNo, pin);
}

// Utility functions implementation
bool Bank::accountExists(const string &accNo)
{
    return accounts.find(accNo) != accounts.end();
}

bool Bank::verifyPin(const string &accNo, const string &pin)
{
    if (accounts.find(accNo) != accounts.end())
    {
        return accounts[accNo].pin == pin;
    }
    return false;
}
string Bank::generateAccountNumber()
{
    srand(time(0)); // Seed the random number generator
    stringstream ss;
    for (int i = 0; i < 7; ++i)
    {
        ss << rand() % 10; // Generate a random digit
    }
    return ss.str();
}

void Bank::createAccount(const string &name, const string &accPin, const string &accCnic, const string &accCellNo, double initialBalance)
{
    string accNo = generateAccountNumber();
    // string accNo = "1";
    if (accounts.find(accNo) == accounts.end())
    {
        accounts[accNo] = Account(name, accNo, accPin, accCnic, accCellNo, initialBalance);
        cnicToAccount[accCnic] = accNo;
        cout << "Account created successfully.\n";
        cout << "Account Number: " << accNo << "\n";
    }
    else
    {
        cout << "Account number already exists. Please try again.\n";
    }
}

void Bank::showAccountDetails(const string &accNo)
{
    if (accounts.find(accNo) != accounts.end())
    {
        Account acc = accounts[accNo];
        cout << "Account Number: "
             << acc.accountNo << "\nBalance: "
             << acc.balance << "\nLoan Requested: "
             << (acc.loanRequested ? "Yes" : "No")
             << "\nLoan Approved: "
             << (acc.loanApproved ? "Yes" : "No") << "\n";
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::showTransactionHistory(const string &accNo)
{
    if (accounts.find(accNo) != accounts.end())
    {
        Account acc = accounts[accNo];
        cout << "Transaction History for Account Number: " << acc.accountNo << "\n";
        for (const string &transaction : acc.transactionHistory)
        {
            cout << transaction << "\n";
        }
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::withdraw(const string &accNo, double amount)
{
    if (accounts.find(accNo) != accounts.end())
    {
        if (accounts[accNo].balance >= amount)
        {
            accounts[accNo].balance -= amount;
            accounts[accNo].addTransaction("Withdraw: Rs. " + to_string(amount));
            cout << "Withdrawal successful. New Balance: " << accounts[accNo].balance << "\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::deposit(const string &accNo, double amount)
{
    if (accounts.find(accNo) != accounts.end())
    {
        accounts[accNo].balance += amount;
        accounts[accNo].addTransaction("Deposit: Rs. " + to_string(amount));
        cout << "Deposit successful. New Balance: " << accounts[accNo].balance << "\n";
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::showAllAccounts()
{
    for (const auto &pair : accounts)
    {
        const Account &acc = pair.second;

        cout << "Account Number: " << acc.accountNo << "\n"
             << "Name: " << acc.name << "\n"
             << "CNIC: " << acc.cnic << "\n"
             << "Cell No: " << acc.cellNo << "\n"
             << "Balance: " << acc.balance << "\n"
             << "Loan Requested: " << (acc.loanRequested ? "Yes, Amount: Rs. " + to_string(acc.loanAmountRequested) : "No") << "\n"
             << "Loan Approved: " << (acc.loanApproved ? "Yes" : "No") << "\n\n";
    }
}

void Bank::deleteAccount(const string &accNo)
{
    if (accounts.find(accNo) != accounts.end())
    {
        accounts.erase(accNo);
        cout << "Account deleted successfully.\n";
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::searchAccount(const string &accNo)
{
    if (accounts.find(accNo) != accounts.end())
    {
        showAccountDetails(accNo);
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::requestLoan(const string &accNo)
{
    if (accounts.find(accNo) != accounts.end())
    {
        if (accounts[accNo].loanRequested)
        {
            cout << "Loan has already been requested for this account.\n";
        }
        else
        {
            string amountstr;
            double loanAmount;
            while (true)
            {
                cout << "Enter loan amount: Rs. ";
                getline(cin, amountstr);
                if (amountValid(amountstr))
                {
                    loanAmount = stod(amountstr);
                    break;
                }
                cout << "\n\tInvalid amount.\n";
            }

            if (loanAmount <= 0)
            {
                cout << "Invalid loan amount. Please enter a positive value.\n";
            }
            else
            {
                accounts[accNo].requestLoan(loanAmount); // Request loan with amount
            }
        }
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::approveLoan(const string &accNo)
{
    if (accounts.find(accNo) != accounts.end())
    {
        Account &acc = accounts[accNo];

        // If no loan request exists, notify the user
        if (!acc.loanRequested)
        {
            cout << "No loan request found for this account.\n";
            return;
        }

        cout << "Loan Request Details for Account Number: " << accNo << "\n";
        cout << "Requested Loan Amount: Rs. " << acc.loanAmountRequested << "\n";

        // Show loan amount first and then give the option to approve or deny
        cout << "Approve this loan? (1 for Yes, 0 for No): ";
        string approveInput;
        cin >> approveInput;

        // Determine approval status based on input
        bool approve = (approveInput == "1"); // True for Yes, False for No

        // Set the loan approval status
        acc.loanApproved = approve;

        if (approve)
        {
            acc.balance += acc.loanAmountRequested; // Add loan amount to balance if approved
            cout << "Loan of Rs. " << acc.loanAmountRequested << " approved. Added to balance.\n";
        }
        else
        {
            cout << "Loan of Rs. " << acc.loanAmountRequested << " denied.\n";
        }

        // Mark the loan request as resolved (set to false) after approval/denial
        acc.loanRequested = false;
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void Bank::repayLoan(const string &accNo, double amount)
{
    if (accounts.find(accNo) != accounts.end())
    {
        Account &acc = accounts[accNo];

        // Call the repayLoan function to handle repayment
        acc.repayLoan(amount);
    }
    else
    {
        cout << "Account not found.\n";      
    }
}

void Bank::atmInterface()
{
    system("CLS");
    string accNo, pin, cnic;

    while (true)
    {
        cout << "Enter your account number: ";
        getline(cin, accNo);
        if (accValid(accNo))
        {
            break;
        }
        cout << "\n\tInvalid Account No.\n";
    }

    while (true)
    {
        passLogic(pin, "Enter your PIN:");
        if (pinValid(pin))
        {
            break;
        }
        cout << "\n\tInvalid PIN.\n";
    }


    if (authenticate(accNo, pin))
    {
        system("CLS");
        string choice;
        double amount;
        string amountStr;
        while (true)
        {
            cout << "\nATM Menu:\n";
            cout << "1. Withdraw Money\n";
            cout << "2. Deposit Money\n";
            cout << "3. Exit\n";
            while (true)
            {
                cout << "\nEnter your choice: ";
                getline(cin, choice);
                if (menuChoice(choice))
                {
                    break;
                }
                cout << "\n\tInvalid input.\n";
            }

            if (choice == "1")
            {
                system("CLS");
                while (true)
                {
                    cout << "Enter amount to withdraw: ";
                    getline(cin, amountStr);
                    if (amountValid(amountStr))
                    {
                        amount = stod(amountStr);
                        break;
                    }
                    cout << "\n\tInvalid amount.\n";
                }
                withdraw(accNo, amount);
            }
            else if (choice == "2")
            {
                system("CLS");
                while (true)
                {
                    cout << "Enter amount to deposit: ";
                    getline(cin, amountStr);
                    if (amountValid(amountStr))
                    {
                        amount = stod(amountStr);
                        break;
                    }
                    cout << "\n\tInvalid amount.\n";
                }
                deposit(accNo, amount);
            }
            else if (choice == "3")
            {
                cout << "Exiting ATM.\n";
                break;
            }
            else
            {
                system("CLS");
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }
    else
    {
        cout << "Authentication failed.\n\t Please check your account number and PIN.\n";
    }
}

void Bank::userPanel()
{   
    system("CLS");
    string accNo, pin;

    // Ask for account number with validation
    while (true)
    {
        cout << "Enter your account number: ";
        getline(cin, accNo);
        if (accValid(accNo)) // Assuming accValid validates the account number format
        {
            break;
        }
        cout << "\n\tInvalid Account No.\n";
    }

    // Ask for PIN with validation
    while (true)
    {
        passLogic(pin, "Enter your PIN:"); // Assuming passLogic handles PIN input securely
        if (pinValid(pin))                 // Assuming pinValid checks if PIN is correct format
        {
            break;
        }
        cout << "\n\tInvalid PIN.\n";
    }

    // Authenticate user based on account number and PIN
    if (authenticate(accNo, pin)) // Assuming authenticate checks account validity with PIN
    {
        string choice;
        system("CLS");
        // User menu loop
        while (true)
        {
            cout << "\n\t\t ______________________________________________\n";
            cout << "\t\t|       |" << setw(40) << "|\n";
            cout << "\t\t| [1]   |     View Account Details" << setw(15) << "|\n";
            cout << "\t\t| [2]   |     View Transaction History" << setw(11) << "|\n";
            cout << "\t\t| [3]   |     Request Loan" << setw(23) << "|\n";
            cout << "\t\t| [4]   |     Return Loan" << setw(24) << "|\n";
            cout << "\t\t| [0]   |     Back" << setw(31) << "|\n";
            cout << "\t\t|_______|______________________________________|\n";

            // Ask for user's menu choice with validation
            while (true)
            {
                cout << "\nEnter your choice: ";
                getline(cin, choice);
                if (menuChoice(choice)) // Assuming menuChoice validates choice input
                {
                    break;
                }
                cout << "\n\tInvalid input.\n";
            }

            // Handle the user's choice
            if (choice == "1")
            {
                 system("CLS");
                showAccountDetails(accNo); // Assuming this displays account details
            }
            else if (choice == "2")
            {
                system("CLS");
                showTransactionHistory(accNo); // Assuming this shows transaction history
            }
            else if (choice == "3")
            {
                system("CLS");
                requestLoan(accNo); // Assuming this handles loan requests
            }
            else if (choice == "4")
            {
                system("CLS");
                double amount;
                cout << "Enter the amount to repay: Rs. ";
                while (true)
                {
                    string amountStr;
                    getline(cin, amountStr);
                    if (amountValid(amountStr)) // Assuming amountValid checks if the amount is valid
                    {
                        amount = stod(amountStr);
                        break;
                    }
                    cout << "Invalid amount. Please enter a valid number.\n";
                }
                repayLoan(accNo, amount); // Now passing both account number and repayment amount
            }
            else if (choice == "0")
            {
                 system("CLS");
                cout << "Exiting User Panel.\n";
                break; // Exit the menu and return to main menu
            }
            else
            {
                system("CLS");
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }
    else
    {
         system("CLS");
        cout << "Authentication failed.\n\nPlease check your account number and PIN.\n";
    }
}

void Bank::adminPanel()
{
    system("CLS");
    string choice;
    string accNo;
    string enteredPassword;
    const string adminPassword = "admin123"; // Set a static admin password for simplicity, can be dynamic if needed

    // Ask for the admin password first
    while (true)
    {
        cout << "\nEnter admin password: ";
        getline(cin, enteredPassword);
        if (enteredPassword == adminPassword)
        {
            cout << "Password correct. Access granted.\n";
            break; // Proceed to the admin menu if the password is correct
        }
        else
        {
            cout << "Incorrect password. Returning to main menu.\n";
            return; // Return to the main menu if the password is incorrect
        }
    }
    system("CLS");
    // Admin Menu
    while (true)
    {
        cout << "\n\t\t ______________________________________________\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t| [1]   |     Delete Account" << setw(21) << "|\n";
        cout << "\t\t| [2]   |     Search Account" << setw(21) << "|\n";
        cout << "\t\t| [3]   |     Approve/Deny Loan" << setw(18) << "|\n";
        cout << "\t\t| [4]   |     Show All Accounts" << setw(18) << "|\n";
        cout << "\t\t| [0]   |     Back" << setw(31) << "|\n";
        cout << "\t\t|_______|______________________________________|\n";

        // Loop to ensure valid choice
        while (true)
        {
            cout << "\nEnter your choice: ";
            getline(cin, choice);
            if (menuChoice(choice)) // Assuming this checks for valid menu choices
            {
                break;
            }
            cout << "\n\tInvalid input.\n";
        }

        // Handling choices based on input
        if (choice == "1")
        {
            system("CLS");
            while (true)
            {
                cout << "Enter account number to delete: ";
                getline(cin, accNo);
                if (accValid(accNo)) // Assuming this validates account number
                {
                    break;
                }
                cout << "\n\tInvalid Account No.\n";
            }
            deleteAccount(accNo);
        }
        else if (choice == "2")
        {
            system("CLS");
            while (true)
            {
                cout << "Enter account number to search: ";
                getline(cin, accNo);
                if (accValid(accNo))
                {
                    break;
                }
                cout << "\n\tInvalid Account No.\n";
            }
            searchAccount(accNo);
        }
        else if (choice == "3")
        {
            system("CLS");
            while (true)
            {
                cout << "Enter account number for loan approval/denial: ";
                getline(cin, accNo);
                if (accValid(accNo))
                {
                    break;
                }
                cout << "\n\tInvalid Account No.\n";
            }
            approveLoan(accNo); // false is just a placeholder, assume approve/deny logic inside `approveLoan`
        }
        else if (choice == "4")
        {
            system("CLS");
            showAllAccounts();
        }
        else if (choice == "0")
        {
            system("CLS");
            cout << "Exiting Admin Panel.\n";
            break;
        }
        else
        {
            system("CLS");
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

int main()
{
    Bank bank;
    system("CLS");
    string mainChoice;
    while (true)
    {   
        cout << "\n\t\t ______________________________________________\n";
        cout << "\t\t|       |" << setw(40) << "|\n";
        cout << "\t\t| [1]   |     Create Account" << setw(21) << "|\n";
        cout << "\t\t| [2]   |     User Panel" << setw(25) << "|\n";
        cout << "\t\t| [3]   |     Admin Panel" << setw(24) << "|\n";
        cout << "\t\t| [4]   |     ATM Panel" << setw(26) << "|\n";
        cout << "\t\t| [5]   |     Forget Account Pin" << setw(17) << "|\n";
        cout << "\t\t| [0]   |     Exit" << setw(31) << "|\n";
        cout << "\t\t|_______|______________________________________|\n";
        while (true)
        {
            cout << "\nEnter your choice: ";
            getline(cin, mainChoice);
            if (menuChoice(mainChoice))
            {
                break;
            }
            cout << "\n\t\tInvalid input.\n";
        }

        if (mainChoice == "1")
        {
            system("CLS");
            string name, pin, cnic, cellNo;
            string balance;
            double initialBalance;
            while (true)
            {
                cout << "Enter Your good name: ";
                getline(cin, name);
                if (nameValid(name))
                {
                    break;
                }
                cout << "\n\tInvalid name.\n";
            }
            while (true)
            {
                cout << "Enter Cell Number in PK: ";
                getline(cin, cellNo);
                if (phoneValidation(cellNo))
                {
                    break;
                }
                cout << "\n\tInvalid Phone no.\n";
            }
            while (true)
            {
                cout << "Enter Valid CNIC No: ";
                getline(cin, cnic);
                if (cnicValid(cnic))
                {
                    break;
                }
                cout << "\n\tInvalid CNIC No.\n";
            }

            while (true)
            {
                passLogic(pin, "Please Set four digit PIN:");
                if (pinValid(pin))
                {
                    break;
                }
                cout << "\n\tInvalid PIN.\n";
            }

            while (true)
            {
                cout << "\nEnter initial balance: ";
                getline(cin, balance);
                if (amountValid(balance))
                {
                    initialBalance = stod(balance); // Convert to double
                    break;
                }
                cout << "\n\tInvalid PIN.\n";
            }
            bank.createAccount(name, pin, cnic, cellNo, initialBalance);
        }
        else if (mainChoice == "2")
        {
            bank.userPanel();
        }
        else if (mainChoice == "3")
        {
            bank.adminPanel();
        }
        else if (mainChoice == "4")
        {
            bank.atmInterface();
        }
        else if (mainChoice == "5")
        {
            system("CLS");
            string cnic;
            while (true)
            {
                cout << "Enter Valid CNIC No: ";
                getline(cin, cnic);
                if (cnicValid(cnic))
                {
                    break;
                }
                cout << "\n\tInvalid CNIC No.\n";
            }
            bank.forgotPin(cnic);

            string pin = bank.forgotPin(cnic); // Store the returned PIN or error message
            cout << "PIN: " << pin << endl;    // Display the PIN or error message
        }
        else if (mainChoice == "0")
        {
            cout << "Exiting System.\n";
            break;
        }
        else
        {
            system("CLS");
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

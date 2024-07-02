#include <iostream>
#include <iomanip>
using namespace std;
float pkr,euro,dollar;
void menu() 
{
    cout << "\n\n\t____________________________________________";
    cout << "\n\t|" << setw(44) << "|";
    cout << "\n\t|   [1] Rs into Euro" << setw(25) << "|";
    cout << "\n\t|   [2] Euro into Yen" << setw(24) << "|";
    cout << "\n\t|   [3] Dollar into Euro" << setw(21) << "|";
    cout << "\n\t|   [4] Rs into Dollar" << setw(23) << "|";
    cout << "\n\t|   [5] Dollar into Yen" << setw(22) << "|";
    cout << "\n\t|   [0] Exit" << setw(33) << "|";
    cout << "\n\t|___________________________________________|";
    cout << "\n\tEnter your choice: ";
}
float convertCurrency(float pkrAmount) 
{
    return pkrAmount / 0.0032;  // Current currency PKR to Euro
}
 float convertCurrency(float euroAmount,int yen)
{
    yen = 156.71;
    return euroAmount * yen;  // Current currency Euro to Yen
}
float convertCurrency(int euro,float dollarAmount) 
{
    euro = 0.91;
    return dollarAmount * euro;  // Current currency Dollar to Euro
}
int main() 
{
    while (true) 
    {
        menu();  
        string choice;
        cin >> choice;
        if (choice == "1") 
        {
            cout << "Enter the amount of PKR: ";
            cin >> pkr;
            cout << "Rs " << pkr << " is equal to " << convertCurrency(pkr) << " Euro" << endl;
        } 
        else if (choice == "2") 
        {
            cout << "Enter the amount of Euro: ";
            cin >> euro;
            cout << "Euro " << euro << " is equal to " << convertCurrency(euro) << " Yen" << endl;
        } 
        else if (choice == "3") 
        {
            cout << "Enter the amount of Dollar: ";
            cin >> dollar;
            cout << "Dollar " << dollar << " is equal to " << convertCurrency(dollar) << " Euro" << endl;
        } 
        else if (choice == "4") 
        {
            cout << "Enter the amount of PKR: ";
            cin >> pkr;
            cout << "Rs " << pkr << " is equal to " << pkr * 0.0036 << " Dollar" << endl;  
        } 
        else if (choice == "5") 
        {
            cout << "Enter the amount of Dollar: ";
            cin >> dollar;
            cout << "Dollar " << dollar << " is equal to " << dollar * 142.00 << " Yen" << endl;
        } 
        else if (choice == "0") 
        {
            cout<<"\n\tGood Bye"<<endl;
            break;
        } 
        else 
        {
            cout << "\n\tInvalid choice" << endl;
        }
    }
    return 0;
}

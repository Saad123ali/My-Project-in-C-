#include <iostream>
#include <string>
#include <cstdlib> // For system("clear") to clear the screen
using namespace std;

int main() 
{
    cout << "\n\t-----Welcome To Login Page-----\n\t" << endl;

    int choice;
    string email, password, email1, password1;
    
    start:
    cout << "\tPlease Enter Your Choice "<<endl;
    cout << "\tPress 1: for Login " << endl;
    cout << "\tPress 2: for Sign Up" << endl;
    cout << "\tPress 3: for Exit" << endl;
    cout<< "==> "<<endl;
    
    cin >> choice;

    switch (choice) 
	{
        case 1:
            cout << "\tEnter your Email : ";
            cin >> email1;
            cout << "\tEnter your Password : ";
            cin >> password1;

            if (password1 == password && email1 == email) 
			{
                cout << "\n\tLogin Successfully" << endl;
            }
			 else 
			{
                cout << "\n\tPlease Enter Correct information ";
            }
            break;
        case 2:
            cout << "\tEnter your Email : ";
            cin >> email;
            cout << "\tEnter your Password : ";
            cin >> password;
            cout << "\n\tSign Up Successfully" << endl;
            goto start; // Go back to the start label for user to login
        case 3:
            cout << "\n\tExiting the program" << endl;
            return 0;
        default:
            cout << "\n\tInvalid choice! Please select a valid option." << endl;
    }

    system("cls"); // Clear the screen
    cout << "\n\t\t----SAAD ALI----\n\t" << endl;

    return 0;
}

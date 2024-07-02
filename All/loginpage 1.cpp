#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username = "myusername";
    string password = "mypassword";
    string signupEmail;
    string signupPassword;
    bool isLoggedIn = false;
    int loginAttempts = 3;

    int choice;

    cout << "Choose an option:" <<endl;
    cout << "1. Login" <<endl;
    cout << "2. Signup" <<endl;
    cout << "3. Exit" <<endl;
    cin >> choice;

    switch (choice) 
	{
        case 1:
            if (isLoggedIn) 
			{
                cout << "Already logged in." <<endl;
            } 
			else 
			{
                while (loginAttempts > 0) 
				{
                    string inputUsername;
                    string inputPassword;

                    cout << "Enter your email: ";
                    cin >> inputUsername;
                    cout << "Enter your password: ";
                    cin >> inputPassword;

                    if (inputUsername == username && inputPassword == password) 
					{
                        cout << "Login successful!" <<endl;
                        isLoggedIn = true;
                        break; // Exit the login loop on successful login
                    }
					 else
					{
                        cout << "Login failed. Invalid email or password." <<endl;
                        loginAttempts--;
                        if (loginAttempts > 0) 
						{
                            cout << "You have " << loginAttempts << " attempts left." <<endl;
                        }
						 else 
						{
                            cout << "No more login attempts. Account locked." <<endl;
                        }
                    }
                }
            }
            break;

        case 2:
            if (isLoggedIn) 
			{
                cout << "Already logged in. Please log out to sign up." <<endl;
            } else 
			{
                cout << "Enter your email for signup: ";
                cin >> signupEmail;
                cout << "Enter your password for signup: ";
                cin >> signupPassword;
                cout << "Signup successful!" <<endl;
            }
            break;

        case 3:
            cout << "Exiting the program." <<endl;
            break;

        default:
            cout << "Invalid choice. Please select a valid option." <<endl;
    }

    return 0;
}

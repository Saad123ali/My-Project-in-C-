#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    cout << "\n\t**********CALCULATOR**********\n" << endl;

    int choice;
    float a, b;

    cout << "Select the Option " << endl;
    cout << "1 : For Addition " << " + " << endl;
    cout << "2 : For Subtraction " << " - " << endl;
    cout << "3 : For Multiplication " << " * " << endl;
    cout << "4 : For Division " << " / " << endl;
    cout << "5 : For Modulus " << " % " << endl;
    cout << "6 : For Exit " << endl;
    cout << "\n===>";
    cin >> choice;

    if (choice >= 1 && choice <= 5) 
	{
        cout << "Enter the first value: ";
        cin >> a;
        cout << "Enter the second value: ";
        cin >> b;
    }

    switch (choice) 
	{
        case 1:
            cout << "The Addition of two values is " << "=" << a + b << endl;
            break;
        case 2:
            cout << "The Subtraction of two values is " << "=" << a - b << endl;
            break;
        case 3:
            cout << "The Multiplication of two values is " << "=" << a * b << endl;
            break;
        case 4:
            if (b != 0) 
			{
                cout << "The Division of two values is " << "=" << a / b << endl;
            }
			 else 
			{
                cout << "Division by zero is not allowed." << endl;
            }
            break;
        case 5:
            if (static_cast<int>(b) != 0) 
			{
                cout << "The Modulus of two values is " << "=" << static_cast<int>(a) % static_cast<int>(b) << endl;
            }
			 else 
			{
                cout << "Modulus by zero is not allowed." << endl;
            }
            break;
        case 6:
            cout << "\n\tEXIT THE PROGRAM" << endl;
            break;
        default:
            cout << "INVALID INPUT!" << endl;
    }

    cout << "\n\t----SAAD ALI----\n\t" << endl;

    return 0;
}


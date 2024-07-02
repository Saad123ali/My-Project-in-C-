// #include<iostream>
// using namespace std;

// template<typename T>
// T add(T a, T b) 
// {
//     return a + b;
// }

// template<typename T>
// T subtract(T a, T b) 
// {
//     return a - b;
// }

// template<typename T>
// T multiply(T a, T b) 
// {
//     return a * b;
// }

// template<typename T>
// T divide(T a, T b) 
// {
//     if (b == 0) 
//     {
//         cout << "Error: Division by zero!" << endl;
//         return static_cast<T>(0);
//     }
//     return a / b;
// }

// int main() 
// {
//     // Example usage with integers
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     cout << "Addition: " << add(num1, num2) << endl;
//     cout << "Subtraction: " << subtract(num1, num2) << endl;
//     cout << "Multiplication: " << multiply(num1, num2) << endl;
//     cout << "Division: " << divide(num1, num2) << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// template<typename T>
// T add(T a, T b) {
//     return a + b;
// }

// template<typename T>
// T subtract(T a, T b) {
//     return a - b;
// }

// template<typename T>
// T multiply(T a, T b) {
//     return a * b;
// }

// template<typename T>
// T divide(T a, T b) {
//     if (b == 0) {
//         cout << "Error: Division by zero!" << endl;
//         return static_cast<T>(0);
//     }
//     return a / b;
// }

// int main() 
// {
//     string choice;
//     cout << "Simple Calculator" << endl;
//     cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
//     cout << "Enter your choice (1-4): ";
//     cin >> choice;

//     // Example usage with integers
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     while (true)
//     {
//         if ( choice == "1")
//         {
//             cout << "Addition: " << add(num1, num2) << endl;
//         }
//         else if( choice == "2")
//         {   
//             cout << "Subtraction: " << subtract(num1, num2) << endl;
//         }
//         else if ( choice == "3")
//         {
//             cout << "Multiplication: " << multiply(num1, num2) << endl;
//         }
//         else if ( choice == "4")
//         {
//             cout << "Division: " << divide(num1, num2) << endl;
//         }
//         else if ( choice == "5")
//         {
//             cout<<"Thanks.."<<endl;
//             break;
//         }
//         else
//         {
//             cout << "Invalid choice!" << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

template<typename T>
T performOperation(T a, T b, char operation) 
{
    switch (operation) 
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0) 
            {
                cout << "Error: Division by zero!" << endl;
                return static_cast<T>(0);
            }
            return a / b;
        default:
            cout << "Invalid operation!" << endl;
            return static_cast<T>(0);
    }
}

int main() 
{
    char operation;
    cout << "Simple Calculator" << endl;
    cout << "Enter operation (+, -, *, /) or 'E' to exit: ";
    cin >> operation;

    // Example usage with integers
    int num1, num2;

    while (operation != 'E' || operation != 'e')  
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "Result: " << performOperation(num1, num2, operation) << endl;

        cout << "Enter operation (+, -, *, /) or 'E' to exit: ";
        cin >> operation;
    }

    cout << "Thanks for using the calculator!" << endl;

    return 0;
}

 #include <iostream>
using namespace std;

int main() {
    int number;
    int factorial = 1;

    // Input
    cout << "Input a number to find the factorial: ";
    cin >> number;

    // Calculate factorial
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        // Output
        cout << "The factorial of the given number is: " << factorial << endl;
    }

    return 0;
}


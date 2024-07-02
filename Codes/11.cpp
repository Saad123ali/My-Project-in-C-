// #include <iostream>

// using namespace std;  // This allows you to use elements from the std namespace without prefixing them with std::

// // Generic template for a function to swap two values
// template <typename T>
// void swapValues(T &a, T &b) {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// int main() 
// {
//     // Example with integers
//     int x = 5, y = 10;
//     cout << "Before swapping: x = " << x << ", y = " << y << endl;

//     // Using the template function to swap integers
//     swapValues(x, y);

//     cout << "After swapping: x = " << x << ", y = " << y << endl;

//     // Example with floating-point numbers
//     double a = 3.14, b = 6.28;
//     cout << "Before swapping: a = " << a << ", b = " << b << endl;

//     // Using the template function to swap doubles
//     swapValues(a, b);

//     cout << "After swapping: a = " << a << ", b = " << b << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// // Generic template for finding the maximum of two values
// template <typename T>
// T findMax(const T &a, const T &b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     // Example with integers
//     int x = 15, y = 8;
//     cout << "Maximum of " << x << " and " << y << " is: " << findMax(x, y) << endl;

//     // Example with floating-point numbers
//     double a = 3.5, b = 7.2;
//     cout << "Maximum of " << a << " and " << b << " is: " << findMax(a, b) << endl;

//     // Example with characters
//     char char1 = 'A', char2 = 'Z';
//     cout << "Maximum of " << char1 << " and " << char2 << " is: " << findMax(char1, char2) << endl;

//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

// Function template to concatenate two values of any type
template <typename T>
T concatenate(T a, T b) {
    return a + b;
}

int main() {
    // Using the template with strings
    string str1 = "Hello, ";
    string str2 = "world!";

    // Concatenating strings using the template function
    string result = concatenate(str1, str2);

    // Displaying the result
    cout << "Concatenated String: " << result << endl;

    return 0;
}

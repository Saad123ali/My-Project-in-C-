// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter the size of array : ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {
//         cout<<"Enter the value "<<i+1<<" : ";
//         cin>>array[i];
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     int n;
//     cout<<"\nEnter the value to found : ";
//     cin>>n;
//     int i,location=-1;
//     for(i=0;i<size;i++)
//     {
//         if(array[i]==n)
//         {
//             location=i;
//         }
//     }
//     if(location==-1)
//     {
//         cout<<"Value not found in this array ! "<<endl;
//     }
//     else
//     {
//         cout<<"Value are fonud in this index ["<<location+1<<"]"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int res = 1;
//     for(int i = 2;i<=n;i++)
//         res = res*i;
//     return res;
// }
// int main() {
//     int a = 5;
//     cout<<factorial(a)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int year;

//     cout << "Enter a year: ";
//     cin >> year;

//     if (year % 4 == 0 && year % 100 != 0) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() 
// {
//     int decimalNumber;
//     // Get decimal number from the user
//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;

//     if (decimalNumber < 0) 
//     {
//         cout << "Please enter a non-negative decimal number." << endl;
//         return 1;
//     }
//     // Display the binary representation
//     cout << "Binary representation: ";

//     if (decimalNumber == 0) 
//     {
//         cout << 0;
//     } 
//     else 
//     {
//         int binaryDigits[32];  // Assuming 32-bit integer
//         int index = 0;
//         // Convert decimal to binary
//         while (decimalNumber > 0) 
//         {
//             binaryDigits[index++] = decimalNumber % 2;
//             decimalNumber /= 2;
//         }
//         // Display binary digits in reverse order
//         for (int i = index - 1; i >= 0; --i) 
//         {
//             cout << binaryDigits[i];
//         }
//     }

//     cout << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;

//     if (year % 4 == 0)
//     {
//         cout << year << " is a leap year." << endl;
//     }
//     else
//     {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// void Year(int year)
// {
//     if (year % 4 == 0)
//     {
//         cout<<year << " is a leap year." <<endl;
//     }
//     else
//     {
//         cout<<year << " is not a leap year." <<endl;
//     }
// }
// int main()
// {
//     int year;
//     cout<<"Enter the year you want to check: ";
//     cin>>year;
//     Year(year);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int n;

//     // Get the number of rows for the Fibonacci Triangle from the user
//     cout << "Enter the number of rows for the Fibonacci Triangle: ";
//     cin >> n;

//     // Initialize the Fibonacci sequence
//     int a = 0, b = 1, c;

//     // Print Fibonacci Triangle
//     for (int i = 1; i <= n; i++) {
//         a = 0;
//         b = 1;
//         for (int j = 1; j <= i; j++) {
//             cout << a << " ";
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int number;

//     // Get the number for which factorial is to be calculated
//     cout << "Enter a non-negative integer: ";
//     cin >> number;

//     if (number < 0) {
//         cout << "Please enter a non-negative integer." << endl;
//         return 1;
//     }

//     // Calculate the factorial
//     int factorial = 1;
//     for (int i = 1; i <= number; ++i) {
//         factorial *= i;
//     }

//     // Display the result
//     cout << "Factorial of " << number << " is: " << factorial << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;

// // Function to calculate factorial
// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;  // Base case: 0! and 1! are both 1
//     } else {
//         return n * factorial(n - 1);  // Recursive case
//     }
// }

// int main() {
//     int number;

//     // Get the number for which factorial is to be calculated
//     cout << "Enter a non-negative integer: ";
//     cin >> number;

//     if (number < 0) {
//         cout << "Please enter a non-negative integer." << endl;
//         return 1;
//     }

//     // Calculate and display the factorial
//     cout << "Factorial of " << number << " is: " << factorial(number) << endl;

//     return 0;
// }


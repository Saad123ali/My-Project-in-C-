// #include <iostream>
// #include <cstring>

// int main() {
//     char word[100]; // Adjust the size based on your needs

//     std::cout << "Enter a word: ";
//     std::cin >> word;

//     int length = strlen(word);

//     for (int i = 0; i < length / 2; i++) {
//         char temp = word[i];
//         word[i] = word[length - i - 1];
//         word[length - i - 1] = temp;
//     }

//     std::cout << "Reversed word: " << word << std::endl;

//     return 0;
// }
// #include <iostream>
// #include <cstring>

// using namespace std;

// int main() {
//     const int maxStringLength = 100; // Adjust the size based on your needs
//     char line[maxStringLength];

//     cout << "Enter a line of characters: ";
//     cin.ignore(); // Ignore any previous newline character
//     cin.getline(line, maxStringLength);

//     int length = strlen(line);

//     for (int i = 0; i < length / 2; i++) {
//         char temp = line[i];
//         line[i] = line[length - i - 1];
//         line[length - i - 1] = temp;
//     }

//     cout << "Reversed line: " << line << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// bool isPalindrome(const char arr[]) {
//     int length = strlen(arr);

//     for (int i = 0; i < length / 2; i++) {
//         if (arr[i] != arr[length - i - 1]) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     const int maxStringLength = 100; // Adjust the size based on your needs
//     char line[maxStringLength];

//     cout << "Enter a string to check if it's a palindrome: ";
//     cin.getline(line, maxStringLength);

//     if (isPalindrome(line)) {
//         cout << "The entered string is a palindrome." << endl;
//     } else {
//         cout << "The entered string is not a palindrome." << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// const int maxSize = 100; // Adjust the size based on your needs


// // Function to calculate the minimum value of the diagonal in a square matrix
// int minDiagonalValue(int matrix[][maxSize], int size) {
//     int minValue = matrix[0][0]; // Initialize with the value at (0,0)

//     for (int i = 1; i < size; ++i) {
//         if (matrix[i][i] < minValue) {
//             minValue = matrix[i][i];
//         }
//     }

//     return minValue;
// }

// int main() {
//     int size;

//     cout << "Enter the size of the square matrix: ";
//     cin >> size;

//     if (size <= 0 || size > maxSize) {
//         cout << "Invalid size!" << endl;
//         return 1; // Indicate an error
//     }

//     int matrix[maxSize][maxSize];

//     cout << "Enter the elements of the square matrix:" << endl;
//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             cout << "Enter element at position " << i + 1 << ", " << j + 1 << ": ";
//             cin >> matrix[i][j];
//         }
//     }

//     // Call the function to calculate the minimum value of the diagonal
//     int minDiagonal = minDiagonalValue(matrix, size);

//     cout << "Minimum value of the diagonal: " << minDiagonal << endl;

//     return 0;
// }
// Ask the user for a value from 1-10 and cheese convert in into words
// #include<iostream>
// using namespace std;
// int main()
// {
//     string num;
//     cout<<"Enter the number to convert in to words (1 -10): ";
//     cin>>num;

//     if(num == "0")
//     {
//         cout<<"The number"<<num<<" into digit is Zero"<<endl;
//     }
//     else if (num == "1")
//     {
//         cout<<"The number"<<num<<" into digit is One"<<endl;
//     }
//     else if (num == "2")
//     {
//         cout<<"The number"<<num<<" into digit is Two"<<endl;
//     }
//     else if (num == "3")
//     {
//         cout<<"The number"<<num<<" into digit is Three"<<endl;
//     }
//     else if (num == "4")
//     {
//         cout<<"The number"<<num<<" into digit is Four"<<endl;
//     }
//     else if (num == "5")
//     {
//         cout<<"The number"<<num<<" into digit is Five"<<endl;
//     }
//     else if (num =="6")
//     {
//         cout<<"The number"<<num<<" into digit is Six"<<endl;
//     }
//     else if(num == "7")
//     {
//         cout<<"The number"<<num<<" into digit is Seven"<<endl;
//     }
//     else if ( num == "8")
//     {
//         cout<<"The number"<<num<<" into digit is Eigth"<<endl;
//     }
//     else if ( num == "9")
//     {
//         cout<<"The number"<<num<<" into digit is Nine"<<endl;
//     }
//     else if ( num == "10")
//     {
//         cout<<"The number"<<num<<" into digit is Ten"<<endl;
//     }
//     else 
//     {
//         cout<<"Invalid number"<<endl;
//     }
//     return 0;
// }
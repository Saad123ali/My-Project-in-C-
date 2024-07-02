// #include <iostream>
// using namespace std;

// void display(int num) 
// {
//     cout << "Integer: " << num << endl;
// }
// void display(double num) 
// {
//     cout << "Double: " << num << endl;
// }
// void display(string message) 
// {
//     cout << "Message: " << message << endl;
// }
// void display(int num, string message) 
// {
//     cout << "Number and Message: " << num << " " << message << endl;
// }
// void display() 
// {
//     cout << "No parameters" << endl;
// }
// void display(int num1, int num2) 
// {
//     cout << "Two integers: " << num1 << " " << num2 << endl;
// }
// void display(double num1, double num2)
// {
//     cout << "Two double numbers: " << num1 << " " << num2 << endl;
// }
// void display(double num1, int num2, float num3)
// {
//     cout << "Mixed types: " << num1 << " " << num2 << " " << num3 << endl;
// }

// int main() 
// {
//     display(12);
//     display(3.2);
//     display("Saad");
//     display(7, "Ali");
//     display();
//     display(2, 4);
//     display(3.4, 56.4);
//     display(346622.5, 3, 44.5);  

//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Function to check if a character is a vowel
// void isVowel(char ch) 
// {
//     ch = tolower(ch);  // Convert to lowercase for case-insensitive check
//     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
// }

// // Function to check if a character is a consonant
// void isConsonant(char ch) 
// {
//     return isalpha(ch) && !isVowel(ch);
// }

// // Function to check if a character is a digit
// void isDigit(char ch) 
// {
//     return isdigit(ch);
// }

// // Function to convert a character to uppercase
// char toUpperCase(char ch) 
// {
//     return toupper(ch);
// }

// // Function to convert a character to lowercase
// char toLowerCase(char ch) 
// {
//     return tolower(ch);
// }

// int main() 
// {
//     string inputChar;
//     // Get a character from the user
//     cout << "Enter a character: ";
//     getline(cin, inputChar);

//     // Check and display if it's a vowel or consonant
//     if (isVowel(inputChar)) 
//     {
//         cout << inputChar << " is a vowel." << endl;
//     } else if (isConsonant(inputChar)) 
//     {
//         cout << inputChar << " is a consonant." << endl;
//     } 
//     else 
//     {
//         cout << inputChar << " is not a letter." << endl;
//     }

//     // Check and display if it's a digit
//     if (isDigit(inputChar)) 
//     {
//         cout << inputChar << " is a digit." << endl;
//     } 
//     else 
//     {
//         cout << inputChar << " is not a digit." << endl;
//     }

//     // Convert and display in uppercase and lowercase
//     cout << "Uppercase: " << toUpperCase(inputChar) << endl;
//     cout << "Lowercase: " << toLowerCase(inputChar) << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// void display(int num)
// {
//     cout << "Integer: " << num << endl;
// }
// void display(double num)
// {
//     cout << "Double: " << num << endl;
// }
// void display(string message)
// {
//     cout << "Message: " << message << endl;
// }
// void display(int num, string message)
// {
//     cout << "Number and Message: " << num << " " << message << endl;
// }
// void display()
// {
//     cout << "No parameters" << endl;
// }
// void display(int num1, int num2)
// {
//     cout << "Two integers: " << num1 << " " << num2 << endl;
// }
// void display(double num1, double num2)
// {
//     cout << "Two  double integers: " << num1 << " " << num2 << endl;
// }
// void display(double num1, int num2, float num3)
// {
//     cout << "Mixed types: " << num1 << " " << num2 << " " << num3 << endl;
// }
// void display(char s)
// {
//     cout<< "Character "<<s<<endl;
// }
// int main()
// {
//     display(12);
//     display(3.2);
//     display("Saad");
//     display(7, "Ali");
//     display();
//     display(2, 4);
//     display(3.4, 56.4);
//     display(346622.5, 3, 44.5);
//     display('S');
//     return 0;
// }
// #include <iostream>
// #include <cctype>
// #include <cstring>
// using namespace std;

// void isVowel(char ch) 
// {
//     ch = tolower(ch);
//     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
// }

// void isConsonant(char ch) 
// {
//     return isalpha(ch) && !isVowel(ch);
// }

// void isDigit(char ch) 
// {
//     return isdigit(ch);
// }

// void toUpperCase(char ch) 
// {
//     return toupper(ch);
// }

// void toLowerCase(char ch) 
// {
//     return tolower(ch);
// }

// int main() 
// {
//     const int minLength = 20;
//     char inputLine[minLength];

//     // Keep prompting until a valid input is provided
//     do 
//     {
//         cout << "Enter a line of at least " << minLength << " characters: ";
//         cin.getline(inputLine, 20);
//     } while (strlen(inputLine) < minLength);

//     for (int i = 0; i < strlen(inputLine); ++i) 
//     {
//         char currentChar = inputLine[i];

//         if (isVowel(currentChar)) 
//         {
//             cout << currentChar << " is a vowel." << endl;
//         } 
//         else if (isConsonant(currentChar)) 
//         {
//             cout << currentChar << " is a consonant." << endl;
//         } 
//         else if (isDigit(currentChar)) 
//         {
//             cout << currentChar << " is a digit." << endl;
//         } 
//         else 
//         {
//             cout << currentChar << " is not a letter or digit." << endl;
//         }

//         cout << "Uppercase: " << toUpperCase(currentChar) << endl;
//         cout << "Lowercase: " << toLowerCase(currentChar) << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void isVowel(char ch) 
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        cout << ch << " is a vowel." << endl;
    }
}

void isConsonant(char ch) 
{
    if (isalpha(ch) && !isspace(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) 
    {
        cout << ch << " is a consonant." << endl;
    }
}

void isDigit(char ch) 
{
    if (isdigit(ch)) 
    {
        cout << ch << " is a digit." << endl;
    }
}

void toUpperCase(char ch) 
{
    cout << "Uppercase: " << static_cast<char>(toupper(ch)) << endl;
}

void toLowerCase(char ch) 
{
    cout << "Lowercase: " << static_cast<char>(tolower(ch)) << endl;
}

int main() 
{
    const int minLength = 20;
    char inputLine[minLength];

    // Keep prompting until a valid input is provided
    do 
    {
        cout << "Enter a line of at least " << minLength << " characters: ";
        cin.getline(inputLine, minLength);
    } while (strlen(inputLine) < minLength);

    for (int i = 0; i < strlen(inputLine); ++i) 
    {
        char currentChar = inputLine[i];

        isVowel(currentChar);
        isConsonant(currentChar);
        isDigit(currentChar);

        toUpperCase(currentChar);
        toLowerCase(currentChar);
    }

    return 0;
}


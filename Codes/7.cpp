// #include<iostream>
// using namespace std;

// int main() {
//     string str;
//     int minlength = 20;
//     string substring;

//     do {
//         cout << "Enter a string (minimum 20 characters): ";
//         getline(cin, str);

//         if (str.length() > minlength) {
//             cout << "String length must be at least 20 characters. Please try again." << endl;
//         }
//     } while (str.length() > minlength);

//     cout << "\nString Accepted\n";

//     substring = str.substr(6, 6);
//     cout << "The Substring starting from index 6 and of size 6 characters is: " << substring << endl;

//     str.replace(10, 2, "****");
//     cout << "The input string after replacing the value '****' starting from position 10, up to 2 characters is: " << str << endl;

//     int index = str.find("****");
//     if (index != -1) {
//         cout << "The location of '****' in the input string is " << index << endl;
//     } else {
//         cout << "The value '****' is not present in the input string." << endl;
//     }

//     cout << "The length of the string is: " << str.length() << endl;

//     int eraseFromIndex = 11; 
//     str.erase(eraseFromIndex);
//     cout << "String after erasing characters from position " << eraseFromIndex << " onwards: " << str << endl;

//     return 0;
// }
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int maxlength = 20;
    char str[maxlength + 1]; // +1 for null terminator
    char substring[7]; // +1 for null terminator
    int minlength = 20;

    do {
        cout << "Enter a string (minimum 20 characters): ";
        cin.getline(str, maxlength + 1); // Read up to maxlength characters

        // Check for string length after input
        if (strlen(str) < minlength) 
        {
            cout << "String length must be at least 20 characters. Please try again." << endl;
        }
    } while (strlen(str) < minlength);  // Continue loop if length is too short

    cout << "\nString Accepted\n";

    // Copy substring with null-termination
    strncpy(substring, str + 6, 6);
    substring[6] = '\0';
    cout << "The Substring starting from index 6 and of size 6 characters is: " << substring << endl;

    // Replace characters using strncpy to avoid overflow
    strncpy(str + 10, "****", 3);  // Copy 3 characters to include null terminator
    cout << "The input string after replacing the value '****' starting from position 10, up to 2 characters is: " << str << endl;

    // Find substring using strstr
    char* ptr = strstr(str, "****");
    if (ptr != nullptr) {
        int index = ptr - str;
        cout << "The location of '****' in the input string is " << index << endl;
    } else {
        cout << "The value '****' is not present in the input string." << endl;
    }

    cout << "The length of the string is: " << strlen(str) << endl;

    // Erase characters correctly using strcpy
    int eraseFromIndex = 11;
    strcpy(str + eraseFromIndex, "");
    cout << "String after erasing characters from position " << eraseFromIndex << " onwards: " << str << endl;

    return 0;
}

     

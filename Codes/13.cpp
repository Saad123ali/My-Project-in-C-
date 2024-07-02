// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//   string cnic;
//   bool valid;

//   while (true) {  // Loop indefinitely until a valid CNIC is entered
//     cout << "Enter your CNIC number (only integers): ";
//     getline(cin, cnic);

//     valid = true;
//     for (int i = 0; i < cnic.length(); i++) {
//       char c = cnic[i];
//       if (!isdigit(c)) {
//         valid = false;
//         break;
//       }
//     }

//     if (valid && cnic.length() == 13) {
//       cout << "Valid CNIC" << endl;
//       break;  // Exit the loop if a valid CNIC is entered
//     } else {
//       cout << "Invalid CNIC. Please try again." << endl;
//     }
//   }

//   return 0;
// }
#include <iostream>
#include <string>

using namespace std;

int main() {
    string cardNumber;
    bool valid;

    while (true) {  // Loop indefinitely until a valid ATM card number is entered
        cout << "Enter your ATM card number (only integers): ";
        getline(cin, cardNumber);

        valid = true;
        for (int i = 0; i < cardNumber.length(); i++) {
            char c = cardNumber[i];
            if (!isdigit(c)) {
                valid = false;
                break;
            }
        }

        if (valid && cardNumber.length() == 16) {
            cout << "Valid ATM card number" << endl;
            break;  // Exit the loop if a valid ATM card number is entered
        } else {
            cout << "Invalid ATM card number. Please try again." << endl;
        }
    }

    return 0;
}

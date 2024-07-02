#include <iostream>
#include <climits>

using namespace std;

int main() 
{
   cout << "Checking integer limits on this system:\n";

   // Display limits for various integer types:
   cout << "int:\n";
   cout << "  Minimum: " << INT_MIN << endl;
   cout << "  Maximum: " << INT_MAX << endl;

   cout << "unsigned int:\n";
   cout << "  Maximum: " << UINT_MAX << endl;

   cout << "short int:\n";
   cout << "  Minimum: " << SHRT_MIN << endl;
   cout << "  Maximum: " << SHRT_MAX << endl;

   cout << "unsigned short int:\n";
   cout << "  Maximum: " << USHRT_MAX << endl;

   cout << "long int:\n";
   cout << "  Minimum: " << LONG_MIN << endl;
   cout << "  Maximum: " << LONG_MAX << endl;

   cout << "unsigned long int:\n";
   cout << "  Maximum: " << ULONG_MAX << endl;

   cout << "long long int:\n";
   cout << "  Minimum: " << LLONG_MIN << endl;
   cout << "  Maximum: " << LLONG_MAX << endl;

   cout << "unsigned long long int:\n";
   cout << "  Maximum: " << ULLONG_MAX << endl;

   return 0;
}
#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "Checking char limits on this system:\n";

    cout << "char:\n";
    cout << "  Minimum: " << CHAR_MIN << endl;
    cout << "  Maximum: " << CHAR_MAX << endl;

    // Additional information about char:
    cout << "Number of bits in a char: " << CHAR_BIT << endl;
    cout << "Maximum number of bytes in a multibyte character: " << MB_LEN_MAX << endl;

    return 0;
}

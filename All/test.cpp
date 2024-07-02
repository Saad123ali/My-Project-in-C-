#include <iostream>
#include <string>

using namespace std;

int main() {
  // Declare a string variable "st" and ask the user to enter a string value.
  string st;
  cout << "Enter a string: ";
  cin >> st;

  // Check if the input string is of size 20 characters (minimum).
  if (st.length() < 20) {
    cout << "The input string must be of size 20 characters (minimum)." << endl;
    return 1;
  }

  // Find and print the length of the string.
  int length = st.length();
  cout << "The length of the string is: " << length << endl;

  // Find and print substring starting from the location/index 6, and of size 6 characters.
  string substring = st.substr(6, 6);
  cout << "The substring starting from index 6 and of size 6 characters is: " << substring << endl;

  // Replace in the input string, value "****" starting from position 10, up to 2 characters.
  st.replace(10, 2, "****");
  cout << "The input string after replacing the value '****' starting from position 10, up to 2 characters is: " << st << endl;

  // Find and print the location of "****" in the input string.
  int index = st.find("****");
  if (index != -1) {
    cout << "The location of '****' in the input string is: " << index << endl;
  } else {
    cout << "The value '****' is not present in the input string." << endl;
  }

  // Erase all the characters starting from '*' onwards in the input string.
  st.erase(find(st.begin(), st.end(), '*'), st.end());
  cout << "The input string after erasing all the characters starting from '*' onwards is: " << st << endl;

  return 0;
}

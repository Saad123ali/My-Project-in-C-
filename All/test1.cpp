#include <iostream>

using namespace std;

int main() {
  int matrix[4][4];

  // Read the matrix from the user.
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int value;
      cout << "Enter element a" << i + 1 << j + 1 << ": ";
      cin >> value;

      // Validate the input value.
      while (value > 100) {
        cout << "Invalid input. The value must be less than or equal to 100." << endl;
        cout << "Enter element a" << i + 1 << j + 1 << ": ";
        cin >> value;
      }

      matrix[i][j] = value;
    }
  }

  // Find the largest number in the matrix and its location.
  int largestNumber = matrix[0][0];
  int largestNumberRow = 0;
  int largestNumberColumn = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (matrix[i][j] > largestNumber) {
        largestNumber = matrix[i][j];
        largestNumberRow = i;
        largestNumberColumn = j;
      }
    }
  }

  // Print the largest number and its location.
  cout << "The largest number in the matrix is: " << largestNumber << endl;
  cout << "The location of the largest number is: row = " << largestNumberRow << ", column = " << largestNumberColumn << endl;

  return 0;
}

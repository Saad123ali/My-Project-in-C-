// #include <iostream>

// using namespace std;

// int main() {
//     // Define the size of the matrix
//     const int rows = 4;
//     const int cols = 4;

//     // Create a 2D array and initialize it with diagonal elements
//     int matrix[rows][cols] = {0};

//     // Determine the smaller of rows and cols
//     int minSize = (rows < cols) ? rows : cols;

//     for (int i = 0; i < minSize; ++i) {
//         matrix[i][i] = 1;  // Setting diagonal elements to 1
//     }

//     // Display the matrix using the traditional for loop
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

int main() {
    // Get the number of rows and columns from the user
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create a 2D array and initialize it with diagonal elements
    int matrix[rows][cols] = {0};

    // Determine the smaller of rows and cols
    int minSize = (rows < cols) ? rows : cols;

    for (int i = 0; i < minSize; ++i) {
        matrix[i][i] = 1;  // Setting diagonal elements to 1
    }

    // Display the matrix using the traditional for loop
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

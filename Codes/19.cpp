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
    int matrix[rows][cols];

    // Initialize the matrix with diagonal elements
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (i == j ? 1 : 0);
        }
    }

    // Display the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

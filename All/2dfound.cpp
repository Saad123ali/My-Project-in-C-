#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int matrix[rows][cols];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "Enter element at position [" << i << "] [" << j << "] : ";
            cin >> matrix[i][j];
        }
    }

    cout << "The entered matrix is:\n";
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    int target;
    cout << "Enter the number to find in the matrix: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            if (matrix[i][j] == target) 
            {
                cout << "Number " << target << " found at position [" << i << "] [" << j << "]\n";
                found = true;
            }
        }
    }

    if (!found) 
    {
        cout << "Number " << target << " not found in the matrix.\n";
    }

    return 0;
}

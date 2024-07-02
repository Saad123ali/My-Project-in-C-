#include <iostream>
using namespace std;

 

int main() 
{
    int rows;
    cout<<"Enter the size of rows : ";
    cin>>rows;
    int columns;
    cout<<"Enter the size of columns : ";
    cin>>columns;
    int multiplicationTable[rows][columns];

    // Initialize the 2D array with multiplication table values
    for (int i = 1; i <= rows; ++i) 
    {
        for (int j = 1; j <= columns; ++j) 
        {
            multiplicationTable[i-1][j-1] = i * j;
        }
    }

    // Display the multiplication table
    cout << "Multiplication Table:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            cout << multiplicationTable[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

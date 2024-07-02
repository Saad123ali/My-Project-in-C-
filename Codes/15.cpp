// #include <iostream>
// using namespace std;

// int main() 
// {
//     int rows, cols;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;
//     int matrix[rows][cols];

//     cout << "Enter the elements of the matrix:\n";
//     for (int i = 0; i < rows; ++i) 
//     {
//         for (int j = 0; j < cols; ++j) 
//         {
//             cout << "Enter element at position [" << i << "] [" << j << "] : ";
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "The entered matrix is:\n";
//     for (int i = 0; i < rows; ++i) 
//     {
//         for (int j = 0; j < cols; ++j) 
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     int target;
//     cout << "Enter the number to find in the matrix: ";
//     cin >> target;

//     bool found = false;
//     for (int i = 0; i < rows; ++i) 
//     {
//         for (int j = 0; j < cols; ++j) 
//         {
//             if (matrix[i][j] == target) 
//             {
//                 cout << "Number " << target << " found at position [" << i << "] [" << j << "]\n";
//                 found = true;
//             }
//         }
//     }

//     if (!found) 
//     {
//         cout << "Number " << target << " not found in the matrix.\n";
//     }

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     const int rows = 3;
//     const int cols = 3;

//     // Initialize a 2D array
//     int arr[rows][cols];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout<<"Enter the element at "<<i<<" "<<j<<" ";
//             cin >> arr[i][j];
//         }
//     }
     

//     int target;
//     cout << "Enter the target value: ";
//     cin >> target;

//     int rowIndex = -1, colIndex = -1;

//     // Search for the target value in the 2D array
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             if (arr[i][j] == target) {
//                 rowIndex = i;
//                 colIndex = j;
//                 break;  // Exit the loop if the target is found
//             }
//         }
//         if (rowIndex != -1) {
//             break;  // Exit the outer loop if the target is found
//         }
//     }

//     // Print the result
//     if (rowIndex != -1 && colIndex != -1) {
//         cout << "Target found at index (" << rowIndex << ", " << colIndex << ")." << endl;
//     } else {
//         cout << "Target not found in the array." << endl;
//     }

//     return 0;
// }

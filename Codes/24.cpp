// #include<iostream>
// using namespace std;
// int main()
// {
//     int r,c;
//     cout<<"Enter the number of rows : ";
//     cin>>r;
//     cout<<"Enter the number of cols : ";
//     cin>>c;
//     int matrix[r][c];
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cout<<"Enter the matix no ["<<i<<"] ["<<j<<"] : ";
//             cin>>matrix[i][j];   
//         }
//     }
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cout<<matrix[i][j]<<" ";  
//         }
//         cout<<endl;
//     }
//     cout<<"\nThe transpose of the matrix is "<<endl;
//     for(int i=0;i<c;i++)
//     {
//         for(int j=0;j<r;j++)
//         {
//             cout<<matrix[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int day,month,total;
//     int day_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//     cout<<"Enter the month nmuber : ";
//     cin>>month;
//     cout<<"Enter the day number : ";
//     cin>>day;
//     total=day;
//     for(int i=0;i<month-1;i++)
//     {
//         total+=day_per_month[i];
//         cout<<"The nmuber of days in this year till date = "<<total<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

 

// int main() 
// {
//     int rows;
//     cout<<"Enter the size of rows : ";
//     cin>>rows;
//     int columns;
//     cout<<"Enter the size of columns : ";
//     cin>>columns;
//     int multiplicationTable[rows][columns];

//     // Initialize the 2D array with multiplication table values
//     for (int i = 1; i <= rows; ++i) 
//     {
//         for (int j = 1; j <= columns; ++j) 
//         {
//             multiplicationTable[i-1][j-1] = i * j;
//         }
//     }

//     // Display the multiplication table
//     cout << "Multiplication Table:" << endl;
//     for (int i = 0; i < rows; ++i) 
//     {
//         for (int j = 0; j < columns; ++j) 
//         {
//             cout << multiplicationTable[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include<iostream>
// #include<cctype>

// using namespace std;

// int main()
// {
//     char again;

//     do
//     {
//         int num, range, start;

//         cout << "Enter the number to perform its table: ";
//         cin >> num;

//         cout << "Enter the start point of the table: ";
//         cin >> start;

//         cout << "Enter the number to end the table: ";
//         cin >> range;

//         // Using for loop
//         cout << "Using for loop:" << endl;
//         for (int i = start; i <= range; i++)
//         {
//             cout << num << " * " << i << " = " << i * num << endl;
//         }

//         // Using while loop
//         cout << "Using while loop:" << endl;
//         int i = start;
//         while (i <= range)
//         {
//             cout << num << " * " << i << " = " << i * num << endl;
//             i++;
//         }

//         cout << "Do you want to perform another table?" << endl;
//         cout << "(Yes = y and No = n): ";
//         cin >> again;

//     } while (again == 'y' || again == 'Y');

//     return 0;
// }
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     if (size < 2) {
//         cout << "Array should have at least two elements." << endl;
//         return 1; // Indicating an error
//     }

//     int arr[size];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     for (int i = 0; i < size; i++) 
//     {
//         if (arr[i] > largest) 
//         {
//             secondLargest = largest;
//             largest = arr[i];
//         } 
//         else if (arr[i] > secondLargest && arr[i] != largest) 
//         {
//             secondLargest = arr[i];
//         }
//     }

//     if (secondLargest == INT_MIN) 
//     {
//         cout << "There is no valid second-largest element in the array." << endl;
//     } 
//     else 
//     {
//         cout << "The second-largest element in the array is: " << secondLargest << endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     if (size < 3) {
//         cout << "Array should have at least three elements." << endl;
//         return 1; // Indicating an error
//     }

//     int arr[size];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;
//     int thirdLargest = INT_MIN;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] > largest) {
//             thirdLargest = secondLargest;
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             thirdLargest = secondLargest;
//             secondLargest = arr[i];
//         } else if (arr[i] > thirdLargest && arr[i] != secondLargest && arr[i] != largest) {
//             thirdLargest = arr[i];
//         }
//     }

//     if (thirdLargest == INT_MIN) {
//         cout << "There is no valid third-largest element in the array." << endl;
//     } else {
//         cout << "The third-last number in the array is: " << thirdLargest << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   int size;
//   cout << "\nEnter the size of integers : ";
//   cin >> size;
//   int prime[size];
//   for (int i = 0; i < size; i++)
//   {
//     cout << "Enter the value " << i + 1 << " : ";
//     cin >> prime[i];
//   }
//   int c = 0;
//   cout << "\nThe prime Numbers : ";
//   for (int i = 0; i < size; i++)
//   {
//     c = 0;
//     for (int j = 1; j <= prime[i]; j++)
//     {
//       if (prime[i] % j == 0)
//       {
//         c++;
//       }
//     }
//     if (c == 2)
//     {
//       cout << prime[i] << " ";
//     }
//   }
//   cout << "\nNon-prime Numbers : ";
//   for (int i = 0; i < size; i++)
//   {
//     int c = 0;
//     for (int j = 1; j <= prime[i]; j++)
//     {
//       if (prime[i] % j == 0)
//       {
//         c++;
//       }
//     }
//     if (c != 2)
//     {
//       cout << prime[i] << " ";
//     }
//   }
//   return 0;
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

// //  #include<iostream>
// // #include<cmath>

// // using namespace std;

// // int checkSequence(int arr[], int size) 
// // {
// //     // Check for an Arithmetic sequence
// //     int diff = arr[1] - arr[0];
// //     bool isArithmetic = true;
// //     for (int i = 2; i < size; i++) 
// //     {
// //         if (arr[i] - arr[i - 1] != diff) 
// //         {
// //             isArithmetic = false;
// //             break;
// //         }
// //     }

// //     // Check for a Geometric sequence
// //     int ratio = arr[1] / arr[0];
// //     bool isGeometric = true;
// //     for (int i = 2; i < size; i++) 
// //     {
// //         if (arr[i] / arr[i - 1] != ratio) 
// //         {
// //             isGeometric = false;
// //             break;
// //         }
// //     }

// //     // Return the result
// //     if (isArithmetic)
// //         return 1; // Arithmetic sequence
// //     else if (isGeometric)
// //         return 2; // Geometric sequence
// //     else
// //         return -1; // Neither Arithmetic nor Geometric
// // }

// // int main() 
// // {
// //     // Get user input for array size
// //     int size;
// //     cout << "Enter the size of the array: ";
// //     cin >> size;

// //     // Get user input for array elements
// //     int arr[size];
// //     cout << "Enter the elements of the array: ";
// //     for (int i = 0; i < size; i++) 
// //     {
// //         cin >> arr[i];
// //     }

// //     // Check the sequence
// //     int result = checkSequence(arr, size);

// //     // Display the result
// //     if (result == 1)
// //         cout << "The sequence is Arithmetic." << endl;
// //     else if (result == 2)
// //         cout << "The sequence is Geometric." << endl;
// //     else
// //         cout << "The sequence is neither Arithmetic nor Geometric." << endl;

// //     return 0;
// // }
// #include<iostream>
// #include<cmath>

// using namespace std;

// int checkSequence(int arr[], int size) 
// {
//     // Check for an Arithmetic sequence
//     int diff = arr[1] - arr[0];
//     bool isArithmetic = true;
//     for (int i = 2; i < size; i++) 
//     {
//         if (arr[i] - arr[i - 1] != diff) 
//         {
//             isArithmetic = false;
//             break;
//         }
//     }

//     // Check for a Geometric sequence
//     int ratio = arr[1] / arr[0];
//     bool isGeometric = true;
//     for (int i = 2; i < size; i++) 
//     {
//         if (arr[i] / arr[i - 1] != ratio) 
//         {
//             isGeometric = false;
//             break;
//         }
//     }

//     // Return the result
//     if (isArithmetic)
//         return 1; // Arithmetic sequence
//     else if (isGeometric)
//         return 2; // Geometric sequence
//     else
//         return -1; // Neither Arithmetic nor Geometric
// }

// int main() 
// {
//     // Example arrays
//     int arr1[] = {2, 4, 6, 8, 10};
//     int arr2[] = {3, 6, 12, 24, 48};
//     int arr3[] = {134 , 56, 34, 35, 76};

//     // Check the sequences
//     int result1 = checkSequence(arr1, 5);
//     int result2 = checkSequence(arr2, 5);
//     int result3 = checkSequence(arr3, 5);

//     // Display the results
//     cout << "Sequence 1: ";
//     if (result1 == 1)
//         cout << "Arithmetic." << endl;
//     else if (result1 == 2)
//         cout << "Geometric." << endl;
//     else
//         cout << "Neither Arithmetic nor Geometric." << endl;

//     cout << "Sequence 2: ";
//     if (result2 == 1)
//         cout << "Arithmetic." << endl;
//     else if (result2 == 2)
//         cout << "Geometric." << endl;
//     else
//         cout << "Neither Arithmetic nor Geometric." << endl;

//     cout << "Sequence 3: ";
//     if (result3 == 1)
//         cout << "Arithmetic." << endl;
//     else if (result3 == 2)
//         cout << "Geometric." << endl;
//     else
//         cout << "Neither Arithmetic nor Geometric." << endl;

//     return 0;
// }

#include <iostream>
#include<ctime>
int main() {
    
    std::cout << std::rand() << std::endl;
    

    return 0;
}

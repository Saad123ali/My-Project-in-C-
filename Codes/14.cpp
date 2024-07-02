// #include <iostream>
// using namespace std;

// // Recursive function to calculate the sum of array elements
// int arraySum(int arr[], int size) 
// {
//     // Base case: if the array has only one element, return that element
//     if (size == 0) 
//     {
//         return arr[0];
//     } 
//     else 
//     {
//         // Recursive case: sum the current element with the sum of the rest of the array
//         return arr[size - 1] + arraySum(arr, size - 1);
//     }
// }

// int main() 
// {
//     int size;

//     // Get the size of the array from the user
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     // Create an array of the specified size
//     int arr[size];

//     // Get array elements from the user
//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < size; i++) 
//     {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     // Calculate the sum using the recursive function
//     int sum = arraySum(arr, size);

//     // Display the result
//     cout << "The sum of the elements in the array is: " << sum << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// // Recursive function to calculate the sum of array elements
// int arraySum(int *arr, int size) {
//     // Base case: if the array has only one element, return that element
//     if (size == 0) {
//         return *arr;
//     } else {
//         // Recursive case: sum the current element with the sum of the rest of the array
//         return *arr + arraySum(arr + 1, size - 1);
//     }
// }

// int main() {
//     int size;

//     // Get the size of the array from the user
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     // Create an array of the specified size
//     int arr[size];

//     // Get array elements from the user
//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < size; i++) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     // Calculate the sum using the recursive function
//     int sum = arraySum(arr, size);

//     // Display the result
//     cout << "The sum of the elements in the array is: " << sum << endl;

//     return 0;
// }
#include <iostream>

using namespace std;

// Recursive function to calculate the sum of array elements
int arraySum(int *arr, int size) {
    // Base case: if the array has only one element, return that element
    if (size == 1) {
        return *arr;
    } else {
        // Recursive case: sum the current element with the sum of the rest of the array
        return *arr + arraySum(arr + 1, size - 1);
    }
}

int main() {
    // Default array with 5 elements
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate the sum using the recursive function
    int sum = arraySum(arr, size);

    // Display the result
    cout << "The sum of the elements in the array is: " << sum << endl;

    return 0;
}

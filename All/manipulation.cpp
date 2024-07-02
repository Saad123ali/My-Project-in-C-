#include <iostream>
using namespace std;

int main() 
{
  // Array with duplicate elements
  int arr[] = {1, 2, 3, 1, 4, 3, 2, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Create a new array to store unique elements
  int unique[n];

  // Track the size of the unique array
  int unique_size = 0;

  // Loop through the original array
  for (int i = 0; i < n; i++) 
  {
    // Initialize flag to false (assuming element is unique)
    int is_duplicate = 0;

    // Loop through the existing unique elements
    for (int j = 0; j < unique_size; j++) 
    {
      // Check if current element is equal to any existing unique element
      if (arr[i] == unique[j]) 
      {
        is_duplicate = 1; // Set flag to true if duplicate found
        break;
      }
    }

    // If not a duplicate, add it to the unique array and increment size
    if (!is_duplicate) 
    {
      unique[unique_size] = arr[i];
      unique_size++;
    }
  }

  // Display the original array
  cout << "Original array: ";
  for (int i = 0; i < n; i++) 
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Display the unique array
  cout << "Unique array: ";
  for (int i = 0; i < unique_size; i++) 
  {
    cout << unique[i] << " ";
  }
  cout << endl;

  return 0;
}

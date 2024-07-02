 #include <iostream>
 #include<climits>
 using namespace std;
int main() 
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int list[size]; 

  // Initialize variables to track max and second max
  int largest = INT_MIN; // Use minimum possible value to ensure it gets updated properly
  int secondLargest = INT_MIN;

  // todo : Loop through the list elements
  for (int i = 0; i < size; ++i) 
  {
    cout << "Enter the " << i + 1 << " element of the array: ";
    cin >> list[i];
    if (list[i] > largest) 
    {
      secondLargest = largest;
      largest = list[i];
    } 
    else if (list[i] > secondLargest) 
    {
      secondLargest = list[i];
    }
  }

  //! Check if there are enough elements for a second largest
  if (secondLargest == INT_MIN) 
  {
    cout << "List does not contain enough elements for a second largest." << endl;
  } 
  else 
  {
    cout << "Second largest number: " << secondLargest << endl;
  }

  return 0;
}

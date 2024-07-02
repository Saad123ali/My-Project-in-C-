 #include <iostream>

using namespace std;

int main() {
  int array[10];

  // Input values into the array
  for (int i = 0; i < 10; i++) {
    cout << "Enter the value " << i + 1 << ": ";
    cin >> array[i];
  }

  cout << "The array before ascending order:" << endl;
  for (int i = 0; i < 10; i++) {
    cout << array[i] << endl;
  }

  // Sort the array in ascending order
  for (int i = 0; i < 9; i++) {  // Corrected loop condition to avoid out-of-bounds access
    for (int j = i + 1; j < 10; j++) {  // Start inner loop from i+1 to avoid unnecessary comparisons
      if (array[i] > array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  cout << "The array after ascending order:" << endl;
  for (int i = 0; i < 10; i++) {
    cout << array[i] << endl;
  }

  return 0;
}

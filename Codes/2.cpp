 #include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << "\n\nCheck whether the primitive values cross the limits or not:\n";
  cout << "--------------------------------------------------------------------\n";

  // Declare and initialize variables of various primitive data types
  char gender = 'F';
  bool isEmployed = true;
  unsigned short numOfSons = 2;
  short yearOfAppt = 2009;
  unsigned int yearlyPackage = 1500000;
  double height = 79.48;
  float gpa = 4.69;
  long totalDrawn = 12047235;
  long long balance = 995324987;

  // Print variable values directly, without limit checks
  cout << "The Gender is: " << gender << endl;
  cout << "Is she employed?: " << isEmployed << endl;
  cout << "Number of sons she has: " << numOfSons << endl;  // Removed conditional check
  cout << "Year of her appointment: " << yearOfAppt << endl;
  cout << "Yearly Package: " << yearlyPackage << endl;
  cout << "Height: " << height << endl;
  cout << "GPA: " << gpa << endl;
  cout << "Total drawn: " << totalDrawn << endl;
  cout << "Balance: " << balance << endl;

  return 0;
}

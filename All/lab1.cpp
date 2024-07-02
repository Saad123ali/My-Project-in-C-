#include<iostream>
using namespace std;
int num1, num2;
int addition(int a, int b) 
{
  return a + b;
}
int Subtraction(int a, int b) 
{
  return a - b;
}
int Division(int a, int b) 
{
  if (b == 0) 
  {
    cout << "\tDivision is not performed on 0" << endl;
    return 0;
  } 
  else 
  {
    return a / b;
  }
}
int Multiplication(int a, int b) 
{
  return a * b;
}
int power(int a, int b) 
{
  int result = 1;
  for (int i = 0; i < b; i++) 
  {
    result *= a;
  }
  return result;
}

int menu() 
{
  cout << "\n\t\t*****CALCULATOR*****\n\n";
  cout << " [1]  Addition\n";
  cout << " [2]  Subtraction\n";
  cout << " [3]  Division\n";
  cout << " [4]  Multiplication\n";
  cout << " [5]  Power\n";
  cout << " [6]  Exit\n";
  cout << "Enter your choice : ";
  return 0;
}
bool isValidChoice(const string& choice) 
{
  return choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6";
}
int main() 
{
  bool continueRunning = true;
  while (continueRunning) 
  {
    menu();
    string choice;
    cin >> choice;
    if (!isValidChoice(choice)) 
    {
      cout << "Invalid choice! Please enter a valid choice." << endl;
      continue;
    }
    if (choice != "6") 
    {
      cout << "Enter the number : ";
      cin >> num1;
      if 
      (choice == "5") 
      {
        cout << "Enter the power (exponent) : ";
        cin >> num2;
      } 
      else 
      {
        cout << "Enter the second number : ";
        cin >> num2;
      }
    }
    if 
    (choice == "1") 
    {
      cout << "The addition of two values is : " << addition(num1, num2) << endl;
    } 
    else if (choice == "2") 
    {
      cout << "The subtraction of two values is : " << Subtraction(num1, num2) << endl;
    } 
    else if (choice == "3") 
    {
      cout << "The division of two values is : " << Division(num1, num2) << endl;
    } 
    else if (choice == "4") 
    {
      cout << "The multiplication of two values is : " << Multiplication(num1, num2) << endl;
    } 
    else if (choice == "5") 
    {
      cout << "The power of the value is : " << power(num1, num2) << endl;
    } 
    else if (choice == "6") 
    {
      cout << "Exiting the program..." << endl;
      continueRunning = false;  
    }
  }
  return 0;
}

#include <iostream>
using namespace std;

int num;
double Value;

void display(int value) 
{
    cout << "Displaying integer: " << value << endl;
}
void display(double value) 
{
    cout << "Displaying double: " << value << endl;
}

int main() 
{
    cout << "\nEnter an integer: ";
    cin >> num;
    cout << "\nEnter a double: ";
    cin >> Value;
    cout << "\n-----------------------------------------------------\n";
    cout << "| ";
    display(num);
    cout << "| ";
    display(Value);
    cout << "-----------------------------------------------------\n";

    return 0;
}

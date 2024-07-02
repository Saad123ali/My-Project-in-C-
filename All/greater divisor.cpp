/* #include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    // Input
    cout << "Input the first number: ";
    cin >> firstNumber;

    cout << "Input the second number: ";
    cin >> secondNumber;

    // Calculate GCD using Euclidean algorithm
    while (secondNumber != 0) {
        int temp = secondNumber;
        secondNumber = firstNumber % secondNumber;
        firstNumber = temp;
    }

    // Output
    cout << "The Greatest Common Divisor is: " << firstNumber << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,g;
    cout<<"enter the first num\t";
    cin>>num1;
    cout<<"enter the second num\t";
    cin>>num2;
    for ( int i=1; i<=num1 && i<=num2; i++)
    {
        if ((num1 % i==0 ) && ( num2 % i==0))
        {
            g=i;
        }
        
    }
    cout<<"The Greatest Common Divisor is:"<<g;
return 0;
}



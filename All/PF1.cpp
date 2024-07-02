 #include <iostream>
 using namespace std;

class MathOperations 
{
public:
    int add(int a, int b) 
    {
        return a + b;
    }
    double add(double a, double b) 
    {
        return a + b;
    }
    int multiply(int a, int b) 
    {
        return a * b;
    }
    double multiply(double a, double b) 
    {
        return a * b;
    }
};

int main() 
{
    MathOperations math;
    int num1,num2;
    double Num1, Num2;

    cout << "Enter the first integer : ";
    cin >> num1;
    cout << "Enter the second integer : ";
    cin >> num2;
    cout << "Enter the First integer in double : ";
    cin >> Num1;
    cout << "Enter the Second integer in double : ";
    cin >> Num2;
    cout<<"\n-----------------------------------------------------\n";
    cout << "|  Addition of two integers : " << math.add(num1,num2) <<"\n";
    cout << "|  Addition of two doubles integers : " << math.add(Num1,Num2) <<"\n";
    cout << "|  Multiply of two integers: " << math.multiply(num1,num2) <<"\n";
    cout << "|  Multiply of two doubles integers: " << math.multiply(Num1,Num2) <<"\n";
    cout<<"-----------------------------------------------------\n";
    return 0;
}

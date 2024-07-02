#include <iostream>
using namespace std;

double real1, imaginary1, real2, imaginary2;
class ComplexNumber 
{
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const 
    {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }
    ComplexNumber operator-(const ComplexNumber& other) const 
    {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }
    ComplexNumber operator*(const ComplexNumber& other) const 
    {
        return ComplexNumber(real * other.real - imaginary * other.imaginary,real * other.imaginary + imaginary * other.real);
    }
    void display() const 
    {
        cout << "(" << real << " + " << imaginary << "i)";
    }
};

int main() 
{
    cout << "\nEnter the real and imaginary parts of the first complex number like ( 3 , 5 ) : ";
    cin >> real1 >> imaginary1;

    cout << "\nEnter the real and imaginary parts of the second complex number like ( 2 , 7 ) : ";
    cin >> real2 >> imaginary2;
    ComplexNumber c1(real1, imaginary1);
    ComplexNumber c2(real2, imaginary2);

    cout << "Addition: ";
    c1.display();
    cout << " + ";
    c2.display();
    cout << " = ";
    (c1 + c2).display();
    cout<<"\n";

    cout << "Subtraction: ";
    c1.display();
    cout << " - ";
    c2.display();
    cout << " = ";
    (c1 - c2).display();
    cout <<"\n";

    cout << "Multiplication: ";
    c1.display();
    cout << " * ";
    c2.display();
    cout << " = ";
    (c1 * c2).display();
    cout <<"\n";
    return 0;
}

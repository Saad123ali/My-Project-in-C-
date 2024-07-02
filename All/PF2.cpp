#include <iostream>
#include <cmath>
using namespace std;

float pi;
double radius, length, width, s1, s2, s3;
class ShapeCalculator 
{
public:
    double calculateArea(double r = 1.0) 
    {
        pi = 3.1417;
        return pi * r * r;  
    }
    double calculateArea(double l, double w) 
    {
        return l * w;  
    }
    double calculateArea(double side1, double side2, double side3) 
    {
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main() 
{
    ShapeCalculator calculator;

    cout << "\nEnter the radius of circle: ";
    cin >> radius;

    cout <<"\nEnter the length of the rectangle :  ";
    cin >> length;
    cout<< "Enter the width of the rectangle: ";
    cin >> width;

    cout << "\nEnter the First side of the triangle: ";
    cin >> s1;
    cout << "Enter the Second side of the triangle: ";
    cin >> s2;
    cout << "Enter the Third side of the triangle: ";
    cin >> s3;
    cout<<"\n-----------------------------------------------------\n";
    cout << "|  The Area of a circle is : " << calculator.calculateArea(radius) <<"\n";
    cout << "|  The length and width of a rectangle is : " << calculator.calculateArea(length, width) <<"\n";
    cout << "|  Area of a triangle using Heron's formula : " << calculator.calculateArea(s1, s2, s3) <<"\n";
    cout<<"-----------------------------------------------------\n";

    return 0;
}

#include <iostream>
using namespace std;
int int1, int2;
double d1, d2;
double x1, y1, x2, y2;

template <typename T>
T maximum(T a, T b) 
{
    return (a > b) ? a : b;
}
class Point 
{
public:
    double x, y;
    Point(double x, double y) : x(x), y(y) {}
};
Point maximum(const Point& a, const Point& b) 
{
    return (a.x * a.x + a.y * a.y > b.x * b.x + b.y * b.y) ? a : b;
}

int main() 
{
    cout << "\nEnter First integer : ";
    cin >> int1;
    cout << "Enter Second integer : ";
    cin >> int2;

    cout << "\nEnter First double integer : ";
    cin >> d1;
    cout << "Enter Second double integer : ";
    cin >> d2;

    cout << "\nEnter the coordinates of the first point (x y): ";
    cin >> x1 >> y1;
    Point point1(x1, y1);

    cout << "Enter the coordinates of the second point (x y): ";
    cin >> x2 >> y2;
    Point point2(x2, y2);
    cout<<"\n-----------------------------------------------------\n";
    cout << "|  The maximum in integer is : " << maximum(int1, int2) << endl;
    cout << "|  The maximum double integer is : " << maximum(d1, d2) << endl;
    cout << "|  Maximum point: (" << point1.x << ", " << point1.y << ") and (" << point2.x << ", " << point2.y
         << "): (" << maximum(point1, point2).x << ", " << maximum(point1, point2).y << ")" << endl;
    cout<<"-----------------------------------------------------\n";
    return 0;
}

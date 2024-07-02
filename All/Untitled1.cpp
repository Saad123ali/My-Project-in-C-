#include<iostream>
#include<iomanip>
using namespace std;
float width,height,Area,base1,base2;
void menu()
{
    cout<<"\n\n\t ____________________________________________";
    cout<<"\n\t|"<<setw(44)<<"|";
    cout<<"\n\t|   [1] Area of Rectangle"<<setw(20)<<"|";
    cout<<"\n\t|   [2] Area of Square"<<setw(23)<<"|";
    cout<<"\n\t|   [3] Area of Trapezoid"<<setw(20)<<"|";
    cout<<"\n\t|   [0] Exit"<<setw(33)<<"|";
    cout<<"\n\t|___________________________________________|";
    cout<<"\n\tEnter your choice: ";
}
double Rectangle(float w, float h)
{
    return w*h;
}
double Square(float Area)
{
    return Area*Area;
}
double Trapezoid(float a, float b, float h)
{
    return 0.5*(a+b)*h;
}
int main()
{
    while(true)
    {
        menu();
        string choice;
        cin>>choice;
      if(choice=="1")
      {
        cout<<"Enter the Width of Rectangle: ";
        cin>>width;
        cout<<"Enter the Height of Rectangle: ";
        cin>>height;
        cout<<"The Area of Rectangle is: "<<Rectangle(width,height);
      }
      else if(choice=="2")
      {
        cout<<"Enter the Area of Square: ";
        cin>>Area;
        cout<<"The Area of Square is: "<<Square(Area);
      }
      else if(choice=="3")
      {
        cout<<"Enter the Base1 of Trapezoid: ";
        cin>>base1;
        cout<<"Enter the Base2 of Trapezoid: ";
        cin>>base2;
        cout<<"The Area of Trapezoid is: "<<Trapezoid(base1,base2,height);
      }
      else if(choice == 0)
      {
        break;
      }
      else
      {
        cout<<"\n\tInvalid Choice";
      }
   }
   return 0;
}

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
 int num;
 int range,start;
 again:
 cout << "Enter the number to perform it's table" << endl;
 cin >> num;
 cout << "Enter the start point of table" << endl;
 cin>>start;
 cout << "Enter the number to end table" << endl;
 cin >> range;
 /*
 int i=0;
 while(i<range)
 {
  i++;
  cout<<num<<" * "<<i<<" = "<<i*num<<endl;
 }
 for(int i=start;i<range;i++)
 {
 cout<<num<<" * "<<i<<" = "<<i*num<<endl;
 }*/
 int i=start;
 do
 {
 i++;
 cout<<num<<" * "<<i<<" = "<<i*num<<endl;
 } while(i<=range);
 char again;
 cout << "Do you want  to perform another table" << endl;
 cout << "(Yes = y and No = n)" << endl;
 cin>>again; 
 if(again == 'y' || again == 'Y')
 goto again;
}             

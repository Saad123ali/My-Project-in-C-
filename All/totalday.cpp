#include<iostream>
using namespace std;
int main()
{
    int day,month,total;
    int day_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"Enter the month nmuber : ";
    cin>>month;
    cout<<"Enter the day number : ";
    cin>>day;
    total=day;
    for(int i=0;i<month-1;i++)
    {
        total+=day_per_month[i];
        cout<<"The nmuber of days in this year till date = "<<total<<endl;
    }
    return 0;
}
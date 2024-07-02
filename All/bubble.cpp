#include<iostream>
using namespace std;
int main()
{
    int array[5];
    int i,j,temp;
    for( int i=0;i<5;i++)
    {
        cout<<"Enter the value "<<i+1<<" : ";
        cin>>array[i];
    }

    cout<<"\nThe value you entered "<<endl;
    for( int i=0;i<5;i++)
    { 
        cout<<array[i]<<" ";
    }

    for( int i=0;i<5;i++)
    {
        for( int j=0;j<4;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    cout<<"\nThe ascending array is : ";
    for(int i=0;i<5;i++)
    {
       cout<<array[i]<<" ";
    }
      for( int i=0;i<5;i++)
    {
        for( int j=0;j<4;j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
     cout<<"\nThe descending array is : ";
    for(int i=0;i<5;i++)
    {
       cout<<array[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value "<<i+1<<" : ";
        cin>>array[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    int n;
    cout<<"\nEnter the value to found : ";
    cin>>n;
    int i,location=-1;
    for(i=0;i<size;i++)
    {
        if(array[i]==n)
        {
            location=i;
        }
    }
    if(location==-1)
    {
        cout<<"Value not found in this array ! "<<endl;
    }
    else
    {
        cout<<"Value are fonud in this inadex ["<<location<<"]"<<endl;
    }
    return 0;
}
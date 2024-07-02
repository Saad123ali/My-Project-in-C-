#include<iostream>
using namespace std;
int main()
{   int size;
    cout<<"Enter the size of integers : ";
    cin>>size;
    int array[size];
    //={10,20,30,40,50,60,70,80,90,100};
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value "<<i+1<<" : ";
        cin>>array[i];
    }
    int n,mid,start,end,location;
    location=-1;
    start=0;
    end=size-1;;
    cout<<"Enter the value to find : ";
    cin>>n;
    for(int i=start;i<end;i++)
    {
        mid=(i+end)/2;
        if(array[mid]==n)
        {
            location=mid;
            break;
        }
        else if(n<array[mid])
            end=mid-1;
        else
            start=mid+1;
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
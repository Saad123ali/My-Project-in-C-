#include<iostream>
using namespace std;
int main()
{
    int integer =15;
    int array[integer];
    int maxCount = 0;
    int reapeat = 0;
    int count = 0;
    int maxReapeat = 0;

    cout<<"\n\t-------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\tENTER 15 INTEGERS"<<endl;
    cout<<"\t-------------------------------------------------------------"<<endl;
    cout<<endl;
    for(int i=0;i<integer;i++)
    {
        do
        {
        cout<<"Enter the value "<<i + 1<<" : ";
        cin>>array[i];
        if(array[i]>10)
        {
             cout<<"\nPlease enter a value less than or equal to 10: "<<endl;
        }
        }while(array[i]>10);
    }
    for(int i=0;i<integer;i++)
    {
        count = 0;
        for(int j=0;j<integer;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        if(count>maxCount)
        {
             maxCount = count;
            reapeat = array[i];
            reapeat =i;
        }
        
    }
    for(int i;i<maxCount;i++)
    {
        cout<<reapeat<<(i == maxReapeat - 1 ? "": " ,");
    }
    cout<< " repeated " << maxCount << " times." << endl;
    cout<<"\n\n"<<endl;
    cout<<reapeat<<" : Reapeat Maximum times";
    return 0;
}
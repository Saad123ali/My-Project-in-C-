#include<iostream>
#include<array>
using namespace std;
int main()
{
    
    cout<<"\n\t-------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\tENTER THE INTEGERS"<<endl;
    cout<<"\t-------------------------------------------------------------"<<endl;
    cout<<endl;
    int array[4][4];
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        do
        {
        cout<<"Enter the value ["<<i<<"] ["<<j<<"] : ";
        cin>>array[i][j];
        if(array[i][j]>100)
        {
             cout<<"\nPlease enter a value less than or equal to 100: "<<endl;
        }
        }while(array[i][j]>100); 
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<array[i][j]<<" ";  
        }
        cout<<endl;
    }
    int max = array[0][0];
    int rowlocation =0;
    int collocation =0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
          if(array[i][j]>max)
          {
            max=array[i][j];
            rowlocation = i;
            collocation = j;
          }
        }
    }
    cout<<"The location of largest number row : ["<<rowlocation<<"] column ["<<collocation<<"] " <<max<<endl;
    return 0;
}
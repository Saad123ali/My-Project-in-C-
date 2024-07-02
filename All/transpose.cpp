#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter the number of cols : ";
    cin>>c;
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter the matix no ["<<i<<"] ["<<j<<"] : ";
            cin>>matrix[i][j];   
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<" ";  
        }
        cout<<endl;
    }
    cout<<"\nThe transpose of the matrix is "<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
}
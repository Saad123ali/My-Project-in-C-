#include <iostream>
using namespace std;

int main() 
{
    int rows;
    cout<<"Enter the numbers of rows : ";
    cin>>rows;
    int cols;
    cout<<"Enter the nmubers of cols : ";
    cin>>cols;
    int array[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"Enter the value ["<<i+1<<"] ["<<j+1<<"]"<<" : ";
            cin>>array[i][j];
        }
    }

    // Display the original array
    cout << "Original Array:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            
            cout << array[i][j] << " ";
        }

        cout << endl;
    }
    int rowindex;
    cout<<"ENter the row index : ";
    cin>>rowindex;
    if(rowindex<0||rowindex>=rows)
    {
        cout<<"invalid !"<<endl;
        return 1;
    }
    int colindex;
    cout<<"Enter the cols index : ";
    cin>>colindex;
    if(colindex<0||colindex>=cols)
    {
        cout<<"invalid !"<<endl;
        return 1;
    }
    int value;
    cout<<"Enter the new value : ";
    cin>>value;
    array[rowindex][colindex]=value;
     

    // Display the modified array
    cout << "\nModified Array:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

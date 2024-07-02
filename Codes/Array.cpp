#include<iostream>
using namespace std;
int main()
{
    // int temp[5];
    // cout<<"Enter First element:";
    // cin >> temp[0];
    // cout<<"Enter Second element:";
    // cin >> temp[1];
    // cout<<"Enter Third element:";
    // cin >> temp[2];
    // cout<<"Enter Fourth element:";
    // cin >> temp[3];
    // cout<<"Enter Fifth element:";
    // cin >> temp[4];
    // cout<<"Values you entered:"<<endl;
    // cout<<temp[0]<<endl;
    // cout<<temp[1]<<endl;
    // cout<<temp[2]<<endl;
    // cout<<temp[3]<<endl;
    // cout<<temp[4]<<endl;

    // int temp[5];
    // temp[0] = 3;
    // temp[1] = 2;
    // temp[2] = 1;
    // temp[3] = 0;
    // temp[4] = 0;
    // for(int i =0; i < 5; i++)
    // {
    //     cout<<temp[i]<<endl;
    // }

    // int abc[15];
    // for(int i = 0; i < 15; i++)
    // {
    //     abc[i] = 50;
    // }
    // for(int i = 0; i < 15; i++)
    // {
    //     cout<<abc[i]<<" ";
    // }

    // int array[5];
    // for(int i = 0; i < 5; i++)
    // {
    //     cin>>array[i];
    // }
    // for(int i = 0; i < 5; i++)
    // {
    //     cout<<array[i]<<" ";
    // }

    // float temp[7] , sum =0.0;
    // int i =0;
    // while( i<7)
    // {
    //     cout<<"Enter temp of day: "<< i+1<<endl;
    //     cin>>temp[i];
    //     sum = sum + temp[i];
    //     i++;
    // }
    // cout<<"Average temperature:"<< sum/7.0<<endl;

    // int array[10] , i , odd , even;
    // i = odd = even = 0;
    // while(i<10)
    // {
    //     cout<<"Enter number: "<<i+1<<endl;
    //     cin>>array[i];
    //     if(array[i]%2== 1)
    //     {
    //         odd++; 
    //     }
    //     else
    //     {
    //         even++;
    //     }
    //     i++;
    // }
    // cout<<"odd numbers:"<<odd<<endl;
    // cout<<"even numbers:"<<even<<endl;
    
    // int array[5], i;
    // i = 0;
    // while(i < 5 )
    // {
    //     cout<<"Enter number: "<<i +1<<endl;
    //     cin>>array[i];
    //     i++;
    // }
    // for(i = 0; i < 5; i++)
    // {
    //     cout<<array[i]<<" * "<<i+1<<" = "<<array[i] * (i+1)<<endl;
    // }

    // int array1[5] , array2[5] , array3[5];
    // for(int i =0; i < 5; i++)
    // {
    //     cout<<"Enter first array elements:"<<i+1<<endl;
    //     cin>>array1[i];
    // }for(int i =0; i < 5; i++)
    // {
    //     cout<<"Enter second array elements:"<<i+1<<endl;
    //     cin>>array2[i];
    // }
    // cout<<"First + Second + Sum"<<endl;
    // for(int i = 0; i < 5; i++)
    // {
    //     array3[i] = array1[i]+array2[i];
    //     cout<<array1[i]<<" + "<<array2[i]<<" = "<<array3[i]<<endl;
    // }

    // int array[10];
    // int i=0;

    // while(i<10)
    // {
    //     cout<<"Enter Values: "<<i+1<<endl;
    //     cin>>array[i];
    //     i++;
    //     if(array[i]>30 || array[1]<10)
    //     {
    //         continue;
    //     }
    // }
    // i = 0;
    // while( i < 10)
    // {
    //     for(int c=1; c < array[i]; c++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // long array[] = { 2, 3, 4, 5, 6, 7, 8} , f , n , i =0;
    // while(i < 7 )
    // {
    //     f =1;
    //     n = array[i];
    //     for(; n>1; n--)
    //     {
    //         f = f *n;
    //     }
    //     cout<<"Factorial: "<<f<<endl;
    //     i++;
    // }


    // int array[10] = {0,1,2,3,4,5,6,7,8,9};
    // cout << "Values before deletion:" << endl;
    // for(int i = 0; i < 10; i++) {
    //     cout << array[i] << " ";
    // }
    // cout << endl;
    // int n = 10;
    // int position;
    // cout << "Enter value you want to delete: ";
    // cin >> position;

    // for( int i = position; i < n; i++ )
    // {
    //     array[i] = array[i+1];
    // }
    // cout<<"Values after deletion:"<<endl;
    // for( int i = 0; i < n-1; i++ )
    // {
    //     cout << array[i]<<" ";
    // }
    

    // int array[10] = {0,1,2,3,4,5,6,7,8,9};
    // cout << "Values before deletion:" << endl;
    // for(int i = 0; i < 10; i++) {
    //     cout << array[i] << " ";
    // }
    // cout << endl;
    // int n = 10;
    // int position;
    // cout << "Enter index of the value you want to delete: ";
    // cin >> position;

    // // Shift elements to the left to overwrite the deleted element
    // for(int i = position; i < n - 1; i++) {
    //     array[i] = array[i + 1];
    // }

    // // Assign zero to the last element to indicate deletion
    // array[n - 1] = 0;

    // cout << "Values after deletion:" << endl;
    // for(int i = 0; i < n; i++) {
    //     cout << array[i] << " ";
    // }
    // cout << endl;





    // int array[5][2] = {
    //     {0, 1},
    //     {2, 3},
    //     {4, 5},
    //     {6, 7},
    //     {8, 9}
    // };

    // cout << "Values before deletion:" << endl;
    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // int position;
    // cout << "Enter row index of the value you want to delete: ";
    // cin >> position;

    // // Shift elements to the left to overwrite the deleted row
    // for(int i = position; i < 4; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         array[i][j] = array[i + 1][j];
    //     }
    // }

    // // Set the last row to zeros to indicate deletion
    // // for(int j = 0; j < 2; j++) {
    // //     array[4][j] = 0;
    // // }

    // cout << "Values after deletion:" << endl;
    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int array[5][2] = {
    //     {0, 1},
    //     {2, 3},
    //     {4, 5},
    //     {6, 7},
    //     {8, 9}
    // };

    // cout << "Values before deletion:" << endl;
    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // int row, col;
    // cout << "Enter row and column indices of the value you want to delete: ";
    // cin >> row >> col;

    // // Shift elements to the left to overwrite the deleted element
    // for(int i = col; i < 1; i++) {
    //     array[row][i] = array[row][i + 1];
    // }

    // // Set the last element of the row to zero to indicate deletion
    // array[row][1] = 0;

    // cout << "Values after deletion:" << endl;
    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // int array[5][2] = {
    //     {0, 1},
    //     {2, 3},
    //     {4, 5},
    //     {6, 7},
    //     {8, 9}
    // };

    // cout << "Values before deletion:" << endl;
    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // int row, col;
    // cout << "Enter row and column indices of the value you want to delete: ";
    // cin >> row >> col;

    // // Shift elements to the left to overwrite the deleted element
    // for(int i = col; i < 1; i++) {
    //     array[row][i] = array[row][i + 1];
    // }

    // cout << "Values after deletion:" << endl;
    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    return 0;
}


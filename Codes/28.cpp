// // // #include<iostream>
// // // using namespace std;
// // // int count_occurences(int arr[], int n,int x)
// // // {
// // //     int result = 0;
// // //     for(int i= 0; i < n; i++)
// // //     {
// // //         if( x == arr[i])
// // //         {
// // //             result++;
// // //         }
// // //     }
// // //     return result;
// // // }
// // // int main()
// // // {
// // //     int nums[] = {5,7,8,8,5,8,7,7};
// // //     int n = sizeof(nums)/sizeof(nums[0]);
// // //     cout<<"Original array: ";
// // //     for( int i = 0; i < n; i++)
// // //     {
// // //         cout<<nums[i]<<" ";
// // //     }
// // //     int x = 7;
// // //     cout<<"Number of occurences 7 : "<<count_occurences(nums, n ,x);
// // //     return 0;
// // // }
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int values ,list[10] ={};
// // //     cout<<"Enter the number of values"<<endl;
// // //     cin>>values;
// // //     cout<<"Enter "<<values <<" numbers"<<endl;
// // //     for(int i = 0; i < values; i++)
// // //     {
// // //         cin>>list[i];
// // //     }
// // //     int biggestNum = list [0], temp;
// // //     for( int i = 0; i < values; i++)
// // //     {
// // //         temp = list [i];
// // //         if( temp > biggestNum )
// // //         {
// // //             biggestNum = temp;
// // //         }
// // //     }
// // //     cout<<"Largest number: "<<biggestNum<<endl;
// // // }
// // // #include<iostream>
// // // using namespace std;
// // // int count_occurences(int array[],int size, int target)
// // // {
// // //     int count = 0;
// // //     for( int i= 0; i < size; i++ )
// // //     {
// // //         if ( array[i] == target )
// // //         {
// // //             count++;
// // //         }
// // //     }
// // //     return count;
// // // }
// // // int main()
// // // {
// // //     int size;
// // //     cout<<"Enter the size of array:"<<endl;
// // //     cin>>size;
// // //     int array[size];
// // //     cout<<"Enter the element in the array:"<<endl;
// // //     for( int i =0; i < size; i++ )
// // //     {
// // //         cin>>array[i];
// // //     }
// // //     int target;
// // //     cout<<"Enter the target number: "<<endl;
// // //     cin>>target;
// // //     int occurences = count_occurences(array, size , target);
// // //     cout<<"Number of occurences: "<<target<<occurences<<endl;
// // // }
// // // #include<iostream>
// // // using namespace std;

// // // void inputArray(int arr[], int size)
// // // {
// // //     cout<<"Enter array elements:"<<endl;
// // //     for(int i=0; i<size; i++)
// // //     {
// // //         cin>>arr[i];
// // //     }
// // // }
// // // void copyArray(int source[],int destination[],int size)
// // // {
// // //     for(int i=0; i<size; i++)
// // //     {
// // //         destination[i]=source[i];
// // //     }
// // // }
// // // void displayArray(const int arr[], int size)
// // // {
// // //     for(int i=0; i<size; i++)
// // //     {
// // //         cout<<arr[i]<< " ";
// // //     }
// // //     cout<<endl;
// // // }
// // // int main()
// // // {
// // //     const int maxSize =10;
// // //     int array1[maxSize];
// // //     int array2[maxSize];
// // //     inputArray(array1,maxSize);
// // //     copyArray(array1,array2,maxSize);
// // //     cout<<"Array 1:"<<endl;
// // //     displayArray(array1,maxSize);
// // //     cout<<"Array 2:"<<endl;
// // //     displayArray(array2,maxSize);
// // //     return 0;
// // // }
// // #include <iostream>
// // using namespace std;

// // void displayAddresses(const int* a, const int* b) {
// //     cout << "Address of num1: " << a << endl;
// //     cout << "Address of num2: " << b << endl;
// // }

// // void swapValues(int* a, int* b) {
// //     int temp = *a;
// //     *a = *b;
// //     *b = temp;
// // }

// // int main() {
// //     int num1, num2;

// //     // Input two numbers
// //     cout << "Enter the first number: ";
// //     cin >> num1;

// //     cout << "Enter the second number: ";
// //     cin >> num2;

// //     // Display addresses before swapping
// //     cout << "Before swapping:" << endl;
// //     displayAddresses(&num1, &num2);

// //     // Call the swapValues function with pointers to swap values
// //     swapValues(&num1, &num2);

// //     // Display addresses after swapping
// //     cout << "After swapping:" << endl;
// //     displayAddresses(&num1, &num2);

// //     return 0;
// // }

// #include<iostream>
// using namespace std;

//  int main()
//  {
//     for( int i= 0; i<=5; i++)
//     {
//         for( int j=0; j<i; j++)
//         {
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
//  }
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter the numbers of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;

    int **array = new int *[rows];
    for(int i=0; i<rows; i++)
    {
        array[i] = new int[cols];
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            cin>>array[i][j];
        }
    }

    int value;
    cout<<"Enter the value of the found: ";
    cin>>value;
    int row , col;
    bool found = false;

    for( int i = 0;i< row;i++)
    {
        for (int j = 0; j< col;j++)
        {
            array[i][j] = value;
            row = i;
            col = j;
        }
    }

    cout<<"The value you found is "<<value<<" [ "<<row<<"]["<<col<<"]"<<endl;

    if(!found)
    {
        cout<<"not found"<<endl;
    }

    for ( int i =0; i < rows; i++ )
    {
        delete array[i];
    }
    delete[] array;

    return 0;
}




























    // cout << "\n\t\t ______________________________________________\n";
    // cout << "\t\t|       |" << setw(40) << "|\n";
    // cout << "\t\t| [1]   |     Dispaly Available Bus " << setw(13) << "|\n";
    // cout << "\t\t| [2]   |     Book a Ticket" << setw(22) << "|\n";
    // cout << "\t\t| [3]   |     Cancle a Ticket" << setw(20) << "|\n";
    // cout << "\t\t|       |" << setw(40) << "|\n";
    // cout << "\t\t|_______|______________________________________|\n";
    // cout << "\n\t\tEnter your choice ... ";
   


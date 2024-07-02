// #include<iostream>
// using namespace std;
// int main()
// {   int size;
//     cout<<"Enter the size of integers : ";
//     cin>>size;
//     int array[size];
//     //={10,20,30,40,50,60,70,80,90,100};
//     for(int i=0;i<size;i++)
//     {
//         cout<<"Enter the value "<<i+1<<" : ";
//         cin>>array[i];
//     }
//     int n,mid,start,end,location;
//     location=-1;
//     start=0;
//     end=size-1;
//     cout<<"Enter the value to find : ";
//     cin>>n;
//     for(int i=start;i<end;i++)
//     {
//         mid=(i+end)/2;
//         if(array[mid]==n)
//         {
//             location=mid;
//             break;
//         }
//         else if(n<array[mid])
//             end=mid-1;
//         else
//             start=mid+1;
//     }
//     if(location==-1)
//     {
//         cout<<"Value not found in this array ! "<<endl;
//     }
//     else
//     {
//         cout<<"Value are fonud in this inadex ["<<location+1<<"]"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int array[5] = {1, 3, 5, 3, 6};
//     int size = 5;
//     int n, mid, start, end, location;
//     location = -1;
//     start = 0;
//     end = size - 1;

//     cout << "Enter the value to find : ";
//     cin >> n;

//     for (int i = start; i <= end; i++) {
//         mid = (start + end) / 2;
//         if (array[mid] == n) {
//             location = mid;
//             break;
//         } else if (n < array[mid]) {
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }

//     if (location == -1) {
//         cout << "Value not found in this array!" << endl;
//     } else {
//         cout << "Value found at index [" << location + 1 << "]" << endl;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int array[5];
//     int i,j,temp;
//     for( int i=0;i<5;i++)
//     {
//         cout<<"Enter the value "<<i+1<<" : ";
//         cin>>array[i];
//     }

//     cout<<"\nThe value you entered "<<endl;
//     for( int i=0;i<5;i++)
//     { 
//         cout<<array[i]<<" ";
//     }

//     for( int i=0;i<5;i++)
//     {
//         for( int j=0;j<4;j++)
//         {
//             if(array[j]>array[j+1])
//             {
//                 temp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=temp;
//             }
//         }
//     }
//     cout<<"\nThe ascending array is : ";
//     for(int i=0;i<5;i++)
//     {
//        cout<<array[i]<<" ";
//     }
//       for( int i=0;i<5;i++)
//     {
//         for( int j=0;j<4;j++)
//         {
//             if(array[j]<array[j+1])
//             {
//                 temp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=temp;
//             }
//         }
//     }
//      cout<<"\nThe descending array is : ";
//     for(int i=0;i<5;i++)
//     {
//        cout<<array[i]<<" ";
//     }
//     return 0;
// }
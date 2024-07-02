#include<iostream>
using namespace std;
int main()
{
    // float x = 6.5;
    // float *px;
    // px = &x;
    // cout<<"the address of x: "<<&x<<endl;
    // cout<<"The value of x: "<<x<<endl;
    // cout<<"The value of px: "<<px<<endl;
    // cout<<"The value of px: "<<*px<<endl;

    // int x, y, *px, *py;
    // px = &x;
    // py = &y;
    // *px = 5;
    // *py = 8;
    // cout<<"sum of: "<<*px * *py<<endl;

    // float x;
    // float *px = &x;
    // cout<<"Enter any value?"<<endl;
    // cin>>*px;
    // cout<<"THe value of x is: "<<x<<endl;

    // int x = 245;
    // float y =25.6;
    // void *px;
    // px = &x;
    // cout<<"The value of x is: "<<x<<endl;
    // cout<<"The address of x is: "<<px<<endl;
    // px = &y;
    // cout<<"The value of y is: "<<y<<endl;
    // cout<<"The address of y is: "<<px<<endl;

    
    // int *x = new int(245);
    // float *y = new float(25.6);
    // void *px;
    // px = &x;
    // cout << "The value of x is: " << *x << endl;
    // cout << "The address of x is: " << px << endl;
    // px = &y;
    // cout << "The value of y is: " << *y << endl;
    // cout << "The address of y is: " << px << endl;

    // // Don't forget to deallocate the dynamically allocated memory
    // delete x;
    // delete y;

    // int a[5] = {11,2,3,4,5} ,*px;
    // px = a;
    // cout<<"Value of array "<<endl;
    // for( int i=0; i<4; i++)
    // {
    //     cout<<*(px + i) <<" ";
    // }

    // int a[6]  ,*pa ,i;
    // pa =a;
    // cout<<"Enter the array value"<<endl;
    // for(i=0;i<6;i++)
    // {
    //     cin>>a[i];1
    // }
    // cout<<"The Odd value is:"<<endl;
    // for( int i=0;i<6; i++)
    // {
    //     if(*(pa + i)%2==1)
    //     {
    //         cout<<pa[i]<<" ";
    //     }
    // }

    // int a[6] ,*pa, i;
    // pa = a;
    // cout<<"Enter six values: "<<endl;
    // for( int i=0; i<6; i++)
    // {
    //     cin>>*pa++;
    // }
    // pa = &a[5];
    // cout<<"THe reverse array order: "<<endl;
    // for( int i=0; i<6; i++)
    // {
    //     cout<<*pa--<<" "<<endl;
    // }

    // int *p[3], X , Y, Z ,i;
    // X =25;
    // Y = 33;
    // Z = 34;
    // p[0] = &X;
    // p[1] = &Y;
    // p[2] = &Z;
    // cout<<"Value of variable "<<X<<endl;
    // cout<<"Value of variable "<<Y<<endl;
    // cout<<"Value of variable "<<Z<<endl;
    // for( int i=0; i<3; i++)
    // {
    //     cout<<*p[i]<<" ";
    // }

    // void cube(int *);
    // int n =3;
    // cout<<"Function before calling "<<n<<endl;
    // cube(&n);
    // cout<<"Function after calling "<<n<<endl;

    // void temp(int *);
    // int x[] = {0,1,2,3,4,5,6,7};
    // temp(x);
    // for( int i= 0; i<7; i++ )
    // {
    //     cout<<x[i]<<" ";
    // }

    // int *p1 ,*p2,sum;
    // p1 = new int;
    // p2 = new int;
    // cout<<"Enter first value"<<endl;
    // cin>>*p1;
    // cout<<"Enter second value"<<endl;
    // cin>>*p2;
    // sum = *p1 + *p2;
    // cout<<"sum of values: "<<sum<<endl;
    // delete p1;
    // delete p2;
    // int x ,y , *px ,*py ,s, *ps;
    // x = 2;
    // y =5;
    // s =x+y;
    // cout<<s;
    // px = &x;
    // py = &y;
    // ps = &s;
    // *ps = *ps + 2;
    // cout<<s;
    
    float *p1 , *p2 , max;
    int n , i;
    cout<<"Enter the size of array: ";
    cin>>n;
    p1 = new float[n];
    p2 = p1;
    cout<<"Enter " << n << "value of array: ";
    for( int i=0; i<n; i++ )
    {
        cin>>*p1++;
    }
    i = 0;
    p1 = p2;
    max = *p1;
    while(i< n)
    {
        if(max <*p1)
        {
            max = *p1;
        }
        *p1++;
        i++;
    }
    cout<<"Max value: "<<max<<endl;
    delete[] p1;


    return 0;
}
// void temp(int *p)
// {
//     for( int i=0; i<7; i++ )
//     {
//         *p = *p * 5;
//         *p++;
//     }
// }
// void cube(int *px)
// {
//     *px = *px * *px * *px;
// }
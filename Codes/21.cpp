// #include <iostream>
// using namespace std;
// void f(int &x)
// {
//     x--;
// }

// int main()
// {
//     int a = 5;
//     cout << a << endl;
//     f(a);
//     cout << a << endl;
// }
// #include <iostream>
// using namespace std;

// void f(int *x) 
// {
//   (*x)--;  
// }

// int main() 
// {
//   int a = 5;
//   cout << a << endl;
//   f(&a);  
//   cout << a << endl;
// }
// #include<iostream>
// using namespace std;
// void swap( int &x, int &y )
// {
//        int temp = x;
//        x = y;
//        y = temp;
// }
// int main()
// {
//        int x =23 , y = 43;
//        cout <<"Before swap"<<endl;
//        cout << "x: " << x << " y: " << y << endl;
//        swap(x,y);
//        cout <<" After swap"<<endl;
//        cout<< "x: " << x << " y: " << y << endl;
//        return 0;
// }
// #include<iostream>
// using namespace std;
// void swap( int *x, int *y )
// {
//        int temp = *x;
//        *x = *y;
//        *y = temp;
// }
// int main()
// {
//        int x =23 , y = 43;
//        cout <<"Before swap"<<endl;
//        cout << "x: " << x << " y: " << y << endl;
//        swap(&x,&y);
//        cout <<" After swap"<<endl;
//        cout<< "x: " << x << " y: " << y << endl;
//        return 0;
// }
// #include <iostream>
// using namespace std;

// int main() 
// {
//   int num = 10;  // Declare an integer variable with value 10
//   int *ptr = &num;  // Declare a pointer to an integer and assign it the address of num

//   // Print the value of num, its address, the value of ptr (which is the address), and the value pointed to by ptr
//   cout << "Value of num: " << num << endl;
//   cout << "Address of num: " << &num << endl;
//   cout << "Value of ptr (address of num): " << ptr << endl;
//   cout << "Value pointed to by ptr: " << *ptr << endl;

//   // Modify the value at the address pointed to by ptr
//   *ptr = 20;

//   // Print the updated value of num
//   cout << "Value of num now: " << num << endl;

//   return 0;
// }

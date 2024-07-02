// #include<iostream>
// using namespace std;
// int sum(int array[], int s)
// {
//     int sum = 0;
//     for( int i = 0; i <s; i++ )
//     {
//         sum += array[i];
//     }
//     return sum;
// }
// int main()
// {
//     int num[] = {0,1,2,3,4,5,6,7};
//     int size = sizeof(num)/sizeof(num[0]);
//     int result = sum(num, size);
//     cout<<result<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int sum(int array[], int s)
// {
//     int sum = 0;
//     for(int i = 0; i < s; i++)
//     {
//         sum += array[i];
//     }
//     return sum;
// }

// int main()
// {
//     int num;
//     cout << "Enter the number of elements: ";
//     cin >> num;

//     int *array = new int[num]; // Dynamically allocate memory

//     cout << "Enter the elements: ";
//     for(int i = 0; i < num; i++)
//     {
//         cin >> array[i];
//     }

//     int result = sum(array, num);
//     cout << "Sum: " << result << endl;

//     delete[] array; // Release the allocated memory

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int sum(int array[], int s)
// {
//     int sum = 0;
//     for ( int i= 0; i <s; i++)
//     {
//         sum += array[i];
//     }
//     return sum;
// }
// int main ()
// {
//     int num[] = {0,1,2,3,4,5,6,7};
//     int size = sizeof(num)/sizeof(num[0]);
//     int *p= num;
//     int result = sum ( p, size );
//     cout<<result<<endl;
// }
// #include<iostream>
// using namespace std;
// int sum( int *p, int size )
// {
//     int sum =0;
//     for( int i=0; i<size; i++ )
//     {
//         sum += p[i];
//     }
//     return sum;
// }
// int main()
// {
//     int num[] = {0,1,2,3,4,5,6};
//     int size = sizeof(num)/sizeof(num[0]);
//     int result = sum ( num, size );
//     cout<<result<<endl;
// }
// #include<iostream>
// using namespace std;
// long int factorial(long int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main()
// {
//     int a;
//     cout<<"Enter a number for factorial: "<<endl;
//     cin>>a;
//     long int result = factorial(a);
//     cout<<result<<endl;
// }
// #include<iostream>
// using namespace std;
// int faba(int a)
// {
//     if(a ==0 || a ==1)
//     {
//         return 1;
//     }
//     return faba(a-1)+faba(a-2);
// }
// int main()
// {
//     int a;
//     cout<<"Enter a number for term: "<<endl;
//     cin>>a;
//     for ( int i=0; i<a; i++ )
//     {
//         cout<<" "<<faba(i);
//     }
// }
// #include<iostream>
// using namespace std;

// int faba(int a)
// {
//     if(a == 0)
//     {
//         return 0;
//     }
//     else if(a == 1)
//     {
//         return 1;
//     }
//     return faba(a-1) + faba(a-2);
// }

// int main()
// {
//     int a;
//     cout << "Enter the number of terms: " << endl;
//     cin >> a;

//     for (int i = 0; i < a; i++)
//     {
//         cout << " " << faba(i);
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// template<typename T>
// T faba(T a)
// {
//     if (a == 0)
//     {
//         return 0;
//     }
//     else if (a == 1)
//     {
//         return 1;
//     }
//     return faba (a-1) + faba (a-2); 
// }
// template<typename T>
// void displayfabaseries(T n)
// {
//     cout<<"Fibonacci series: ";
//     for(T i = 0; i < n; i++)
//     {
//         cout<<" "<<faba(i);
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number of terms: ";
//     cin>>n;
//     displayfabaseries(n);
// }
// #include<iostream>
// using namespace std;

// template<typename T>
// T factorial(T n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     T result = 1;
//     for (T i = 2; i <= n; i++)
//     {
//         result *= i;
//     }

//     return result;
// }

// template<typename T>
// void printFactorials(T n)
// {
//     cout << "Factorials:";
//     for (T i = 0; i <= n; i++)
//     {
//         cout << " " << factorial(i);
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     printFactorials(n);

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     bool back = false;
//     int n;
//     cout << "Enter the number of factorials: ";
//     cin >> n;

//     if (n == 0 || n == 1)
//     {
//         back = true;       
//     }
//     else
//     {
//         cout << "Factorial numbers:";
//         int factorial = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             factorial *= i;
//             cout << " " << factorial;
//         }
//     }

//     return 0;
// }

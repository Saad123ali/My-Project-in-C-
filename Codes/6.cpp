#include <iostream>
using namespace std;

int main() 
{
    const int size = 10;
    int array[size];
    int sum = 0;

    cout << "Enter the integers\n";
    for (int i = 0; i < size; i++) 
    {
        cout << "Enter the value at index " << i + 1 << " : ";
        cin >> array[i];

        if (i == 4)  
        {
            array[i] = 55;
        }

    }

    for (int i = 0; i< size; i++)
    {
        sum += array[i];
    }
    cout<<"\nThe sum of the values :"<<sum<<endl;
    for (int i = 5; i < 6; i++) 
    {
        cout << "Value at index " << i << ": " << array[i-1] << "\n";
    }
    return 0;
}

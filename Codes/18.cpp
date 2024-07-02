#include<iostream>
using namespace std;

int main() {
    int n;

    // Get the number of rows for the Fibonacci Triangle from the user
    cout << "Enter the number of rows for the Fibonacci Triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        int a = 1, b = 1, c;
        for (int j = 1; j <= i; j++) 
        {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }

    return 0;
}

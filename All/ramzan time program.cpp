#include <iostream>
using namespace std;
int main()
{
    int j=24 ,k=49;
    cout<<"ramzan calander\n\n";
    for (int i = 1; i<=30; i++)
    {
        j--;
        k++;
        cout<<"day "<<i<<"\n";
        cout<<"sehrii time 3:"<<j<<"\n";
        cout<<"aftari time 6:"<<k<<"\n"; 
    }
    return 0;
    }

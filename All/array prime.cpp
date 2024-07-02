#include<iostream>
using namespace std;
int main()
{
    //int size=0;
    int prime[10];
    int c=0;i,j;
    for(int i=0;i<10;i++)
    {
        cin>>prime[i];
    }
    cout<<"\nprime Numbers\n";
    for(i=0;i<10;i++)
    {
        c=0;
        for(j=0;j<=prime[i];j++)
        {
            if(prime[i]%==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<prime[i]<<" ";
        }
    }
    return 0;
}
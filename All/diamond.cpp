#include<iostream>
using namespace std;

int main()
{
	int n,i,j,space=1;
	cout<<"Enter the number of rows";
	cin>>n;	space=n-1;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		{
			cout<<" ";
		}
	space--;
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	space=1;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=space;j++)
		{
			cout<<" ";
		}
	space++;
 		for(j=1;j<=2*(n-i)-1;j++)
		{
			cout<<"*";
		}
	cout<<endl;		
	}
 cout<<"\n\t----SAAD ALI----\n\t"<<endl;
 
 return 0;
}


#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<=7;i++)
	{
     for(int j=1;j<=(7-i);j++)
	 	cout<<" ";
	    
   	 for(int k=1;k<=i;k++)
   		cout<<"+";
	 for(int k=1;k<=i-1;k++)
		cout<<"-";	 
	 cout<<endl;
				
	}
	
 cout<<"\n\t----SAAD ALI----\n\t"<<endl;
 
 return 0;
}


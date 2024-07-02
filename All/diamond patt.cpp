 #include<iostream>
 using namespace std;
 int main()
 {
 	int raw;
 	cout<<"Enter the number of raws:";
 	cin>>raw;
 	if(raw%2==0)
 	raw=raw=1;
 	int y=raw/2+1;
 	int x=1;
 	for(int i=1;i<=y;i++)
 	{
 		for(int k=y;k>=i;k--)
 		cout<<" ";
 		for(int j=1;j<=i*2-1;j+=2)
 		{
 			if(x<=9)
 			cout<<"0"<<x<<" ";
 			else
 			cout<<" "<<x<<" ";
 			x++;
 		}
 	cout<<"\n";
    }
    for(int i=y-1;i>=1;i--)
    {
    	for(int k=y;k>=i;k--)
    	cout<<" ";
    	for(int j=1;j<=i*2-1;j+=2)
    	{
    		if(x<=9)
    		cout<<"0"<<x<<" ";
 			else
 			cout<<" "<<x<<" ";
 			x++;	
		}
	cout<<"\n";	
	}
return 0;    
}
 

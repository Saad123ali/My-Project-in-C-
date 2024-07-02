#include<iostream>
using namespace std;

int main()
{
	int numberoftotalQuizzes=10;
	int numberinsingleQUIZ=0;
	int maximummarks=0;
	int totalmarksinallQuizzes=0;
	int minimummarks=0;
	
	cout<<"Enter the marks of Quiz number 1"<<endl;
	cin>>numberinsingleQUIZ;
	minimummarks=numberinsingleQUIZ;
	
	for(int i=1;i<totalmarksinallQuizzes;i++)
	{
		cout<<"Enter the mark of Quiz number "<<i+1<<endl;
		cin>> numberinsingleQUIZ;
	if( numberinsingleQUIZ>maximummarks)
	{
		maximummarks=numberinsingleQUIZ;
	}	
	if(numberinsingleQUIZ<minimummarks)
	{
		minimummarks=numberinsingleQUIZ;
	}
	totalmarksinallQuizzes=totalmarksinallQuizzes+numberinsingleQUIZ;		
	}
	int averageMarks=totalmarksinallQuizzes/10;
	
	cout<<"Highest marks "<<maximummarks<<endl;
	cout<<"Lowest marks "<<minimummarks<<endl;
	cout<<"Average marks "<<averageMarks<<endl;	
 cout<<"\n\t----SAAD ALI----\n\t"<<endl;
 
 return 0;
}


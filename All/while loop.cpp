#include<iostream>
using namespace std;

int main()
{
	float marksObtained = 0.0, sumGrades = 0.0, averageGrade = 0.0;
	int count = 0;
	cout<<"Press Enter Your Obtained Marks in Courses : ";
	cin>>marksObtained;
	while(marksObtained>=0)
	{
		count++;
		sumGrades+=marksObtained;
		cout<<"Please Enter Your Obtained Marks in Courses : ";
		cin>>marksObtained;	
	}
	if(count==0)
	cout<<"You didn't enter grade of any subject ";
	else
	{
	 averageGrade=sumGrades/count;
	 cout<<"Your Average Grade is "<<averageGrade<<endl;	
	}
 cout<<"\n\t----SAAD ALI----\n\t"<<endl;
 
 return 0;
}


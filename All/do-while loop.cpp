#include<iostream>
using namespace std;

int main()
{
	int num1 = 7, num2 = 6, response, count = 0,maxTry = 3;
	do
	{
		cout<<"What is "<<num1<<"*"<<num2<<"=";
		cin>>response;
		count++;
		
		if((response != num1 * num2) && (count < maxTry))
			cout<<"Wrong response. Plesae try Again\n ";
	}while((response != num1 * num2) && (count < maxTry));
	if(response != num1 * num2)
		cout<<"Sorry! You were not Successfull";
	else
		cout<<"Congratulations! You got the Correct Answer";
 cout<<"\n\t----SAAD ALI----\n\t"<<endl;
 
 return 0;
}


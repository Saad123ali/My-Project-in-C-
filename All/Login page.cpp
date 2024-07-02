#include<iostream>
using namespace std;

int main()
{
	cout<<"\n\t-----Welcome To Login Page-----\n\t"<<endl;
 
 int choice;
 string email,password,email1,password1;
 p:
 cout<<"\tPlease Enter Your Choice "<<endl;
 q:
 cout<<"\tPress 1: for Login "<<endl;
 cout<<"\tPress 2: for sign up" <<endl;
 cout<<"\t==> ";
 
 cin>>choice;
 switch(choice)
 {
 	case 1:
 		
 			cout<<"\tEnter your Email : ";
 			cin>>email1;
 			cout<<"\tEnter your Password : ";
 			cin>>password1;
 			if(password1 == password && email1 == email)
 			{
 			cout<<"\n\tLogin Successfully"<<endl;
			}
 			 else
 	    	{
 	        cout<<"\n\tPlease Enter Correct information or sig up\n\n ";
 	        goto q;
			}
 		break; 
	case 2:
		 	cout<<"\tEnter your Email : ";
 			cin>>email;
 			cout<<"\tEnter your Password : ";
 			cin>>password;
 			cout<<"\n\tSign up Successfully"<<endl;
		goto p;
	default :
		cout<<"\n\tERROR !"<<endl;			 		 		
 }	
 cout<<"\n\t\t----SAAD ALI----\n\t"<<endl;
 
 return 0;
}


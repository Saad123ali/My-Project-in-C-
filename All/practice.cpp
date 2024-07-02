#include<iostream>
using namespace std;

int main()
{
	cout<<"\n\t-----QUIZ TEST-----"<<endl;
	int score = 0;
	char answer1, answer2, answer3, answer4, answer5;
	
	cout<<"\n\t\tSelect The Correct Option (A ,B ,C)"<<endl;
	//question 1
	cout<<"\nQuestion 1: What is the capital of France?"<<endl;
	cout<<"\nA : Itlay"<<endl;
	cout<<"\nB : Germany"<<endl;
	cout<<"\nC : Islamabad"<<endl;
	cin>>answer1;
	if(answer1=='A'||answer1=='a')
	{
		cout<<"Correct"<<endl;
		score++;
	}
	else
	{
		cout<<"Wrong !"<<endl;
		cout<<"The Correct answer is Itlay"<<endl;
	}
	//Question 2
	cout<<"\nQuestion 2:What is the largest planet in our solar system?"<<endl;
	cout<<"\nA : Earth"<<endl;
	cout<<"\nB : Pluto"<<endl;
	cout<<"\nC : Jupiter"<<endl;
	cin>>answer2;
	if(answer2=='C'||answer2=='c')
	{
		cout<<"Correct"<<endl;
		score++;
	}
	else
	{
		cout<<"Wrong !"<<endl;
		cout<<"The Correct answer is Jupiter"<<endl;
		
	}
	//Question 3
	cout<<"\nQuestion 3: How many continents are there on Earth?"<<endl;
	cout<<"\nA : 4"<<endl;
	cout<<"\nB : 7"<<endl;
	cout<<"\nC : 3"<<endl;
	cin>>answer3;
	if(answer3=='B'||answer3=='b')
	{
		cout<<"Correct"<<endl;
		score++;
	}
	else
	{
		cout<<"Wrong !"<<endl;
		cout<<"The Correct answer is 7"<<endl;
	}
	//Question 4
	cout<<"\nQuestion 4: Who wrote 'Romeo and Juliet'?"<<endl;
	cout<<"\nA : William Shakespeare"<<endl;
	cout<<"\nB : Bill Gate"<<endl;
	cout<<"\nC : Elon Musk"<<endl;
	cin>>answer4;
	if(answer4=='A'||answer4=='a')
	{
		cout<<"Correct"<<endl;
		score++;
	}
	else
	{
		cout<<"Wrong !"<<endl;
		cout<<"The Correct answer is William Shakespeare"<<endl;
	}
	//Question 5
	cout<<"\nQuestion 5: What is the chemical symbol for water?"<<endl;
	cout<<"\nA : H2O"<<endl;
	cout<<"\nB : C2O"<<endl;
	cout<<"\nC : N2O"<<endl;
	cin>>answer5;
	if(answer5=='A'||answer5=='a')
	{
		cout<<"Correct"<<endl;
		score++;
	}
	else
	{
		cout<<"Wrong !"<<endl;
		cout<<"The Correct answer is William Shakespeare"<<endl;
	}
	
	//score result
	cout<<"\n\tThe Final score :"<<score<<"/5"<<endl;
	// Grading
    if (score == 5) 
	{
        cout << "\nExcellent! You got all questions correct. A+" << endl;
    }
	 else if (score >= 3) 
	{
        cout << "\nGood job! Your grade is B.\a" << endl;
    }
	 else if (score >= 1) 
	{
        cout << "\nYou need some improvement. Your grade is C.\a" << endl;
    }
	 else 
	{
        cout << "Oops! Better luck next time. Your grade is F.\a" << endl;
    }
    
 cout<<"\n\t----SAAD ALI----\n\t"<<endl;
 
 return 0;
}


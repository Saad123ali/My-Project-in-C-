#include <iostream>
#include <string>
using namespace std;

int main() 
{
	cout<<"\n\t------QUIZ TEST------\t\n"<<endl;
    int score = 0;
    char ready;

    cout << "Are you ready for the test? (Enter 'Y' for Yes, 'N' for No): ";
    cin >> ready;

    if (toupper(ready) != 'Y') 
	{
        cout << "\nOkay, maybe next time. Goodbye\n!" << endl;
        return 0;
    }

    // Question 1
    cout << "\nQuestion 1: What is the capital of France?" << endl;
    string answer1;
    cin >> answer1;
    if (answer1 == "Paris" || answer1 == "paris") 
	{
        cout << "Correct!" << endl;
        score++;
    }
	 else
    {
        cout << "\nIncorrect. The correct answer is Paris." << endl;
    }

    // Question 2
    cout << "\nQuestion 2: What is the largest planet in our solar system?" << endl;
    string answer2;
    cin >> answer2;
    if (answer2 == "Jupiter" || answer2 == "jupiter") 
	{
        cout << "Correct!" << endl;
        score++;
    }
	 else 
	{
        cout << "\nIncorrect. The correct answer is Jupiter." << endl;
    }

    // Question 3
    cout << "\nQuestion 3: How many continents are there on Earth?" << endl;
    int answer3;
    cin >> answer3;
    if (answer3 == 7) 
	{
        cout << "Correct!" << endl;
        score++;
    }
	 else 
	{
        cout << "\nIncorrect. The correct answer is 7." << endl;
    }

    // Question 4
    cout << "\nQuestion 4: Who wrote 'Romeo and Juliet'?" << endl;
    string answer4;
    cin>>answer4;
    if (answer4 == "William Shakespeare" || answer4 == "Shakespeare" ||answer4 == "shakespeare") 
	{
        cout << "Correct!" << endl;
        score++;
    }
	 else 
	{
        cout << "\nIncorrect. The correct answer is William Shakespeare." << endl;
    }

    // Question 5
    cout << "\nQuestion 5: What is the chemical symbol for water?" << endl;
    string answer5;
    cin >> answer5;
    if (answer5 == "H2O" || answer5 == "h2o") 
	{
        cout << "Correct!" << endl;
        score++;
    }
	 else 
	{
        cout << "\nIncorrect. The correct answer is H2O." << endl;
    }

    // Display the final score
    cout << "\nYour final score is: " << score << "/5\n" << endl;
    
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
    
    cout<<"\n\tThanks for using"<<endl;

    return 0;
}


 #include <iostream>
using namespace std;

// Function to ask a question and check the answer
bool askQuestion(const string& question, const string& optionA, const string& optionB, const string& optionC, char correctAnswer) {
    cout << question << endl;
    cout << "\nA : " << optionA << endl;
    cout << "\nB : " << optionB << endl;
    cout << "\nC : " << optionC << endl;

    char userAnswer;
    cin >> userAnswer;

    if (userAnswer == correctAnswer || userAnswer == (correctAnswer + 32)) {  // case-insensitive comparison
        cout << "Correct" << endl;
        return true;
    } else {
        cout << "Wrong !" << endl;
        cout << "The Correct answer is " << correctAnswer << endl;
        return false;
    }
}

int main() {
    cout << "\n\t-----QUIZ TEST-----" << endl;
    int score = 0;

    // Question 1
    if (askQuestion("Question 1: What is the capital of France?", "Itlay", "Germany", "Islamabad", 'A')) {
        score++;
    }

    // Question 2
    if (askQuestion("Question 2: What is the largest planet in our solar system?", "Earth", "Pluto", "Jupiter", 'C')) {
        score++;
    }

    // Question 3
    if (askQuestion("Question 3: How many continents are there on Earth?", "4", "7", "3", 'B')) {
        score++;
    }

    // Question 4
    if (askQuestion("Question 4: Who wrote 'Romeo and Juliet'?", "William Shakespeare", "Bill Gate", "Elon Musk", 'A')) {
        score++;
    }

    // Question 5
    if (askQuestion("Question 5: What is the chemical symbol for water?", "H2O", "C2O", "N2O", 'A')) {
        score++;
    }

    // Score result
    cout << "\n\tThe Final score: " << score << "/5" << endl;

    // Grading
    if (score == 5) {
        cout << "\nExcellent! You got all questions correct. A+" << endl;
    } else if (score >= 3) {
        cout << "\nGood job! Your grade is B.\a" << endl;
    } else if (score >= 1) {
        cout << "\nYou need some improvement. Your grade is C.\a" << endl;
    } else {
        cout << "Oops! Better luck next time. Your grade is F.\a" << endl;
    }

    cout << "\n\t----SAAD ALI----\n\t" << endl;

    return 0;
}


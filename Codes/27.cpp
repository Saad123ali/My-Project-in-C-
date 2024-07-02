// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() 
// {
//     srand(time(0)); // Seed for random number generation based on current time

//     int actualValue = rand() % 100 + 1; // Generate a random number between 1 and 100
//     int userGuess;
//     int attempts = 0;

//     cout << "Welcome to the Guessing Game!" << endl;

//     do {
//         cout << "Enter your guess: ";
//         cin >> userGuess;

//         attempts++;

//         if (userGuess == actualValue) 
//         {
//             cout << "Congratulations! You guessed the number correctly in " << attempts << " attempts." << endl;
//             break;
//         } 
//         else if (userGuess < actualValue) 
//         {
//             cout << "Too less! Try again." << endl;
//         } 
//         else 
//         {
//             cout << "Too big! Try again." << endl;
//         }
//     } while (true);

//     return 0;
// }
// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;
// int main()
// {
//     int i,count =1;
//     string str;
//     string reverse;
//     string str1="Hello world!";
//     string join;
//     string lower;
//     cout<<"Enter the string ( minimum 20 characters): ";
//     getline(cin, str);
//     for(int i =str.length()-1; i>=0; i--)
//     {
//         reverse+=str[i];
//     }
//     join = str+" "+str1;
//     for(int i =0; i <join[i]!='\0'; i++)
//     {
//         if(join[i] ==' ')
//         count++;
//     }
//     lower = join;
//     for(int i = 0; i< lower.length(); i++)
//     {
//         lower[i]=tolower(lower[i]);
//     }
//     cout<<"The string you write:"<<str<<endl;
//     cout<<"length of string:"<<str.length()<<endl;
//     cout<<"reverse of string:"<<reverse<<endl;
//     cout<<"The number of words:"<<count<<endl;
//     cout<<"lower of string:"<<lower<<endl;
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     int num = 0;
//     int total = 0;
//     int repeat = 0;
//     cout<<"Enter the number of students:"<<endl;
//     cin>>num;
//     string std[num];
//     cin.ignore();
//     for( int i = 0; i < num; i++)
//     {
//         cout<<"Student name: "<<i+1<<endl;
//         getline(cin, std[i]);
//         total += std[i].length();
//     }
//     for( int i = 0; i < num; i++)
//     {
//         for(int j = 0; j <std[i].length(); j++)
//         {
//             if(std[i][j] == 'a'|| std[i][j] == 'A')
//             {
//                 repeat++;
//             }
//         }
//     }
//     cout<<"Name you enter:"<<endl;
//     for( int i = 0; i<num; i++ )
//     {
//         cout<<std[i]<<endl;
//     }
//     cout<<"Total characters: "<<total<<endl;
//     cout<<"Total number of Repeat A or a :"<<repeat<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int vowel = 0, consonant = 0 ,digit = 0,spaces = 0;
//     string str;
//     cout<<"Write something :"<<endl;
//     getline(cin, str);
//     for(int i = 0; i < str.length();i++)
//     {
//         if((str[i] == 'a'||str[i] == 'e'||str[i] =='i'||str[i] =='o'||str[i] =='u'))
//         {
//             vowel++;
//         }
//         else if((str[i] >= 'a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z'))
//         {
//             consonant++;
//         }
//         else if((str[i] >= '0' && str[i] <='9'))
//         {
//             digit++;
//         }
//         else if (str[i] == ' ')
//         {
//             spaces++;
//         }
//     }
//     cout<<"Vowels: "<<vowel<<endl;
//     cout<<"Consonant: "<<consonant<<endl;
//     cout<<"Digits: "<<digit<<endl;
//     cout<<"Spaces: "<<spaces<<endl;
// }
#include<iostream>
using namespace std;
int main()
{
    int P ,Q;
    cout<<"Enter the First number (P): ";
    cin>>P;
    cout<<"Enter the Second number (Q): ";
    cin>>Q;
    int maxdivisors = 0;
    int numberwithmaxdivisors = P;
    for( int num  = P; num<=Q;num++)
    {
        int divisior = 0;
        for( int i = 0; i <=num; i++ )
        {
            if ( num % i == 0 )
            {
                divisior++;
            }
        }
        if( divisior >maxdivisors)
        {
            maxdivisors = divisior;
            numberwithmaxdivisors = num;
        }
    cout<<numberwithmaxdivisors<<"has maximum of" <<maxdivisors<<" divisiors"<<endl;   
    }
} 
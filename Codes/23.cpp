// #include<iostream>
// #include<string>
// using namespace std;
// int countwords(const string& str)
// {
//     int count = 0;
//     bool word = false;

//     for( int i = 0; i < str.length(); i++)
//     {
//         char c = str[i];

//         if(isalpha(c))
//         {
//             if(!word)
//             {
//                 word = true;
//                 count++;
//             }
//         }
//         else
//         {
//             word = false;
//         }
//     }
//     return count;
// }
// int main()
// {
//     string str;
//     cout<<"Enter the string: ";
//     getline(cin, str);
//     int word = countwords(str);
//     cout<<"nmuber of words in the string"<<word<<endl;
// }
// #include<iostream>
// #include<cctype>
// using namespace std;
// int main()
// {
//     const int max =100;
//     char text[max]={0};
//     cout<<"Enter the line of text : ";
//     cin.getline(text,max);
//     cout<<"Your text is "<<text<<endl;
//     int vowel=0,constant=0;
//     for(int i=0;i<max;i++)
//     {
//         if(isalpha(text[i]))
//         {
//             switch(tolower(text[i]))
//             {
//                 case 'a':
//                 case 'e':
//                 case 'i':
//                 case 'o':
//                 case 'u':
//                     vowel++;
//                     break;
//             default:
//             constant++;
//             }
//         }
//     }
//     cout<<"your text contained: "<<vowel<<" vowel and: "<<constant<<" constant"<<endl;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string line;
//     cout<<"Enter the line of string: ";
//     getline(cin, line);
//     int vowel  = 0, constant = 0;
//     for( int i = 0; i < line.length(); i++)
//     {
//         if(isalpha(line[i]))
//         {
//             switch(tolower(line[i]))
//             {
//                 case 'a':
//                 case 'e':
//                 case 'i':
//                 case 'o':
//                 case 'u':
//                     vowel++;
//                     break;
//             default:
//             constant++;   
//             }
//         }
//     }
//      cout<<"your text contained: "<<vowel<<" vowel and: "<<constant<<" constant"<<endl;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// void count(string &str)
// {
//     int vowel  = 0, constant = 0;
//     for( int i = 0; i < line.length(); i++)
//     {
//         if(isalpha(line[i]))
//         {
//             switch(tolower(line[i]))
//             {
//                 case 'a':
//                 case 'e':
//                 case 'i':
//                 case 'o':
//                 case 'u':
//                     vowel++;
//                     break;
//             default:
//             constant++;   
//             }
//         }
//     }
//      cout<<"your text contained: "<<vowel<<" vowel and: "<<constant<<" constant"<<endl;
// }
// int main()
// {
//     string line;
//     cout<<"Enter the line of string: ";
//     getline(cin, line);
//     count(line);
// }
// #include<iostream>
// #include<string>
// using namespace std;

// void count(string &str) {
//     int vowel = 0, consonant = 0;

//     for(int i = 0; i < str.length(); i++) {
//         if(isalpha(str[i])) {
//             switch(tolower(str[i])) {
//                 case 'a':
//                 case 'e':
//                 case 'i':
//                 case 'o':
//                 case 'u':
//                     vowel++;
//                     break;
//                 default:
//                     consonant++;
//             }
//         }
//     }

//     cout << "Your text contained: " << vowel << " vowel(s) and: " << consonant << " consonant(s)" << endl;
// }

// int main() {
//     string line;
//     cout << "Enter the line of string: ";
//     getline(cin, line);
//     count(line);

//     return 0;
// }
#include<iostream>
#include<cstring>
using namespace std;

void count(const char* str) {
    int vowel = 0, consonant = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(isalpha(str[i])) {
            switch(tolower(str[i])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowel++;
                    break;
                default:
                    consonant++;
            }
        }
    }

    cout << "Your text contained: " << vowel << " vowel(s) and: " << consonant << " consonant(s)" << endl;
}

int main() {
    const int maxSize = 100; // You can adjust the size based on your needs
    char line[maxSize];

    cout << "Enter the line of string: ";
    cin.getline(line, maxSize);

    count(line);

    return 0;
}

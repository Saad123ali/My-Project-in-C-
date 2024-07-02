#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    const int max =100;
    char text[max]={0};
    cout<<"Enter the line of text : ";
    cin.getline(text,max);
    cout<<"Your text is "<<text<<endl;
    int vowel=0,constant=0;
    for(int i=0;i<max;i++)
    {
        if(isalpha(text[i]))
        {
            switch(tolower(text[i]))
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowel++;
                    break;
            default:
            constant++;
            }
        }
    }
    cout<<"your text contained"<<vowel<<"vowel and "<<constant<<"constant"<<endl;
}
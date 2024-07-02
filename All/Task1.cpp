#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int minlength = 20;
    string substring;
    do 
  	{
    cout << "Enter a string (minimum 20 characters): ";
    getline(cin,str);
    if (str.length()>minlength) 
    {
      cout << "String length must be at least 20 characters. Please try again." << endl;
    }
    } while (str.length()>minlength);
    cout << "\nString accepted!" << endl;
    substring = str.substr(6, 6);
    cout << "The substring starting from index 6 and of size 6 characters is: " << substring << endl;
    str.replace(10, 2, "****");
    cout << "The input string after replacing the value '****' starting from position 10, up to 2 characters is: " << str << endl;
    int index = str.find("****");
    if (index != -1) 
    {
    cout << "The location of '****' in the input string is: " << index << endl;
    } 
     else 
    {
    cout << "The value '****' is not present in the input string." << endl;
    }

    cout<<"The length of the String is : "<<str.length()<<endl;
    return 0;
}
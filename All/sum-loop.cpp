 #include <iostream>
using namespace std;

int main() 
{
    int sum = 0;
	cout<<"sum = ";
    for (int i = 2; i <= 50; i += 2) 
	{
        sum += i;
        if (i != 50) 
		{
            cout << i << "+";
        } 
		 else 
		{
            cout << i;
        }
    }

    return 0;
}


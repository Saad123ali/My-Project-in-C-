#include <iostream>
using namespace std;
int main()
{
int score[2][6];
float target = 0, strikerate = 0;
for (int i = 0; i < 2; i++)
{
cout << "Please Enter the Score of over " << i + 1 <<endl;
for (int j = 0; j < 6; j++)
{
cout << "Score on ball " << j + 1 << ": ";
cin >> score[i][j];
target = target + score[i][j];
}
}
strikerate = (target / 12) * 100;
cout << "Strike rate = " << strikerate<<endl;
cout << "Score Required to Draw the match = " << target;
return 0;
}

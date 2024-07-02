 #include <iostream>
using namespace std;
int main()
{
  int size;
  cout << "\nEnter the size of integers : ";
  cin >> size;
  int prime[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the value " << i + 1 << " : ";
    cin >> prime[i];
  }
  int c = 0;
  cout << "\nThe prime Numbers : ";
  for (int i = 0; i < size; i++)
  {
    c = 0;
    for (int j = 1; j <= prime[i]; j++)
    {
      if (prime[i] % j == 0)
      {
        c++;
      }
    }
    if (c == 2)
    {
      cout << prime[i] << " ";
    }
  }
  cout << "\nNon-prime Numbers : ";
  for (int i = 0; i < size; i++)
  {
    int c = 0;
    for (int j = 1; j <= prime[i]; j++)
    {
      if (prime[i] % j == 0)
      {
        c++;
      }
    }
    if (c != 2)
    {
      cout << prime[i] << " ";
    }
  }
  return 0;
}
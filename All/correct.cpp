#include<iostream>
using namespace std;

int main() 
{
  int array[5];
  int i, j, temp;

  for(i=0;i<5;i++) 
  {
    cout<<"Enter the value "<<i+1<<" : ";
    cin>>array[i];
  }

  cout<<"\nThe values you entered: \n";
  for(i=0;i<5;i++) 
  {
    cout<<array[i]<<" ";
  }

  for(i=0;i<5;i++) { // Remove the redundant 'i' after 'i=0;'
    for(j=0;j<4;j++) {
      if(array[j]>array[j+1]) {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }

  cout<<"\nThe sorted array is: ";
  for(i=0;i<5;i++) {
    cout<<array[i]<<" ";
  }

  return 0;
}

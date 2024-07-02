#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j>0;j--){
            if(i>=j){
                cout<<"* "<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=n-1;j>0;j--){
            if(i+j<=n){
                cout<<" *"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    return 0;        
}
}
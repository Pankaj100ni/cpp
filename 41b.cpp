#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<" enter number of row : "<<endl;
    cin>>n;
    cout<<" enter number of column : "<<endl;
    cin>>m;
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            
        if (i==1||i==n||j==1||j==m)
        {
            cout<<" x ";
        }
        else{
            cout<<"   ";
        }
               
        }
        cout<<endl;
    }
  return 0;  
}
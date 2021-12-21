#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    for (int i = 1; i <= num-1; i++)
    {
        for (int j = 1; j <= (num-i+1); j++)
        {
            cout<<" * ";
        }
        for (int j = 1 ; j <= (2*i-1-1); j++)
        {
            
               cout<<"   ";
                   
               
        }
        for (int j = 1; j <= (num-i+1); j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for (int i = num-2; i >= 1; i--)
    {
        for (int j = 1; j <= (num-i+1); j++)
        {
            cout<<" * ";
        }
        for (int j = 1 ; j <= (2*i-1-1); j++)
        {
            
              cout<<"   ";
            
        }
        for (int j = 1; j <= (num-i+1); j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
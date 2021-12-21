d#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num-i; j++)
        {
            cout<<"   ";
        }
         for (int j = 1; j <= num; j++)
        {
            if (j==1||j==num||i==1||i==num)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }
   return 0; 
}
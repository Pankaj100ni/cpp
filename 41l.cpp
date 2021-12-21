#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num-i; j++)
        {
            cout<<" ";
        }
        for (int k = i; k > 0; k--)
        {
            cout<<k;
            
        }
        for (int k = 2; k <= i; k++)       {
            cout<<k;
        }
        for (int j = 1; j <= num-i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
  return 0;  
}
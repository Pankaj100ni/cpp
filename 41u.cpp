#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
for (int i = 1; i <= num; i++)
{
    for (int j = 1; j <= i; j++)
    {
        if (j==1||j==i)
        {
            cout<<"@";
        }
        else
        {
            cout<<" ";
        }
        
        
       
    }
    for (int j = 1; j <= (2*(num-i)); j++)
    {
        cout<<" ";
    }
    for (int j = 1; j <= i; j++)
    {
       if (j==1||j==i)
        {
            cout<<"@";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
}


for (int i = num; i >= 1; i--)
{
    for (int j = 1; j <= i; j++)
    {
       if (j==1||j==i)
        {
            cout<<"@";
        }
        else
        {
            cout<<" ";
        }
    }
    for (int j = 1; j <= (2*(num-i)); j++)
    {
        cout<<" ";
    }
    for (int j = 1; j <= i; j++)
    {
       if (j==1||j==i)
        {
            cout<<"@";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
return 0;
}
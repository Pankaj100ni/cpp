#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
cin>>num;
for (int i = num; i >= 0; i--)
{
    for (int j = 1; j <= num; j++)
    {
        if (i>=j)
        {
            cout<<"   ";
        }
        else
        {
            cout<<" $ ";
        }
        
    }
    cout<<endl;
}
return 0;
}
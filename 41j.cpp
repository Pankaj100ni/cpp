#include<iostream>
using namespace std;
int main(){
    int num, k=1;
    cout<<"enter a number : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int  j = 1; j <= i; j++)
        {
            cout<<" "<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
    
}
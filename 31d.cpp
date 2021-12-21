#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter range"<<endl;
    cin>>a>>b;
    cout<<"prime number between range :"<<endl;
    for (int i = a; i < b; i++)
    {
        int j;
        for ( j = 2; j < i; j++)
        {
           if (i%j==0)
           {
               break;
           }
           
        }
        if (j==i)
        {
            cout<<j<<endl;
        }
        
    }
    
    return 0;
}
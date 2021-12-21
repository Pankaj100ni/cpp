//pascal triangle 
#include<iostream>
using namespace std;
int fact(int a){
    int factorial=1;
    for (int i = 2; i <= a; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k < n-i; k++)
            {
               cout<<" ";
            }
            
        for (int j = 0; j <= i; j++)
        {
            
            
           cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
   return 0; 
}
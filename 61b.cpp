//find prime no between two number
#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int a){
    for (int j = 2; j <= sqrt(a); j++)
    {
        if (a%j==0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){
    int num1 ,num2;
    int count;
    cout<<"Enter two number : ";
    cin>>num1>>num2;
    for (int  i = num1; i <= num2; i++)
    {
        if (isprime(i)== true)
        {
            cout<<i<<endl;
            count++;
        }
        
    }

cout<<"number of prime no between "<<num1<<" and "<<num2<< "is : "<<count<<endl;
return 0;
}
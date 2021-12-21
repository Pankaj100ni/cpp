//Fibonacci sequence.
#include<iostream>
using namespace std;

void fib(int a){
    int t1=0,t2=1,nxt;
    for (int i = 1; i <= a; i++)
{
    cout<<t1<<" ";
    nxt=t1+t2;
    t1=t2;
    t2=nxt;
}
}
int main(){
    int num;
cout<<"enter a number : ";
cin>>num;
fib(num);

return 0;
}
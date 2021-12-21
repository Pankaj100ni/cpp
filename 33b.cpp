#include<iostream>
using namespace std;
int main(){
cout<<"Enter a number "<<endl;
int num;
cin>>num;
if (num>10)
{
    cout<<num<<" is greater than 10"<<endl;
}
if (num<10)
{
    cout<<num<<" is smaller than 10"<<endl;
}
if (num==10)
{
    cout<<num<<" is equal than 10"<<endl;
}
return 0;
}
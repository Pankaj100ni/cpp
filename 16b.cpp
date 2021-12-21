#include<iostream>
using namespace std;
int recurpower(int n , int p){
if (p==0 )
{
   return 1;
}

int power=recurpower(n,p-1);
return n * power;
}

int main(){
int n,p;
cout<<"Enter number and power : ";
cin>>n>>p;
cout<<recurpower(n,p);
    return 0;
}
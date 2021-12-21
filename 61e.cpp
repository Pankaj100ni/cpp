//nCr
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
    int n,r;
    cout<<"Enter valude of N and R : ";
cin>>n>>r;
int ncr=fact(n)/(fact(r)*fact(n-r));
cout<<ncr<<endl;
return 0;
}
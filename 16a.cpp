//recursion sum
#include<iostream>
using namespace std;
int recursesum(int n){
if (n==0)
{
    return 0;
}

int prevsum=recursesum(n-1);
return n+prevsum;

}

int main(){

    int n;
    cin>>n;
     cout<<recursesum(n)<<endl;

     return 0;

}
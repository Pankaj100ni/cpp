#include<iostream>
using namespace std;
int frien(int n){
if (n==0||n==1||n==2)
{
    return n;
}
return frien(n-1)+frien(n-2)*(n-1);
}
int main(){
    cout<<frien(4);
    return 0;
}
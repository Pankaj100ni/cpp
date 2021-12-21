#include<iostream>
using namespace std;
int sum(int n){
int sm=0;
for (int i = 1; i <= n; i++)
{
    sm+=i;
}
return sm;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"sum is "<<sum(num)<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int numberofone(int n){
    int count=0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
    
}
int main(){
    int num;
    cin>>num;
    cout<<numberofone(num);
    return 0;
}
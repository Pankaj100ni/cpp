//find Nth fibonaricc number
#include<iostream>
using namespace std;
int  fabolic(int n){
    if (n==0||n==1)
    {
        return n;
    }
    


    return fabolic( n-1)+fabolic(n-2);

}
int main(){
    int n;
    cin>>n;
    cout<<fabolic(n)<<" ";
    return 0;
}
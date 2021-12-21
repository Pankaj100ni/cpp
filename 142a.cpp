#include<iostream>
using namespace std;
bool to_power(int n){
    return(n&&!(n&(n-1)));
}
int main(){
    int num;
    cin>>num;
    cout<<to_power(num);
    return 0;
}
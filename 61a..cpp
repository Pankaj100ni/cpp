//sum of two number   
#include<iostream>
using namespace std;
void prt (int a){
    cout<<a<<endl;
}
int add (int x, int y){
    prt(x);
    prt(y);
    int sum= x+y;
    return sum;
}
int main(){
    int num1,num2;
    cout<<"Enter two number : "<<endl;
    cin>>num1>>num2;
     cout<<"sum of number : "<<endl<<add(num1,num2)<<endl;
    return 0;
}
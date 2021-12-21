#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"enter value of a number ";
    cin>>a;
    b=2;
    // cout<<"next no : "<< ++a<<endl;
    // cout<<"previous no : "<< --a<<endl;
    c= (a + b + a++) + b++ + ++a + ++b + ++a;
    cout<<c<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a; 
    a=2;
    cout<<"size of integer "<<sizeof(a)<<endl;
    float b;
    b=3.23;
    cout<<"size of float "<<sizeof(b)<<endl;
    bool c;
    cout<<"size of boolan "<<sizeof(c)<<endl;
    char d;
    cout<<"size of character "<<sizeof(d)<<endl;
    short int si;
    si=2;
    cout<<"size of short integer "<<sizeof(si)<<endl;
    long int li;
    li=2;
    cout<<"size of long integer "<<sizeof(li)<<endl;
    return 0;
}
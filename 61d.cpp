//factorial of a given number.
#include<iostream>
using namespace std;
int fact(int a){
int fct=1;
for (int i = 2  ; i <= a; i++)
{
     fct=fct*i;

}
return fct;

}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
int ans =  fact(num);
cout<<ans<<endl;
    return 0;
}
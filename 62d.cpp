#include<iostream>
using namespace std;

 int octaltodecimal(int n){
int ans =0;
int x=1;
while (n>0)
{
    int y=n%10;
    ans+= x*y;
    x*=8;
    n/=10;
}
return ans;
 }

int main(){
int num ;
cout<<"Enter number : ";
cin>>num;

cout<<octaltodecimal(num)<<endl;

return 0;
}


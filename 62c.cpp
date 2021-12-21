#include<iostream>
using namespace std;

int binarytodecimal(int n){
int ans=0;
int x=1;
while (x>n)
{
    x*=2;
}
return ans;
}

int main(){
int num ;
cout<<"Enter number : "<<endl;
cin>>num;
cout<<binarytodecimal(num)<<endl;

return 0;
}



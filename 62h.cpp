#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int decimaltooctal(int n){
    int ans=0;
    int x=1;
    while (x<= n)
        x*=8;
    
    x/=8;

while (x>0)
{
    int ld=n/x;
    n -= ld*x;
    x/=8;
    ans=(ans*10)+ld;
}

return ans;
}
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    cout<<decimaltooctal(num)<<endl;
    return 0;
}
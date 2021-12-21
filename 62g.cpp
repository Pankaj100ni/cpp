#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int decimaltobinary(int n){
    int ans=0;
    int x=1;
    while (x<= n)
            x*=2;
        
        x/=2;
   
    while (x>0)
    {
        int ld=n/x;
        n -= ld*x;
        x/=2;
        ans=(ans*10 )+ld;
    }
    
    
   return ans;

}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<decimaltobinary(num)<<endl;

return 0;

}
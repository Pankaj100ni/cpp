#include<iostream>

using namespace std;
int knapswap(int wt[],int value[],int n,int w){
    if (n==0||w==0)
    {
        return 0;
    }
    if (wt[n-1]>w)
    {
        return knapswap(wt,value,n-1,w);
    }
     return  max(knapswap(wt,value,n-1,w-wt[n-1]) + value[n-1] , knapswap(wt,value,n-1,w));
}
int main() {
    int wt[]={10,20,30};
    int value[] = {100,50,150};
   int  w=50;
   int n=3;
   cout<<knapswap(wt,value,n,w);
return 0;
}
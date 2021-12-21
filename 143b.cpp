#include<iostream>
using namespace std;
int setBit(int num,int n){
    return ((num&(1<<n))!=0);
}
void unique2(int arr[],int num){
    int xorsum=0;
    for (int i = 0; i < num; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;

int setbit=0;
int pos=0;
while (setbit!=0)
{
    setbit=xorsum&1;
    pos++;
    xorsum=xorsum>>1;

}

int newxor=0;
for (int i = 0; i < num; i++)
{
    if (setBit(arr[i],pos-1) )
    {
       newxor=newxor^arr[i];
    }
    
}
cout<<newxor<<endl;
cout<<(newxor^tempxor)<<endl;


}
int main(){
    int arr[]={1,2,3,1,2,3,5,8};
    unique2(arr,8);

    return 0;
}
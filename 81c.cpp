//binarysearch
#include<iostream>
using namespace std;
int binarysearch(int array[],int key,int n){
int s=0;
int ld=n;
for (int i = s; i < ld; i++)
{
    int mid =s+ld/2;
    if (key==array[mid])
    {
        return mid;
    }
    else if (key>array[mid])
    {
       s=mid+1;

    }
    else
    {
        ld=mid-1;
    }
   
}
    return -1;
}
int main(){
    int n;
    cin>>n;
   
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(array,key,n)<<endl;
    return 0;
}
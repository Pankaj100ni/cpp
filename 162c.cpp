#include<iostream>
using namespace std;
int fstocc(int arr[],int n,int i,int key){
    
    if (i==n)
    {
        return -1;
    }
    
if (arr[i]==key)
{
    return i;
}
return fstocc(arr,n,i+1,key);
}

int lstocc(int arr[], int n, int i, int key){
if (i==n)
{
    return -1;
}
int restarr =lstocc(arr,n,i+1,key);
if (restarr != -1)
{
    return restarr;
}

if (i==key)
{
    return i;
}
return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int i=0;
    cout<<"first place : "<<fstocc(arr,n,i,key)<<endl;
 cout<<"last place : "<<lstocc(arr,n,i,key)<<endl;
    return 0;
}
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<endl;
    int minno=INT_MAX;
    int maxno=INT_MIN;
    for (int i = 0; i < n; i++)
    {
         maxno=max(maxno,array[i]);
         minno=min(minno,array[i]);
    }
    
cout<<"minimum no "<<minno<<endl<<"maximum no "<<maxno<<endl;
}
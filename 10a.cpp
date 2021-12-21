#include<iostream>
using namespace std;
int main(){
int n;
cout<<"number of character : ";
cin>>n;
char arr[n+1];
cout<<"Enter name : ";
cin>>arr;

//check palidrom
bool check=1;
for (int i = 0; i < n; i++)
{
    if (arr[i]!=arr[n-1-i])
    {
        check=0;
        break;
    }
    
}
if (check==true)
{
    cout<<"array is palidrom"<<endl;
}


return 0;
}
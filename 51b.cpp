//153
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num;
cout<<"enter num : ";
cin>>num;
int sum=0;
int originalnum=num;

while (num>0)
{
    int ld= num%10;
    sum+= pow(ld,3);
    num=num/10;


}
if (originalnum==sum)
{
    cout<<"Enter num is aristotal num ";
}
else
{
    cout<<"Enter num is  not aristotal num ";
}


    return 0;
}
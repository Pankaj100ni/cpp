#include<iostream>
using namespace std;
int coutpath(int s,int e){
    if (s>e)
    {
        return 0;   
    }
    if (s==e)
    {
        return 1;   
    }
    int count =0;
    for (int i = 1; i < 6; i++)
    {
        count+= coutpath(s+i,e);
    }
   return count; 
}
int main(){
cout<<coutpath(0,4)<<endl;
    return 0;
}
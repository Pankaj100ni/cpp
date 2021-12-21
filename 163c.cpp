#include<iostream>
using namespace std;
void towerofhanoi(int n,char str ,char dest,char help ){
    if (n==0)
    {
        return;
    }
    towerofhanoi(n-1,str,help,dest);
    cout<<"move from "<<str <<" to "<<dest<<endl;;
    towerofhanoi(n-1,help,dest,str);
}
int main()
{
    
    towerofhanoi(10,'A','B','C');
    return 0;
}
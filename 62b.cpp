#include<iostream>
using namespace std;



int max(int x,int y ,int z){
    int mx;
    (x>y)?mx=x:mx=y;
    (mx>z)?mx=mx:mx=z;
return mx;    
}

int main(){
    int x,y,z;
    cout<<"Enter x , y , z"<<endl;
cin>>x>>y>>z;
int a=max(x,y,z);
int b,c;
if (a==x)   
{
    b=y;
    c=z;

}
else if (a==y)
{
    b=x;
    c=z;       
}

else
{
    b=x;
    c=y;
}
cout<<"A = "<<a<<" B = "<<b<<" C = "<<c<<endl;
if ((a*a)==(b*b)+(c*c))
    {
     cout<<"yes it's pythagorus triple "<<endl;  
    }
    else 
     {
         cout<<"it's not pythagorus triple "<<endl;
     }

    

return 0;
}

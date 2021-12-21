#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int cr=0,mx=0;
    int st=0,maxst=0;
    while (1)
    {
        if (arr[i]==' '|| arr[i]=='\0')
        {
            if (cr>mx)
            {
                maxst=st;
                mx=cr;  
            }
           
            cr=0;
        }
else
{
    cr++;
    }
if (arr[i]=='\0')
        {
           break;
        }
        
      

     i++;
    }
// cout<<arr<<endl;  
       
// for (int i = 0; i < mx; i++)
// {
//     cout<<arr[maxst+i];
// }
// cout<<endl;
 cout<<mx<<endl;
    return 0;
}
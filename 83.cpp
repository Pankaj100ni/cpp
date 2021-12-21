#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pan[n];
    for (int i = 0; i < n; i++)
    {
        cin>>pan[i];
    }
    
    //selectshort
    // for (int i = 0; i < n-1; i++){
    //    for (int j = i+1   ; j < n; j++){
    //       if (pan[i]>pan[j]) {
    //          int temp=pan[i];
    //          pan[i]=pan[j];
    //          pan[j]=temp;
    //         }
    //     }
    // }
    
    //bubble short
    // int counter=0;
    // while (n-1>counter)
    // {
    //     for (int i = 0; i < n-counter-1; i++)
    //     {
    //         if (pan[i]>pan[i+1])
    //         {
    //             int temp =pan[i];
    //             pan[i]=pan[i+1];
    //             pan[i+1]=temp;
    //         }
            
    //     }
    //     counter++;
    // }
    
    //insertshort
for (int i = 1; i < n; i++)
{
    int current= pan[i];
    int j=i-1;
   while (pan[j]>current && j>=0)
   {
       pan[j+1]=pan[j];
       j--;
       
   }
   pan[j+1]=current;

}


    

    for (int i = 0; i < n; i++)
    {
        cout<<pan[i]<<" ";
    }
    cout<<endl;

    return 0;
}
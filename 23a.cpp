#include<iostream>
using namespace std;
int main(){

// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif

    int saving;
    cout<<"Enter saving amount \n";
    cin>>saving;
if (saving>=10000)
{
    cout<<"move to shimla "<<endl;
}
else if (saving>=5000)
{
    cout<<"Move to chandigarh"<<endl;

}
else
{
    cout<<"Move to hisar"<<endl;
}
return 0;
}
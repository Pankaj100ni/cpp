#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    sort(n.begin(),n.end(),greater<int>());
     cout<<n<<endl;
}
#include<iostream>
using namespace std;
void gernate(string s,string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
char ch=s[0];
string ros= s.substr(1);
gernate(ros,ans+ch);
gernate(ros,ans);    

}
int main(){
    gernate("abc","");
    return 0;6;
}
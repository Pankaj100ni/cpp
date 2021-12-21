#include<iostream>
using namespace std;
void gernate(string s, string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    int code =ch;
    string ros=s.substr(1);
    gernate(ros,ans+ch);
    gernate(ros,ans);
    gernate(ros,ans+ to_string(code));
}
int main(){
    gernate("abc","");
    return 0;
}
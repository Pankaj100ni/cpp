#include<iostream>
using namespace std;
string movex(string s){
    if (s.length()==0)
    {
        return "";
    }
     char ch= s[0];
    string rowi= movex(s.substr(1));
  
   
    if (ch=='x')
    {
        return rowi+ch;
    }
    
    return ch+rowi;
}
int main(){
    string s="nludhsnjgdfxhhxhohsxshoshxuhsxuho";
    cout<<movex(s)<<endl;
    return 0;
}
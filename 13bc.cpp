#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s="hsaiigougrusguhsiubueakallaaaaa";
int freq[26];
for (int i = 0; i < 26; i++)
{
    freq[i]=0;
}
for (int i = 0; i < s.size(); i++)
{
    freq[s[i]-'a']++;

}
char ans='a';
int maxfr=0;
for (int i = 0; i < 26; i++)
{
    if (freq[i]>maxfr)
    {
        maxfr=freq[i];
        ans=i+'a';

    }
    
}
 cout<<"Frequency : " <<maxfr<< endl<<"Character : "<<ans<<endl;

    return 0;
    }
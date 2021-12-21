#include<iostream>
using namespace std;
void chara(char chr){
    if (chr>='a'&& chr<='z'||chr>='A'&& chr<='Z')
    {
        cout<<"character is a alphabet"<<endl;
    }
    else
    {
        cout<<"character is not a alphabet"<<endl;
    }
    
}
int main(){
    char ch;
    cin>>ch;
    chara(ch);
    return 0;
}

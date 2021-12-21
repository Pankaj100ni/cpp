#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
//     //input string
// string s;
// cin>>s;
// cout<<s<<endl;


// //defind string 
// string str(5,'n');
// cout<<str<<endl;


// string sl;
// getline(cin,sl);
// cout<<sl<<endl;

string s1="mental",s2="cartoon";
cout<<s1.append(s2)<<endl;

s2.assign("pankaj");//assign
cout<<s2<<endl;
cout<<s2.at(3)<<endl;//at

s1.clear();//clear
cout<<s1<<endl;
s1.assign("jaan");
cout<<s1.append(s2)<<endl;//append
cout<<s1.compare(s2)<<endl;//s2>s1 give possitive

s1.clear();
if (s1.empty())   //empty
{
    cout<<"s1 is empty"<<endl;
}

s2.erase(2,2);//erase(starting no, how many no)
cout<<s2<<endl;
cout<<s2.find("aa")<<endl; //find


s2.insert(2,"nk");
cout<<s2<<endl;
cout<<s2.length()<<endl;// length
s2.resize(3);  //resize
cout<<s2<<endl;
cout<<s2.size()<<endl;//size

string s3="mentalcartoon";
cout<<s3.substr(3,6)<<endl;//substr

string s4="2323";
int x=stoi(s4);  // stoi use to string to int
cout<<x+2<<endl;

s4=to_string(x);   //to_string for int to string 
cout<<s4.append("pankaj")<<endl;


sort(s4.begin(),s4.end()); //sort for sorting
cout<<s4<<endl;

return 0;
}
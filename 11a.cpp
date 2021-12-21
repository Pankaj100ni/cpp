#include<iostream>
using namespace std;
int incr (int *ptr){
 return ++*ptr;
}
int main(){
  int a=2;
  int *ptr=&a;
  incr(ptr);
  cout<<a<<endl;

    return 0;
}
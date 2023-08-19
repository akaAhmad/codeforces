#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
 
int main(){
 short lines,x=0;  string s;
 
 cin>>lines;
  
 for(short i=0;i<lines;i++) {
  cin>>s;
  if (s=="X++" || s=="++X")
  x++;
  else x--;
 }
 
 cout<<x;
 
}
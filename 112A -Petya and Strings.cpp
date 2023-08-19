#include<iostream>
#include<ctype.h>
using namespace std;
 
void upToLow(string &text){
    int c; string s=text; text="";
    for (int i=0;i<s.length();i++){
        c=s[i];
        text+=tolower(c);
    }
}
 
int main(){
    string s1,s2;
    cin>>s1>>s2;
    upToLow(s1); upToLow(s2);
 
    if(s1>s2)
    cout<<1;
    else if(s1==s2)
    cout<<0;
    else 
    cout<<-1;
}
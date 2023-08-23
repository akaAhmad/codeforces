#include<iostream>
#include<set>
using namespace std;
#define loop(n) for (int i=0;i<n;i++)


int main(){
    string s;
    set<char>ss;
    cin>>s;
    loop(s.length()){
      ss.insert(s[i]);
    }
    if(ss.size() % 2 ==0)
    cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}
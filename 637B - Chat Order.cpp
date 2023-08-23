#include<iostream>
#include<map>
#include<vector>
#include<stack>
using namespace std;

#define loop(n) for (size_t i = 0; i < n; i++)

int main(){

    int n; cin>>n;

    stack<string>s;
    
    loop(n){
        string name;
        cin>>name;
        s.push(name);
    } 
    map<string,int>m;
    loop(n){

        if (m[s.top()]==0) cout<<s.top()<<"\n";
        m[s.top()] = 1;
        s.pop();

    }
}
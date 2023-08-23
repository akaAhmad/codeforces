#include<iostream>
using namespace std;

int main(){
    int tCase; cin>>tCase;

    while(tCase--){
        string line;
        cin>>line;

        if(line.length()%2!=0)
        cout<<"NO";
        else{
            if(line[0]==')' || line[line.length() - 1]=='(')
            cout<<"NO";
            else 
            cout<<"YES";
        }
        cout<<"\n";
    }
}
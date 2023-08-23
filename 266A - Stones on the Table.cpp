#include<iostream>
#include<set>
#include<vector>
#include <algorithm>
using namespace std;
#define loop(n) for (int i=0;i<n;i++)

int main(){
    int n,counter=0;
    string s;
    cin>>n>>s;

    loop(n){
        if(s[i]==s[i + 1])
        counter++;
    }
    cout<<counter;
}
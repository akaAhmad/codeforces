#include<iostream>
#include <vector>
#include<set>
#include<map>
#include<utility>
#include <algorithm>

using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

int main(){
    int n,slen,result=0;

    map<int ,int >m;
    map<int ,int >::iterator it;
    cin>>n;

    loop(n){
        cin>>slen;
        m[slen]++;
    }

    for(it=m.begin(); it != m.end();it++){
        
        result=max(result,(it->second));}

    cout<<result;
    
}
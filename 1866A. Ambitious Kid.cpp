#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for (ll i=0;i<n;i++)

int main(){

    ll n,data;
    cin>>n;

    vector<ll>v;//(n),vSorted(n);
    
    loop(n){
        cin>>data;
        
        v.push_back(abs(data));
    }

    sort(v.begin(),v.end());

    cout<<v[0];


}
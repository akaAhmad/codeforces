#include<iostream>  
#include<vector>
#include<algorithm>

#define revloop(n) for (int i=n-1;i>=0;i--)
#define loop(n) for (int i=0;i<n;i++)
#define vi vector<int>
using namespace std;

int main(){
    int n;
    cin>>n;
    vi v(n);
    loop(n) cin>>v[i];
    sort(v.begin(),v.end());
    int s=0,d=0;
    
    revloop(n){
        s+=v[i];
        --i;
        if(i>=0)
        d+=v[i];
        else
         break;
    }

    cout<<s<<" "<<d;
}

int noise(){
    
}
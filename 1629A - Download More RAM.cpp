#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)


int main(){

    int tCase; 
    cin>>tCase;
    
    while(tCase--){
        int n, k; 
        cin>>n>>k;

        vector<pair<int, int>>v(n);

        
        loop(n) cin>>v[i].first;
        loop(n) cin>>v[i].second;
      
        sort(v.begin(), v.end());
        
        int ram=k;
        loop(n){
            if(ram < v[i].first){break;}
            ram += v[i].second;
        }

        cout<<ram<<"\n";
    }

}
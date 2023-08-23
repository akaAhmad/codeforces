#include<iostream>
#include<algorithm>
using namespace std;

#define loop(n) for(size_t i = 0; i < n; i++)
#define loopOne(n) for(size_t i = 1; i < n; i++)

int main(){

    
    
        int tCase;
        cin>>tCase;
        while (tCase--){
        
        int n; 
        cin>>n;
        int arr[n],previos[n];
        
        loop(n) 
        cin>>arr[i];

        sort(arr,arr+n);

        previos[0]=0;
        int mn=INT_MAX;
        loopOne(n){
            previos[i]=arr[i]-arr[i - 1];

            if(i>=2)
                mn=min(mn,previos[i]+previos[i - 1]);
            
        }
        cout<<mn<<"\n";
        }

        return 0;
    
    
}
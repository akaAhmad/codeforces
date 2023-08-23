#include<iostream>  // i didn't get it :(
#include<vector>
#include<algorithm>

#define loop(n) for (int i=0;i<n;i++)

#define vi vector<int>
using namespace std;


int main(){
    int n,sum=0;
    cin>>n;
    vi v(n);
    
    loop(n){
        cin>>v[i];
    } 

    sort(v.begin()+1,v.end());
    
   
    int counter =v[0]; // hold first element to consider it as counter // 2
    
    while (counter!=0){
        sum += v[n- counter];
        counter--;
    }
    

    cout<<sum;

} 



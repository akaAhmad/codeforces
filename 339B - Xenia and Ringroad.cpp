#include<iostream>
using namespace std;
int main()
{
    int64_t n,m,x,i,t=0,v=1;
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        cin>>x;
        t+=(x-v+n)%n;
        v=x;
        
    }
    cout<<t;
    return 0;
}
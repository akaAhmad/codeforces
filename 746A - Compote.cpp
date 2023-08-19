#include<iostream>
using namespace std;
 
 
int main(){
    int l,a,p,i=0;
 
    cin>>l>>a>>p;
    
    if (p<4 || a<2 || l<1)
    cout<<0;
    else {
        while(!(p<4 || a<2 || l<1)){
            p-=4; a-=2; l--;
            i++;
 
        }
        cout<<i*7;
 
    }
 
}
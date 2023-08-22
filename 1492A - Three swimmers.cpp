#include<iostream>
#include<vector>
#include<stack>
#include<math.h>
#include<algorithm>

using namespace std;
int main(){
    int tCase;
    cin>>tCase;
    while (tCase--){
        long long int p,a,b,c;
        cin>>p>>a>>b>>c;
        
        long long int x,y,z;
        x = a-p%a;
        y = b-p%b;
        z = c-p%c;

        if(p%a==0 || p%b==0 || p%c==0) cout<<"0"<<"\n";
        else 
            cout << min(x, min(y, z)) << "\n";
        
    }
}
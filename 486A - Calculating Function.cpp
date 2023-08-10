#include<iostream> //done
#include<vector>
#include<utility>
#include<algorithm>
#include<math.h>
using namespace std;

#define loop(n) for(ll  i=0;i<n;i++)
#define ll long long


int main(){
    ll x;
    cin>>x;

    if (x%2==0)
    cout<<x/2;
    else{
        x++;
        cout<<(-1)*(x/2);
    }
}

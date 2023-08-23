#include<iostream> 
#include<set>
using namespace std;
#define loop(n) for (int i=1;i<=n;i++)

int main(){
    int x;
    cin>>x;

    if(x<=5)
    cout<<1;
    else if(x%5==0)
    cout<<x/5;
    else cout<<(x/5)+1;
}
#include<iostream> 
#include<set>
using namespace std;
#define loop(n) for (int i=1;i<=n;i++)



int main(){
    int k,n,w,total=0;
    cin>>k>>n>>w;
    loop(w){
        total+=k*i;
    }
    total-n>=0?cout<<total-n:cout<<0;
}
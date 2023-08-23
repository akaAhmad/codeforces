#include<iostream>
#include <vector>
#include<set>
#include <algorithm>

using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

int main(){
    
    long long n,x,sum1=0,sum2=0,sum3=0;

    cin>>n;
    
    loop(n){
        cin>>x;
        sum1+=x;
    }
    loop(n - 1){
        cin>>x;
        sum2+=x;
    }
    
    loop(n - 2){
        cin>>x;
        sum3+=x;
    }

    cout<<sum1-sum2<<"\n"<<sum2-sum3;
    
}
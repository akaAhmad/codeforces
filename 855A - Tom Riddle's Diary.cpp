#include<iostream>
#include <vector>
#include<set>
#include<map>
#include<utility>
#include <algorithm>

using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

int main(){

   int n,flag;
   cin>>n;
   string arrNames[n];

   loop(n){
    flag=0;

    cin>>arrNames[i];
    k_loop(i){
        if(arrNames[i]==arrNames[k]){
            flag=1; break;
        }
    }

    if(flag!=0)
    cout<<"YES\n";
    else cout<<"NO\n";

   }

}
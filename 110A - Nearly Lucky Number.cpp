#include <iostream> 
using namespace std;

int main(){

 long long x,counter =0; cin>>x;

 while(x!=0){
    if (x%10==7 || x%10==4)
    counter++;
    x/=10;
 }

 counter==7 || counter==4 ? cout<<"YES":cout<<"NO";


}
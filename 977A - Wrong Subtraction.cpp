#include<iostream> //DONE
#include<set>
using namespace std;
#define loop(n) for (int i=0;i<n;i++)


int main(){
    int number,k;
    cin>>number>>k;
    loop(k)
        number%10==0?number/=10:number--;
   cout<<number;
}
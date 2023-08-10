#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

#define loop(n) for (int i = 0; i < n; i++)

int main(){

    int n,x,total=0,max=1;
    scanf("%d",&n);
   vector<int>freq(1001);

   loop(n){
     scanf("%d",&x);
    freq[x]++;
   }
   
   loop(1001){
    if(freq[i]) 
    total++;

    if(freq[i]>max)
    max=freq[i];

   }

   printf("%d %d",max,total);

   

   
   
}
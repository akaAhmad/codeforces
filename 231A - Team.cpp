#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
 short x,arr[3],count=0;
 cin>>x;
 
 for (int i=0;i<x;i++){
  for (int v=0;v<3;v++){
    cin>>arr[v];
  }
  if ((arr[0] && arr[1]) == 1 || (arr[0] && arr[2]) == 1 || (arr[0] && arr[2]) == 1 || (arr[1] && arr[2]) == 1)
  count++;
 }
 cout<<count;
 
}
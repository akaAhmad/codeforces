#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    cin>>arr[i]; //2 3 4 1
for (int k=0;k<n;k++)
for (int j=0;j<n;j++)
   if (k==arr[j] - 1)
   cout<<j + 1<<" ";
    
 
    
}
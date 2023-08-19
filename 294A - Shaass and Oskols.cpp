
#include<iostream>
using namespace std;
 
int main()
{
    short n,killed,nWire,location,i=0;
    cin>>n;
    short arr[n];
    for (;i<n;i++)
    cin>>arr[i];
    cin>>killed;
   
    for (i=0;i<killed;i++){
        cin>>nWire>>location;
        arr[nWire]+=(arr[nWire - 1]-location);
        arr[nWire - 2]+=(location- 1);
        arr[nWire - 1]=0;
        
    } 
    
    for (i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
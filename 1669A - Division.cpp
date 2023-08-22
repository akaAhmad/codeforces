#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i=0;i<n;i++){
        
         if(arr[i] <= 1399)
        cout<<"Division 4\n";
        else if (1400 <= arr[i] && arr[i]<= 1599)
        cout<<"Division 3\n";
        else if(1600 <= arr[i] && arr[i]<=1899)
        cout<<"Division 2\n";
        else if (1900<=arr[i])
        cout<<"Division 1\n";
        
    }
}
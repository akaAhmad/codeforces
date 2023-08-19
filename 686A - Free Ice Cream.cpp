#include <iostream>
using namespace std;
 
int main()
{
    int n,kid=0;
    int64_t x;
    cin>>n>>x;
 
    int64_t arrInt[n];
    string arrChar[n];
    for (int i=0;i<n;i++)
    cin>>arrChar[i]>>arrInt[i];
    for (int i=0;i<n;i++){
          if (arrChar[i]=="-")
          if (arrInt[i]<=x)
            x-=arrInt[i];
            else
            kid++;
           
            
        else if(arrChar[i]=="+")
        x+=arrInt[i];
        
        
    }
 cout<<x<<" "<<kid;
}
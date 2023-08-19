#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main()
{
   string x;
  cin>>x;
  sort (x.begin(), x.end());
for (int i=0;i<x.length();i++){
    if(x[i]!='+')
    cout<<x[i];
    if (i!=x.length()- 1 && x[i]!='+')
    cout<<"+";
    }
    
}
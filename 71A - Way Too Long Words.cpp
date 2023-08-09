#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s[n];
    for (int i=0;i<n;i++)
    cin>>s[i];
    
    for (int i=0;i<n;i++){
        if (s[i].length()>10){
            string x=s[i];
            cout<<x[0]<<x.length() - 2<<x[x.length() - 1]<<endl;
        }
        else
        cout<<s[i]<<endl;
        
    }

 
}
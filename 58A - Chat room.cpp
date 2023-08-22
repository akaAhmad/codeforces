#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    string hello="hello";
    string s;
    cin>>s;
    int sLength=s.length();
 
    int x=0,count=0;
 
    for(int i=0;i<sLength;i++){
        if(s[i]==hello[x]){
           x++;
            count++;
        }
    
   }

       if(count==5)
       cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    

}
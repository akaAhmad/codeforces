#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
   
    int n,n2,sum;
    cin>>n>>n2;
    sum=n+n2;
    string s,s2,sum_str;
    
    s=to_string(n); 
    s2=to_string(n2);
    sum_str=to_string(sum);
     
   
   s.erase(remove(s.begin(),s.end(),'0'),s.end());
   s2.erase(remove(s2.begin(),s2.end(),'0'),s2.end());
   sum_str.erase(remove(sum_str.begin(),sum_str.end(),'0'),sum_str.end());

   n=stoi(s);
   n2=stoi(s2);

   sum=n+n2;

   sum==stoi(sum_str)?cout<<"YES":cout<<"NO";
}
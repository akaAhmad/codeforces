#include<iostream>
#include<map>
#include<vector>
#include<stack>
#include<set>
#include<unordered_map>
using namespace std;

#define loop(n) for (int i = 1; i <=n; i++)
#define jloop(n,intial) for (int j = intial; j < n; j++)




int main(){
   
   map<int, int> mp;
   int n,k,x;
   cin>>n>>k;
   
   loop(n){
      cin>>x;
      mp[x] = i;

   } 
   

   if(mp.size() < k)
      cout << "NO";
   
   else{
      cout <<"YES"<<endl;
      map<int, int>::iterator it;
      
      for(it = mp.begin();it!=mp.end(); it++)
      {
         cout << it->second <<" ";
         if(--k == 0)
         break;
      }

   }
}

    






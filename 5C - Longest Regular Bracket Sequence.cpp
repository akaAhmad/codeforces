#include<iostream>
#include <vector>
#include<set>
#include<map>
#include<stack>
#include<utility>
#include <algorithm>

using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

int main()
{
      int count=0,k;
      string s;
      cin>>s;
        stack<int>p;
        p.push(-1);


         loop(s.length())
         {
         
             if(s[i]=='(')  p.push(i);
             else
             {
                 p.pop();
                 if(!p.empty() )
                 {
                int top= i-p.top();


                 if(top>count)count=top, k=1;

                 else if(top==count)k++;
                 }
                 else p.push(i);
             }

         }

    if(count!=0)
    cout<<count<<" "<<k<<"\n";
    else cout<<"0 1\n";

return 0;
}
#include<iostream> //DONE
#include <vector>
#include<set>
#include<stack>
#include<map>
#include<utility>
#include <algorithm>

using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

int main(){
    int x,in; cin>>x;

    set<int>s;
    while (x--)
    {
        cin>>in;
        s.insert(in);    
    }
     if (s.size()<2)
     cout<<"NO";

   else{set<int>::iterator it = s.begin();
    it++;
    cout<<*it<<"\n";}
    



}
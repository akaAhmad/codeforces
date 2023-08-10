#include<iostream>
#include<map>
using namespace std;

int main ()
{
    string s1, s2;
    int counter = 0;
    cin>>s1>>s2;
    map<char, int> mp1,mp2;
    for(auto el : s1)
        mp1[el]++;
   
    for(auto el : s2)
        mp2[el]++;
    
    for(auto el : mp2) {
        if (mp1[el.first] == 0){
            counter = 0;
            break;
        }
        counter += min(el.second, mp1[el.first]);
    }
    if (!counter)
       cout<<"-1";
    else
      cout<<counter;
  
    return 0;
}
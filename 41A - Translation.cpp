#include<iostream> //DONE
#include<set>
#include<string>
#include<algorithm>
using namespace std;
#define loop(n) for (int i=1;i<=n;i++)

int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    reverse(s2.begin(), s2.end());
    s1==s2?cout<<"YES":cout<<"NO";
    //  cout<<s2;
}
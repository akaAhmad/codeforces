#include<iostream> //DONE
#include<set>
using namespace std;
#define loop(n) for (int i=0;i<n;i++)

int main(){
    string s;
    int a=0,d=0,n;

    cin>>n>>s;

    loop(n)
        s[i]=='D'?d++:a++;
    
    if(d==a)
    cout<<"Friendship";
    else if (d>a)
    cout<<"Danik";
    else cout<<"Anton";
}
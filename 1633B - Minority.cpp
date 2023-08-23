#include<iostream>
#include<algorithm>
using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define jloop(n,intial) for (int j = intial; j < n; j++)

int main() {

	
    int tCase;
    cin>>tCase;

    while(tCase--){
        string s;
        cin>>s;
        
        if(s.length()<3)
        cout<<0<<"\n";
        else{
        int zeros=0,ones=0;

        loop(s.length()){
            if(s[i]=='0') zeros++;
            else ones++;
        }

        if (zeros!=ones) cout << min(zeros, ones)<<"\n";
	    else cout << zeros - 1<<"\n";
        
        }
    }

	return 0;
}
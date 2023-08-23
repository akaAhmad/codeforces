#include <iostream> 
#include <vector>
#include <set>
#include<map>
using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

int main()
{
	
    int n,m;  string server,ip; map<string,string> mp;
    
    cin>>n>>m;

	loop(n){
        cin>>server>>ip;
        ip+=";";
        mp[ip]=server;
    }

    loop(m){
        cin>>server>>ip;
        cout<<server<<" "<<ip<<" #"<<mp[ip]<<endl;
    }

	return 0;
}
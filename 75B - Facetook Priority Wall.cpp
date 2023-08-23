#include <iostream>  
#include <vector>
#include <set>
#include<map>
#include<algorithm>
using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

struct likePair {  //hold name and the points he earned
    string s;
    int pts;
};

bool operator<(likePair A, likePair B){ //overload on '<'
    if(A.pts<B.pts) return true;
    else if(A.pts==B.pts) return A.s<B.s;
    return false;
}

int main(){
    string anyText,givenName,name1,name2,action;
    int nActions;
    map<string,int>mp;
    map<string,int>::iterator it;
    vector<likePair>output; //hold the final result

    cin>>givenName>>nActions;

    loop(nActions){

        cin>>name1>>action;

        if(action=="likes")
        cin>>name2>>anyText;
        else
        cin>>anyText>>name2>>anyText;
        name2=name2.substr(0,name2.size()-2); // to remove " 's " from the name2
        
        //now we complete the line ,let's calc Points

        if(givenName==name1){
            if(action=="likes") mp[name2]+=5;
            else if(action=="commented") mp[name2]+=10;
            else mp[name2]+=15;
        }
        else if(givenName==name2){
            if(action=="likes") mp[name1]+=5;
            else if(action=="commented") mp[name1]+=10;
            else mp[name1]+=15;
        }

        mp[name2]+=0;
        mp[name1]+=0;

    }

     //fill vector with Result
    for (it=mp.begin();it!=mp.end();it++){
        likePair lp;
        lp.s=it->first;
        lp.pts=-it->second; // ' - ' before iterator  i think it reverse the result "clown emoji because that fkin' website doesn't support it"

        if(it->first!=givenName) output.push_back(lp);

    }

    sort (output.begin(),output.end());
    //first we sort it with points ,print it out
    loop(output.size()) cout<<output[i].s<<"\n";
    return 0;   

    
}
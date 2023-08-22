

#include<iostream>

#include<stack>
#include<algorithm>
using namespace std;

#define loop(n) for (size_t i = 0; i < n; i++)


int main(){

   string line; 
 
   int rLen,sLen,tCase;
   cin>>tCase;

   while(tCase--){
      stack<char>round;
   stack<char>square; 

    cin>>line;
    rLen=0; sLen=0;

    loop(line.length()){
        
        if(line[i]=='(')
        round.push(line[i]);
        else if(line[i]==')'){

            if(!round.empty()){
                round.pop();
                rLen++;
            }
            
        }
        else if(line[i]=='[')
        square.push(line[i]);
        else {

            if(!square.empty()){
                square.pop();
                sLen++;
            }
        }
    }

    cout<<rLen+sLen<<"\n";
   }
    

    

}

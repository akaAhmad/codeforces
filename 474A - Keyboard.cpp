#include <iostream>
#include<string>
using namespace std;
 
int main()
{
    string keys="qwertyuiopasdfghjkl;zxcvbnm,./";
    string moleText,shifting;
    cin>>shifting>>moleText;
    for (int i=0;i<moleText.length();i++){
       
        if (shifting=="R"){
            for (int j=0;j<keys.length();j++)
            if (moleText[i]==keys[j]){
            int newj=j - 1;
            cout<<keys[newj];
            }
        }
        else if(shifting=="L"){
            for (int j=0;j<keys.length();j++)
            if (moleText[i]==keys[j]){
            int newj=j + 1;
            cout<<keys[newj];
            }
        }
    
    }
}
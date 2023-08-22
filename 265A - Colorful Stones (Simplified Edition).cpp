#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string stones,ins;
    int movedSteps=0,iStone=0;
    cin>>stones>>ins;
    for (int i=0;i<ins.length();i++)
    if(ins[i]==stones[iStone]){
    movedSteps++; iStone++;}
    cout<<movedSteps + 1;
 
}
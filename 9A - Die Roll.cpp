#include <iostream>
using namespace std;
 
int main()
{
    string dice[]={"1/6","1/3","1/2","2/3","5/6","1/1"};
    int y,w,d;
    cin>>y>>w;
 
    d=6-max(y,w);
    cout<<dice[d];
}
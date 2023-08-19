#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
 
int main(){
 short matrix[5][5],xPostion,yPostion;
 
 for(short x=0;x<5;x++)
    for (short y=0;y<5;y++){
      cin>>matrix[x][y];
    }
 
  for(short x=0;x<5;x++)
    for (short y=0;y<5;y++){
      if (matrix[x][y]==1){
          xPostion=x;
          yPostion=y;
          break;
      }
    }
   
 
    cout<<(abs(yPostion - 2)+abs(xPostion - 2));
 
 
 
}
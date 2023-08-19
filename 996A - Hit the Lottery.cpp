#include <iostream>
using namespace std;
 
 
int main() {
   
    int x,sum=0;
    cin>>x;
    while(1){
        if (x==0)
        break;
        else{
        if (x>=100){
            sum+=x/100;
            x%=100;
        }
        
        if (x>=20 && x<100){
            sum+=x/20;
            x%=20;
        }
     
        if (x>=10 && x<20){
           sum+=x/10;
           x%=10;
        }
        
        if (x>=5 && x<10){
        
           sum+=x/5;
           x%=5;
          
        }
        
        if (x<5){
           sum+=x;
          x=0;
           
        }
        
    }}
    cout<<sum;
 
}
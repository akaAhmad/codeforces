#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define k_loop(n) for (int k = 0; k < n; k++)

int main(){

    
    int tCase,nOfWords; 
    cin>>tCase;
    
    while(tCase--){
       cin>>nOfWords;
        
        vector<set<string>>v(3);

        k_loop(3){     //fill Vector with words
            loop(nOfWords){
                string word; cin>>word;
                v[k].insert(word);
            }
        }

        vector<int>points(3, 0);
        k_loop(3){
            for(set<string>::iterator it = v[k].begin(); it != v[k].end(); it++){
                int counter=0;
                loop(3){
                    if(i == k) continue;
                    counter += v[i].count(*it);
                }
                if(counter == 0){points[k] += 3;}
                else if(counter == 1){points[k] += 1;}
            }
        }
        
        k_loop(3) cout << points[k] << " ";
        cout << "\n";
    }

    return 0;
}
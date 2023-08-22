#include<iostream>
#include<stack>
using namespace std;


#define loop(n) for(size_t i = 0; i < n; i++)
#define loopOne(n) for(size_t i = 1; i < n; i++)


int main()
{
    
    string s;
    int count=0;
    stack<char> st;
    cin>>s;
    
    loop(s.length())
    {
        if(st.empty())
            st.push(s[i]);
        else
        {
            int top=st.top();
            if(top==s[i])
                {
                    st.pop();
                    count^=1;
                }
            else
             st.push(s[i]);
        }


    }
    if(count)
        cout<<"Yes";
    else cout<<"No";

}
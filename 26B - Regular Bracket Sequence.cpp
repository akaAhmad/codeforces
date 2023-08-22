#include<iostream>
#include<string>
#include<vector>
#include<stack>

using namespace std;


int main() {

	string s;
	cin >> s;
	stack<char> k;
	int counter=0;
	for (int i = 0; i <s.length(); i++)
	{
		if (s[i] == '(') 
        k.push(s[i]);
        else if (s[i] == ')' && (!k.empty()&&k.top() == '(')) {
			k.pop();
			counter++;
		}

	}
	cout << counter * 2;
	return 0;
}
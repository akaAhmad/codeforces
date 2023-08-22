#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<stack>

using namespace std;


int main() {

     long long int t, a, b, c, n, sum;
     cin >> t;
     for (size_t i = 0; i < t; i++)
     {
          sum = 0;
          cin >> a >> b >> c >> n;
          sum += a + b + c + n;
          if (sum % 3 != 0 ||sum / 3 < a || sum / 3 < b || sum / 3 < c)
               cout << "NO" << endl;
          else
               cout << "YES" << endl;
     }
    
 return 0;
}
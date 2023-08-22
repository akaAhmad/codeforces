#include <iostream>
using namespace std;
int fModulu = 1000000007;

int main()
{
    long long int x, y, t;
    cin >> x >> y>> t;
    long long int s[] = {x, y, y - x, -x, -y, x - y};
    cout << (s[(t - 1) % 6] % fModulu + fModulu) % fModulu;
    return 0;
}
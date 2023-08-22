#include <iostream>
using namespace std;
int main()
{
	int price, fakka,p;
	cin >> price >> fakka;
	p = price;
	for (int i = 1;i < 10;i++)
	{
		if (price % 10 != fakka&& price % 10 != 0)
			price += p;
	}
	cout << price/p << endl;
}
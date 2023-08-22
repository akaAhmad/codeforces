#include<iostream>
#include<algorithm>


using namespace std;


int main() {

	int x;
	cin >> x;
	int arr[x];
	for (size_t i = 0; i < x; i++)
	cin >> arr[i];
    sort(arr, arr + x);
	for (size_t i = 0; i < x; i++)
    cout << arr[i] << " ";
	
	
}
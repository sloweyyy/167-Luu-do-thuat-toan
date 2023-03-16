#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = 2;
	int k = 1;
	while (t < n)
	{
		t = t * 2;
		k++;
	}
	cout << "k = " << k;
	return 19;
}
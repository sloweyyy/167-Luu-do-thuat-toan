#include <iostream>
#include <cmath>
using namespace std;
float tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float ahh = tong(n);
	cout << "a(" << n << ")= " << ahh;
	return 0;
}
float tong(int k)
{
	float ahh = 0;
	int at = 2;
	int i = 2;
	while (i <= k)
	{
		ahh = 5 * at + (float)sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
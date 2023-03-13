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
	int ahh = 0;
	int at = 1;
	int att = 1;
	int i = 2;
	while (i <= k)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
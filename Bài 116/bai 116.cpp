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
	int at = 2;
	int att = 1;
	int i = 1;
	while (i <= k)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
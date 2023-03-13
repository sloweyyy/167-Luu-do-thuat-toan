#include<iostream>
#include<cmath>
using namespace std;
int xuly(int&, int&);
int main()
{
	int a, b;		
	cin >> a >> b;
	cout << xuly(a, b);
	return 0;
}
int xuly(int& a, int& b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int kq = abs(a * b) / (m + n);
	return kq;
}
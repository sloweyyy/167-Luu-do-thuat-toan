#include <iostream>
using namespace std;
float tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = tong(n);
	cout << "S(" << n << ")= " << kq;
	return 0;
}
float tong(int k)
{
	float s = 0;
	int i = 1;
	int m = 0;
	int dau = -1;
	while (i <= k)
	{
		m = m + i;
		s = s + (float)dau * 1 / m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}
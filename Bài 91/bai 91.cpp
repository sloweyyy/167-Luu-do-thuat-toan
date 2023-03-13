#include <iostream>
using namespace std;
float tong(int, int);
int main()
{
	int x, n;
	cout << "Nhap x : ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float kq = tong(x, n);
	cout << "S(" << x << ", " << n << ")= " << kq;
	return 0;
}
float tong(int y, int k)
{
	float s = 1;
	int t = 1;
	int i = 2;
	int m = 1;
	int dau = 1;
	while (i <= 2* k)
	{
		t = t * y * y;
		m = m * (i - 1) * i;
		s = s + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
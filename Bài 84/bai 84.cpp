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
	float s = 0;
	float t = y;
	int i = 1;
	while (i <= k)
	{
		t = t * (float)sin(t);
		s = s + t;
		i = i + 1;
	}
	return s;
}
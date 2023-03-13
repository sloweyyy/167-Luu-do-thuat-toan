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
	int s = 1;
	int t = 1;
	int i = 2;
	while (i <= k+1)
	{
		t = t * y;
		s = s + i * t;
		i = i + 1;
	}
	return s;
}
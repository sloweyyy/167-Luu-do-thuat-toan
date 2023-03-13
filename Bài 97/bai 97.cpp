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
	int i = 1;
	int t = 1;
	while (i <= k)
	{
		t = t * y;
		s = sqrt(t + s);
		i = i + 1;
	}
	return s;
}
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
	int t = 1;
	int i = 2;
	while (i <=2* k)
	{
		t = t * y * y;
		s = s + t;
		i = i + 2;
	}
	return s;
}
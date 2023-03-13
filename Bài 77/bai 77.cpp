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
	int s = 0;
	int i = 1;
	while (i <= k)
	{
		s = s + pow(i, y);
		i = i + 1;
	}
	return s;
}
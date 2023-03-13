#include <iostream>
using namespace std;
float tich(float, int);
int main()
{
	int x, n;
	cout << "Nhap x= ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float kq = tich(n, x);
	cout << "S(" << n << "," << x << ") = " << kq;
	return 0;
}
float tich(float y, int k)
{
	float s = y;
	;	for (int i = 1; i <= k; i++)
	{
		s = s * (y+i);
	}
	return s;
}
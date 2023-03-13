#include <iostream>
#include <cmath>
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
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 1;
	}
	return s;
}
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
	int i = k;
	while (i >= 1)
	{
		s = (float)sqrt(i + s);
		i = i - 1;
	}
	return s;
}
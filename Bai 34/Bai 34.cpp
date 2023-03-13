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
	int i = 2;
	while (i <= 2 * k + 1)
	{
		s = s + (float)(i - 1) / i;
		i = i + 1;
	}
	return s;
}
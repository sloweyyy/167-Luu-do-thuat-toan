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
	float s = 1;
	int i = 1;
	while (i <= k)
	{
		s = s * (float)(i + 1 / pow(i, 2));
		i = i + 1;
	}
	return s;
}
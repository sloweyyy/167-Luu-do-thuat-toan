#include <iostream>
using namespace std;
int tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tong(n);
	cout << "S(" << n << ")= " << kq;
	return 0;
}
int tong(int k)
{
	int s = 0;
	int i = 1;
	while (i <= k)
	{
		s = s + i*i;
		i = i + 1;
	}
	return s;
}
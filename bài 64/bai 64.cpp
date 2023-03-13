#include <iostream>
using namespace std;
int tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	n = abs(n);
	int kq = tong(n);
	cout << "Chu so lon nhat cua " << n << " la: " << kq;
	return 0;
}
int tong(int k)
{
	int t = k;
	int lc = k % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv >lc)
			lc= dv;;
		t = t / 10;
	}
	return lc;
}
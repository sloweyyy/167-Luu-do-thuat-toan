#include <iostream>
using namespace std;
int tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tong(n);
	cout << "Tong  cac chu so chan cua " << n << " la: " << kq;
	return 0;
}
int tong(int k)
{
	int s = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;;
		t = t / 10;
	}
	return s;
}
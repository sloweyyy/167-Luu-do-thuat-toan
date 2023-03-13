#include <iostream>
using namespace std;
int tich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tich(n);
	cout << "Tich cac chu so chan cua " << n << " la: " << kq;
	return 0;
}
int tich(int k)
{
	int s = 1;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			s = s * dv;
		t = t / 10;;
	}
	return s;
}
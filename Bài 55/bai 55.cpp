#include <iostream>
using namespace std;
int tichuocso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tichuocso(n);
	cout << "Tich cac uoc so le cua " << n << " la: " << kq;
	return 0;
}
int tichuocso(int k)
{
	int t = 1;
	for (int i = 1; i <= k; i=i+2)
		if (k % i == 0)
			t = t * i;
	return t;
}
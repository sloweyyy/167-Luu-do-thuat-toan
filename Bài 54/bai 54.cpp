#include <iostream>
using namespace std;
int tonguocso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tonguocso(n);
	cout << "Tong cac uoc so chan cua " << n << " la: " << kq;
	return 0;
}
int tonguocso(int k)
{
	int s = 0;
	for (int i = 2; i <= k; i=i+2)
		if (k % i == 0)
			s = s + i;
	return s;
}
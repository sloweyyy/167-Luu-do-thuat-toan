#include <iostream>
using namespace std;
int tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tong(n);
	cout << "Tong so luong cac chu so cua " << n << " la: " << kq;
	return 0;
}
int tong(int k)
{
	int dem = 0;
	int t = k;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	return dem;
}
#include <iostream>
using namespace std;
int tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tong(n);
	cout << "Tong so luong cac uoc so cua " << n << " la: " << kq;
	return 0;
}
int tong(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem ++;
	return dem;
}
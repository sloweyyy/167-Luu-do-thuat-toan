#include<iostream>
using namespace std;

int TimChuSoNhoNhat(int n)
{
	int lc = n % 10;
	int t = n, dem = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (lc > dv)
			lc = dv;
		t /= 10;
	}
	return lc;
}
int DemChuSoNhoNhat(int n)
{
	int dem = 0;
	int m = n;
	while (m != 0)
	{
		int dv = m % 10;
		if (TimChuSoNhoNhat(n) == dv)
			dem++;
		m /= 10;
	}
	return dem;
}
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dem = DemChuSoNhoNhat(n);
	cout << dem;
	return 0;
}
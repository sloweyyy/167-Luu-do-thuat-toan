#include<iostream>
using namespace std;
void xuly(int&);
int main()
{
	int n;
	cin >> n;
	xuly(n);
	return 0;
}
void xuly(int& n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		cout << n << " la so nguyen to";
	else
		cout << " khong la so nguyen to";
}
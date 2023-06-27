#include <iostream>
using namespace std;

long long uscln(long long, long long);

int main()
{
	long long  a, b;
	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	long long ucln = uscln(a, b);
	cout << "Uoc chung lon nhat cua hai so vua nhap la: " << ucln;
	return 1;
}

long long uscln(long long a, long long b)
{
	a = abs(a);
	b = abs(b);
	while (a != 0 && b != 0)
	{
		if (a > b)
			a -= b;
		else b -= a;
	}
	return a + b;
}
